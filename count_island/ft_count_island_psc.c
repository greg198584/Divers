/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_island_psc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 14:54:02 by glafitte          #+#    #+#             */
/*   Updated: 2014/11/14 08:19:13 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/* count island pseudo code */

/* fonction : entier ft_get_size(pointeur sur chaine (name files),
 * pointeur sur file descriptor ,pointeur sur un entier appeler taille)
 * --- declarer buffer de 1024 charactere
 * --- declarer un tableau de caractere, un tableau pour stocker les x et y,
 * --- un entier pour stocker nombre de caractere - ret.
 * --- un entier pour compteur - i.
 *
 *  si (chaine pas null ou ouvrir fichier (utiliser pointeur file descriptor)  
 *  verifier erreur )
 *
 *  tant que (il est pas a la fin du fichier, lit le fichier 1024 par 1024 
 *  caractere, les stockent dans le buffer et 
 *  renvoi le nombre de caractere lu dans le retour)
 *
 *  i initialiser a -1 pour parcourir les caractere lu
 *  tant que (incremeter i avant, inferieur a retour)
 *
 *  --- si buffer[caractere actuellement lu] est egal a un retour a la ligne
 *  --- --- si (tableau[0] est different deferent de 0 ET 
 *  			i - tableau[1] modulo tableau[0] 
 *  			est different de 0 ou i est superieur a 1024)
 *  			retourner 0;
 *  			tableau[0] egal a i diviser (tableau[1] + 1) ou si c'est null
 *  				egal i.
 *  			incremeter tableau[1] + 1
 *
 *  		pointeur taille egale pointeur taille + retour.
 *  		fermer (pointeur file descriptor)
 *			retourner(tableau[0]);
 * */
int		ft_get_size(char *arg, int *fd, int *size)
{
	char	buffer[1024];
	int		xy[2] = {0, 0};
	int		ret;
	int		i;

	if (!arg || (*fd = open(arg, O_RDONLY)) < 0)
		return (0);
	while ((ret = read(*fd, buffer, 1024)))
	{
		i = -1;
		while (++i < ret)
		{
			if (buffer[i] == '\n')
			{
				if ((xy[0] != 0 && (i - xy[1]) % xy[0] != 0) || i > 1024)
					return (0);
				xy[0] = xy[0] ? i / (xy[1] + 1) : i;
				xy[1]++;
			}
		}
		*size +=ret;
	}
	close(*fd);
	return (xy[0]);
}


/* fonction retournant rien : ft_find_island ( param : pointeur sur caractere
 * 		appeller map, entier appeler index, entier tableau[2], 
 * 		pointeur caractere appeler nbr_island)
 *
 * 		si (index superieur tableau[0])
 * 		retourner 
 * 		si (map[index] == 'X')
 * 			map[index] = nbr_island
 * 			rapeller la fonction find_island (map , index + 1, tableau,nbr_island)
 * 			rapeller la fonction find_island (map , index + tableau[1] + 1, tableau,nbr_island)
 * 			rapeller la fonction find_island (map , index - 1, tableau,nbr_island)
 * 			rapeller la fonction find_island (map , index - tableau[1] - 1, tableau,nbr_island)*
 * */
void	ft_find_island(char *map, int index, int xy[2], char *nbr_island)
{
	if (index > xy[0])
		return ;
	if (map[index] == 'X')
	{
		map[index] = *nbr_island;
		ft_find_island(map, index + 1, xy, nbr_island);
		ft_find_island(map, index + xy[1] + 1, xy, nbr_island);
		ft_find_island(map, index - 1, xy, nbr_island);
		ft_find_island(map, index - xy[1] - 1, xy, nbr_island);
	}
}
/* fonction print_island (pointeur caractere appeler map, entier taille ligne,
 * 			entier appeler taille )
 *
 * 		declarer entier tableau[2]
 * 		entier i
 * 		caractere nbr_island
 *
 * 		nbr = 0
 * 		i = -1
 * 		tableau[0] egal a taille
 * 		tableau[1] egal a taille ligne
 * 		tant que (++i < taille)
 * 			si map[i] est egale a X
 * 				appeler fonction find_island (map, i, tableau, adresse de nbr)
 * 				nbr = nbr + 1
 *
 * 		i = -1
 * 		ecrire sur stdout , map, size
 * 		si map non null
 * 		liberer map
 * */
void	ft_print_island(char *map, int size_line, int size)
{
	int		xy[2];
	int		i;
	char	nbr_island;

	nbr_island = '0';
	i = -1;
	xy[0] = size;
	xy[1] = size_line;
	while (++i < size)
	{
		if (map[i] == 'X')
		{
			ft_find_island(map, i, xy, &nbr_island);
			nbr_island = nbr_island + 1;
		}
	}
	write(1, map, size);
		if (map)
			free(map);
}
 /* fonction compter island (parametre arg )
  *
  * declarer caractere appeler map
  * 		entier appeler size
  * 		entier appeler fd
  * 		entier appeler taille ligne
  *	
  *		taille = 0 
  *		si (taille ligne = ft_get_size) egal 0 
  *		ou
  *		ouvrir arg dans fd est inferieur a 0
  *		ou
  *		allouer memoire a map verifier si  echou
  *		retourner 0
  *
  *		map[taille ] = caractere null
  *		si lecture marche pas 
  *			retourner 0
  *		appeler print_island 
  *		fermer fd
  *		retourner 1
  * */
int	ft_count_island(char *arg)
{
	char	*map;
	int		size;
	int		fd;
	int		size_line;

	size = 0;
	if ((size_line = ft_get_size(arg, &fd, &size)) == 0) 
		return (0);
	if (!size)
		return (0);
	if ((fd = open(arg, O_RDONLY)) < 0)
		return (0);
	if (!(map = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	map[size] = '\0';
	if ((read(fd, map, size)) < 0)
		return (0);
	ft_print_island(map, size_line, size);
	close(fd);
	return (1);
 }

 int	main(int argc, char **argv)
 {
 	if (argc == 2)
	{
		if (ft_count_island(argv[1]) == 0)
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
