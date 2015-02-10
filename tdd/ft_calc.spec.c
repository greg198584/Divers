/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 11:28:31 by glafitte          #+#    #+#             */
/*   Updated: 2015/02/10 12:39:53 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <moulitest.h>

int	ft_calc(char *calcul);

static void	simple_add(t_test *test)
{
	mt_assert(ft_calc("10 % 3") == 1);
}

static void	larg_multi(t_test *test)
{
	mt_assert(ft_calc("100 * 100") == 10000);
}

static void	simple_modulo(t_test *test)
{
	mt_assert(ft_calc("10 % 3") == 1);
}

static void	simple_sub(t_test *test)
{
	mt_assert(ft_calc("10 - 5") == 5);
}

static void	glue_test(t_test *test)
{
	mt_assert(ft_calc("10+2") == 0);
}
void		suite_ft_calc(t_suite *suite)
{
	SUITE_ADD_TEST(suite, simple_add);
	SUITE_ADD_TEST(suite, larg_multi);
	SUITE_ADD_TEST(suite, simple_modulo);
	SUITE_ADD_TEST(suite, simple_sub);
	SUITE_ADD_TEST(suite, glue_test);
}
