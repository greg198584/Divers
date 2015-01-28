/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 14:54:52 by glafitte          #+#    #+#             */
/*   Updated: 2014/12/17 16:05:16 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int		main(int argc, char **argv)
{
	static int	tab[256];
	int			i;
	char		*s1;
	char		*s2;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = -1;
	s1 = argv[1];
	s2 = argv[2];
	while (*s1++ != '\0')
	{
		if (tab[*(s1 - 1)] == 0)
			tab[*(s1 - 1)] = ft_putchar(*(s1 - 1));
	}
	while (*s2++ != '\0')
	{
		if (tab[*(s2 - 1)] == 0)
			tab[*(s2 - 1)] = ft_putchar(*(s2 - 1));
	}
	return (0);
}
