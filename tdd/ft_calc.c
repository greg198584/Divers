/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 18:23:00 by glafitte          #+#    #+#             */
/*   Updated: 2015/02/10 12:39:36 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_math tab[] =
{
	{&ft_add, '+'},
	{&ft_sub, '-'},
	{&ft_mult, '*'},
	{&ft_divise, '/'},
	{&ft_modulo, '%'},
	{NULL, -1}
};

int	ft_calc(char *calcul)
{
	int		value_1;
	int		value_2;
	char	**argv;
	int		i;
	int		result;

	i = -1;
	if (ft_strchr(calcul, ' ') == NULL)
		return (0);
	argv = ft_strsplit(calcul, ' ');
	value_1 = ft_atoi(argv[0]);
	value_2 = ft_atoi(argv[2]);
	while (tab[++i].key != -1)
	{
		if (tab[i].key == argv[1][0])
		{
			result = tab[i].func_ptr(value_1, value_2);
			return (result);
		}
	}
	return (0);
}
