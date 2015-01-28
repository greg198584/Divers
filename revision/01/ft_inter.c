/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 12:04:03 by glafitte          #+#    #+#             */
/*   Updated: 2014/12/17 17:05:08 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inter(char *s1, char *s2, int *tab)
{
	while (*s2 != '\0')
		tab[(int)*s2++] = 1;
	while (*s1 != '\0')
	{
		if (tab[(int)*s1] == 1)
		{
			write(1, s1, 1);
			tab[(int)*s1] = 0;
		}
		s1++;
	}
}

int		main(int argc, char **argv)
{
	static int	tab[256];

	if (argc == 3)
		inter(argv[1], argv[2], tab);
	return (write(1, "\n", 1) - 1);
}
