/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/25 15:01:25 by hamza             #+#    #+#             */
/*   Updated: 2014/09/27 15:17:56 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SASTANTUA_H
# define SASTANTUA_H

#include <unistd.h>
#include <stdarg.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_printf(const char *str, ...);

void	sastantua(int size);

#endif
