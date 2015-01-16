/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 18:22:13 by glafitte          #+#    #+#             */
/*   Updated: 2014/12/28 18:38:03 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

char	*ft_add(double a, double b)
{
	double	value;
	char	*result;

	value = a + b;
	result = ft_strdup(ft_itoa(value));
	return (result);
}

char	*ft_sub(double a, double b)
{
	double	value;
	char	*result;

	value = a - b;
	result = ft_strdup(ft_itoa(value));
	return (result);
}

char	*ft_mult(double a, double b)
{
	double	value;
	char	*result;

	value = a * b;
	result = ft_strdup(ft_itoa(value));
	return (result);
}

char	*ft_divise(double a, double b)
{
	double	value;
	char	*result;

	value = a / b;
	result = ft_strdup(ft_itoa(value));
	return (result);
}
