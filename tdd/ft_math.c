/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 18:22:13 by glafitte          #+#    #+#             */
/*   Updated: 2015/02/10 12:18:25 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int	ft_add(int a, int b)
{
	int	value;

	value = a + b;
	return (value);
}

int	ft_sub(int a, int b)
{
	int	value;

	value = a - b;
	return (value);
}

int	ft_mult(int a, int b)
{
	int	value;

	value = a * b;
	return (value);
}

int	ft_divise(int a, int b)
{
	int	value;

	value = a / b;
	return (value);
}

int	ft_modulo(int a, int b)
{
	int	value;

	value = a % b;
	return (value);
}
