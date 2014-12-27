/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 18:22:13 by glafitte          #+#    #+#             */
/*   Updated: 2014/12/27 18:43:21 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

char	*ft_add(int a, int b)
{
	int		value;
	char	*result;

	value = a + b;
	result = ft_strdup(ft_itoa(value));
	return (result);
}

char	*ft_sub(int a, int b)
{
	int		value;
	char	*result;

	value = a - b;
	result = ft_strdup(ft_itoa(value));
	return (result);
}

char	*ft_mult(int a, int b)
{
int		value;
	char	*result;

	value = a * b;
	result = ft_strdup(ft_itoa(value));
	return (result);
}

char	*ft_divise(int a, int b)
{
	int		value;
	char	*result;

	value = a / b;
	result = ft_strdup(ft_itoa(value));
	return (result);
}
