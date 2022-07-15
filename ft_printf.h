/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:40:00 by jnevado-          #+#    #+#             */
/*   Updated: 2022/07/15 11:51:23 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include "unistd.h"
# include "stdarg.h"

void	ft_printf_char(char c, int *cont);
void	ft_printf_string(char *str, int *cont);
void	ft_printf_decimal(int num, int *cont);
void	ft_printf_integer(int num, int *cont);
void	ft_printf_unsigned(unsigned int num, int *cont);
int		ft_printf(char const *str, ...);

#endif