/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/27 15:16:34 by hamza             #+#    #+#             */
/*   Updated: 2015/01/16 10:28:52 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sastantua.h"

int		main(int argc , char **argv)
{
	if (argc < 2)
	{
		ft_putendl_fd("Erreur\n", 2);
		return (0);
	}
	sastantua(ft_atoi(argv[1]));
	return (0);
}
