/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_island.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 09:33:33 by glafitte          #+#    #+#             */
/*   Updated: 2014/11/13 11:15:05 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		ft_get_size(char *s, int *fd, int *size)
{
	char	buffer[1024];
	int		l_nl[2] = {0, 0};
	int		ret;
	int		i;

	if (!s || (*fd = open(s, O_RDONLY)) < 0)
		return (0);
	while ((ret = read(*fd, buffer, 1024)))
	{
		i = -1;
		while (++i < ret)
		{
			if (buffer[i] == '\n')
			{
				if ((l_nl[0] != 0 && (i - l_nl[1]) % l_nl[0] != 0) || i > 1024)
					return (0);
				l_nl[0] = l_nl[0] ? i / (l_nl[1] + 1) : i;
				l_nl[1]++;
			}
		}
		*size += ret;
	}
	close(*fd);
	return (l_nl[0]);
}

void	ft_find_island(char *map, int index, int s_sl[2], char *nbr)
{
	if (index > s_sl[0])
		return ;
	if (map[index] == 'X')
	{
		map[index] = *nbr;
		ft_find_island(map, index + 1, s_sl, nbr);
		ft_find_island(map, index + s_sl[1] + 1, s_sl, nbr);
		ft_find_island(map, index - 1, s_sl, nbr);
		ft_find_island(map, index - s_sl[1] - 1, s_sl, nbr);
	}
}

void	ft_print_island(char *map, int size_line, int size)
{
	int		s_sl[2];
	int		i;
	char	nbr;

	nbr = '0';
	i = -1;
	s_sl[0] = size;
	s_sl[1] = size_line;
	while (++i < size)
	{
		if (map[i] == 'X')
		{
			ft_find_island(map, i, s_sl, &nbr);
			nbr = nbr + 1;
		}
	}
	i = -1;
	write (1, map, size);
		if (map)
			free(map);
}

int		ft_count_island(char *s)
{
	char	*map;
	int		size;
	int		fd;
	int		size_line;

	size = 0;
	if ((size_line = ft_get_size(s, &fd, &size)) == 0)
		return (0);
	if (!size)
		return (0);
	if ((fd = open(s, O_RDONLY)) < 0)
		return (0);
	if(!(map = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	map[size] = '\0';
	if ((read(fd, map, size)) < 0)
		return (0);
	ft_print_island(map, size_line, size);
	close(fd);
	return (1);
}

int		main(int argc, char **argv)
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
