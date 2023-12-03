/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:26:11 by akhobba           #+#    #+#             */
/*   Updated: 2023/12/03 21:14:46 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_condi(va_list arg, const char *s)
{
	int	n;

	n = 0;
	if (*(s + 1) == 's')
		n += ft_putstr(va_arg(arg, const char *));
	if (*(s + 1) == 'd' || *(s + 1) == 'i')
		n += ft_putnbr_base(va_arg(arg, int), "0123456789");
	if (*(s + 1) == 'c')
	n += ft_putchar(va_arg(arg, int));
	if (*(s + 1) == 'u')
		n += ft_putnbr_base((unsigned int)va_arg(arg, int), "0123456789");
	if (*(s + 1) == 'p')
		n += ft_putpointer(va_arg(arg, void *));
	if (*(s + 1) == 'x')
		n += ft_puthex(va_arg(arg, int), "0123456789abcdef");
	if (*(s + 1) == 'X')
		n += ft_puthex(va_arg(arg, int), "0123456789ABCDEF");
	if (*(s + 1) == '%')
		n += ft_putchar('%');
	return (n);
}

static int	ft_realy(va_list arg, const char *s)
{
	int	n;

	n = 0;
	while (*s)
	{
		if (*s == '%')
			n += ft_condi(arg, s);
		if (*s == '%' && (*(s + 1) == 'd' || *(s + 1) == 'i'
				|| *(s + 1) == 's' || *(s + 1) == 'c' || *(s + 1) == 'p'
				|| *(s + 1) == 'x' || *(s + 1) == 'X' || *(s + 1) == 'u'
				|| *(s + 1) == '%'))
		{
			s += 2;
			if (*s == '\0')
				break ;
			if (*s == '%')
				continue ;
		}
		if (*s)
		{
			n += ft_putchar(*s);
		}
		s++;
	}
	return (n);
}

int	ft_printf(const char *s, ...)
{
	int		n;
	va_list	arg;

	va_start(arg, s);
	n = ft_realy(arg, s);
	va_end(arg);
	return (n);
}
