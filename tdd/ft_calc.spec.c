/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 11:13:11 by glafitte          #+#    #+#             */
/*   Updated: 2015/02/14 11:20:26 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <moulitest.h>


int	ft_calc(char *calcul);

static void	simple_add(t_test *test)
{
	mt_assert(ft_calc("4+4 ") == 0);
}

static void	simple_multi(t_test *test)
{
	mt_assert(ft_calc("4 * 2") == 8);
}

static void	simple_add_false(t_test *test)
{
	mt_assert(ft_calc("4 + 2") == 6);
}

void	suite_ft_calc(t_suite *suite)
{
	SUITE_ADD_TEST(suite, simple_add);
	SUITE_ADD_TEST(suite, simple_multi);
	SUITE_ADD_TEST(suite, simple_add_false);
}
