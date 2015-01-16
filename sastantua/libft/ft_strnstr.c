/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:00:09 by glafitte          #+#    #+#             */
/*   Updated: 2015/01/03 15:27:57 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i] && i < (int)n)
	{
		j = 0;
		while (s2[j] == s1[i + j] && (i + j) < (int)n)
			j++;
		if (!s2[j])
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
