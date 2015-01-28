/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 15:29:26 by glafitte          #+#    #+#             */
/*   Updated: 2015/01/28 16:16:09 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_wstr(char *s, int first)
{
	int	start;
	int	i;

	i = 0;
	if (*(s + i) != '\0')
	{
		while (*(s + i) && (*(s + i) == ' ' || *(s + i) == '\t'))
			i++;
		if (*(s + i) == '\0')
			return ;
		start = i;
		while (*(s + i) && *(s + i) != ' ' && *(s + i) != '\t')
			i++;
		rev_wstr(s + i, 0);
		write(1, s + start, i - start);
		if (!first)
			write(1, " ", 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc = 2)
		rev_wstr(argv[1], 1);
	return (write(1, "\n", 1) -1);
}
