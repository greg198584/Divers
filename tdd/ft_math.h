/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 18:22:38 by glafitte          #+#    #+#             */
/*   Updated: 2015/02/10 12:18:43 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include "libft/libft.h"

typedef struct	s_math
{
	int		(*func_ptr)(int a, int b);
	char		key;
}				t_math;

int	ft_add(int a, int b);
int	ft_sub(int a, int b);
int	ft_mult(int a, int b);
int	ft_divise(int a, int b);
int	ft_modulo(int a, int b);

#endif
