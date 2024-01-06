/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayegen <ayegen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 20:22:52 by ayegen            #+#    #+#             */
/*   Updated: 2024/01/06 19:55:49 by ayegen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putstr(char *str);
int		ft_printf(const char *sign, ...);
int		ft_putchar(char c);
int		ft_putpointer(void *ptr);
int		ft_putnbr(int number);
int		ft_putunint(unsigned int number);
char	*ft_convert(size_t num, char *set);

#endif