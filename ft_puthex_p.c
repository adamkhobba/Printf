/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:55:16 by akhobba           #+#    #+#             */
/*   Updated: 2023/12/03 21:18:17 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_puthex_p(unsigned long nbr, char *base) {
  int i;
  unsigned long n;

  n = (unsigned long)nbr;
  i = 0;
  if (n >= (unsigned long)ft_strlen(base)) {
    i += ft_putnbr_base(n / ft_strlen(base), base);
    i += ft_putnbr_base(n % ft_strlen(base), base);
  } else {
    i += ft_putchar(base[n]);
  }
  return (i);
}
