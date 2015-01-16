/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 18:22:38 by glafitte          #+#    #+#             */
/*   Updated: 2014/12/28 18:38:15 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include "libft/libft.h"

typedef struct	s_math
{
	char		*(*func_ptr)(double a, double b);
	char		key;
}				t_math;

char	*ft_add(double a, double b);
char	*ft_sub(double a, double b);
char	*ft_mult(double a, double b);
char	*ft_divise(double a, double b);
double ft_atof(char *str);

#endif
