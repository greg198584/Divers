/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 18:22:38 by glafitte          #+#    #+#             */
/*   Updated: 2014/12/27 18:42:35 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include "libft/libft.h"

typedef struct	s_math
{
	char		*(*func_ptr)(int a, int b);
	char		key;
}				t_math;

char	*ft_add(int a, int b);
char	*ft_sub(int a, int b);
char	*ft_mult(int a, int b);
char	*ft_divise(int a, int b);

#endif
