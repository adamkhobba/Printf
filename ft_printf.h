/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:17:05 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/28 15:17:10 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINF_H
#define FT_PRINF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
int ft_putstr(const char *s);
int ft_putchar(char c);
int ft_putnbr_base(long n, char *base);
size_t ft_strlen(char *s);
int ft_putunsigend_nbr(long long n);
int ft_count(long n);
int ft_putpointer(void *p);

#endif
