/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 11:28:31 by glafitte          #+#    #+#             */
/*   Updated: 2015/02/10 12:56:33 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <moulitest.h>
#include <string.h>

int	ft_strcmp(char const *s1, char const *s2);

static void	string_cmp(t_test *test)
{
	char	*s1 = "coucou";
	char	*s2 = "coucou";

	mt_assert(ft_strcmp(s1, s2) == strcmp(s1, s2));
}

void		suite_ft_calc(t_suite *suite)
{
	SUITE_ADD_TEST(suite, string_cmp);
}
