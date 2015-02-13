/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 11:28:31 by glafitte          #+#    #+#             */
/*   Updated: 2015/02/11 12:57:39 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <moulitest.h>
#include <string.h>

int			ft_calc(char *calcul);

static void	simple_calcul(t_test *test)
{
	mt_assert(ft_calc("4 + 4") == 8);
}

static void	simple_calcul_2(t_test *test)
{
	mt_assert(ft_calc("4+2") == 0);
}

void		suite_ft_calc(t_suite *suite)
{
	SUITE_ADD_TEST(suite, simple_calcul);
	SUITE_ADD_TEST(suite, simple_calcul_2);
}
