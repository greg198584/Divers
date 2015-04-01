/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glafitte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 16:38:34 by glafitte          #+#    #+#             */
/*   Updated: 2015/04/01 15:40:20 by glafitte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../algo/libft/include/libft.h"
#include <stdlib.h>

int	main(void)
{
	char	*src = "coucou tous le monde";
	char	*src1 = "tous";
	char	*str;

	while (1)
	{
		str = ft_strstr(src, src1);
		ft_fprintf(1, "%s\n", str);
		str = NULL;
	}
}
