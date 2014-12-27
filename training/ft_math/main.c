/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 18:23:00 by glafitte          #+#    #+#             */
/*   Updated: 2014/12/27 18:41:30 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_math tab[] =
{
	{&ft_add, '+'},
	{&ft_sub, '-'},
	{&ft_mult, 'x'},
	{&ft_divise, '/'},
	{NULL, -1}
};

int	main(int argc, char **argv)
{
	int		value_1;
	int		value_2;
	int		i;
	char	*result;

	if (argc != 4)
	{
		ft_putendl("erreur rentre un calcul [ ex : 4 + 2 ]");
		return (0);
	}
	i = -1;
	value_1 = ft_atoi(argv[1]);
	value_2 = ft_atoi(argv[3]);
	while (tab[++i].key != -1)
	{
		if (tab[i].key == argv[2][0])
		{
			result = ft_strdup(tab[i].func_ptr(value_1, value_2));
			ft_putendl(result);
			return (0);
		}
	}
	return (0);
}
