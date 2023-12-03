/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:38:55 by akhobba           #+#    #+#             */
/*   Updated: 2023/12/03 12:19:10 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, char *base)
{
	int		count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_puthex(nb / 16, base);
		count += ft_puthex(nb % 16, base);
	}
	else
	{
		count += ft_putchar(base[nb]);
	}
	return (count);
}
/*
int main ()
{
	ft_puthex(-1,"0123456789abcdef");
	printf("\n%x", -1);
}*/
