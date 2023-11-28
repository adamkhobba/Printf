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

int ft_printf(const char *, ...);
void ft_putstr(const char *s);
void ft_putnbr(int n);
void ft_putchar(char c);

#endif
