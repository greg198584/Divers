/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/27 22:06:14 by hamza             #+#    #+#             */
/*   Updated: 2014/09/28 00:58:23 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sastantua.h"
#include <stdio.h>

void	write_door(int *i, int *width_door, int space, int size_door)
{
	int position_key;

	position_key = size_door / 2;

	if ((space == position_key) && (*width_door == (size_door / 2) - 1)
		&& (size_door > 3))
		ft_putchar('$');
	else
		ft_putchar('|');
	*i = *i + 1;
	*width_door = *width_door + 1;
}

int		write_line(int line_nb, int space, int size_door)
{
	int i;
	int width_door;

	width_door = -size_door / 2;
	i = 0;
	while (i < space)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	i = 0;
	while (i <= line_nb * 2)
	{
		while ((i ==line_nb + width_door) && (space < size_door)
			&& (width_door <= size_door / 2))
			write_door(&i, &width_door, space, size_door);
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return (space - 1);
}

void	print_pyramid(int i, int space, int nb_jumps, int lines_jumps, int size)
{
	int condition_inc_nb_jumps;
	int var_jumps;

	var_jumps = 4;
	condition_inc_nb_jumps = 1;
	while (space + 1)
	{
		if (i == lines_jumps)
		{
			i += nb_jumps;
			space -= nb_jumps;
			lines_jumps = i + var_jumps;
			var_jumps++;
			if (condition_inc_nb_jumps == 2)
			{
				nb_jumps++;
				condition_inc_nb_jumps = 0;
			}
			condition_inc_nb_jumps++;
		}
		space = write_line(i, space, size);
		i++;
	}
}

void	sastantua(int size)
{
	int space;
	int i;
	int z;

	space = 0;
	i = 1;
	z = 0;
	if (size > 0)
	{
		while (i <= size)
		{
			space = space + 6 + z;
			if (i > 1)
				z += 1;
			if ((i > 1) && (i % 2))
				z += 1;
			i++;
		}
		if (!(size % 2))
			size -= 1;
		print_pyramid(0, space - 4, 2, 3, size);
		}
}
