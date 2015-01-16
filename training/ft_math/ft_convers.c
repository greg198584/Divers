/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/28 17:53:44 by glafitte          #+#    #+#             */
/*   Updated: 2014/12/28 18:40:38 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

double	ft_atof(char *str)
{
	double	value;
	double	power;
	int		i;
	int		sign;

	i = -1;
	value = 0.0;
	power = 1.0;
	while (i < ft_isspace(str[i]))
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		value = 10.0 * value + ft_atoi(ft_char_to_str(str[i]));
		i++;
	}
	if (str[i] == '.')
		i++;
	while (ft_isdigit(str[i]))
	{	
		value = 10.0 * value + ft_atoi(ft_char_to_str(str[i]));
		power *= 10;
		i++;
	}
	return (sign * value / power);
}
