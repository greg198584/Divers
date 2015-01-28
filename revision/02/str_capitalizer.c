/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 14:29:27 by glafitte          #+#    #+#             */
/*   Updated: 2015/01/28 16:27:01 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

# define SPC(c) (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v')
# define MAG(c) (c >= 'A' && c <= 'Z')
# define MIN(c) (MAG(c - 32))

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0');
	return (i);
}

char	*ft_str_capitalizer(char *str)
{
	int	i;

	i = -1;
	while (*(str + ++i) != '\0')
		*(str + i) += 32 * MAG(*(str + i));
	*str -= 32 * MIN(*str);
	i = 0;
	while (*(str + ++i) != '\0')
		if (SPC(*(str + i + 1)))
			*(str + i) -= 32 * MIN(*(str + i));
	return (str);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > i)
	{
		while (i < argc)
		{
			write(1, ft_str_capitalizer(argv[i]), ft_strlen(ft_str_capitalizer(argv[i])));
			if (i++ < argc - 1)
				write(1, "\n", 1);
		}
	}
	return (write(1, "\n", 1) -1);
}
