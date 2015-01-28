/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 10:13:59 by glafitte          #+#    #+#             */
/*   Updated: 2015/01/28 11:08:42 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *s)
{
	char	c;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			c = *s - 32;
		else if (*s >= 'A' && *s <= 'z')
			c = *s + 32;
		else
			c = *s;
		write(1, &c, 1);
		s++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	return (write(1, "\n", 1) - 1);
}
