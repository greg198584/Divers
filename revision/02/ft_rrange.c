/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 15:08:37 by glafitte          #+#    #+#             */
/*   Updated: 2015/01/28 15:27:56 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

# define ABS(a) ((a < 0) ? -(a) : (a))

int	*ft_rrange(int start, int end)
{
	int	index;
	int	*tab;

	if ((tab = (int *)malloc(sizeof(int) * ABS(start - end) + 1)) == NULL)
		return (NULL);
	index = 0;
	if (start == end)
		tab[index] = start;
	else if (start < end)
		while (start <= end)
			tab[index++] = end--;
	else
		while (start >= end)
			tab[index++] = end++;
	return (tab);
}

int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_rrange(1, 3);
	while (tab[i] != 0)
	{
		printf("valeur = [%d]\n", tab[i]);
		i++;
	}
}
