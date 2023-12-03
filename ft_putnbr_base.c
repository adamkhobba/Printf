/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:17:18 by akhobba           #+#    #+#             */
/*   Updated: 2023/12/03 21:19:24 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long long n, char *base)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
		i++;
	}
	if (n >= (long)ft_strlen(base))
	{
		i += ft_putnbr_base(n / ft_strlen(base), base);
		i += ft_putnbr_base(n % ft_strlen(base), base);
	}
	else
	{
		i += ft_putchar(base[n]);
	}
	return (i);
}
/*
int main()
{
	int i;

	i = 0;
	int n = ft_putnbr_base(-234,"0123456789abcef");
	printf("\n%d", n);
}*/
