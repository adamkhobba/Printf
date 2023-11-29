/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:17:18 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/28 15:17:21 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr(int n) {
  long nbr;

  nbr = n;
  if (nbr < 0) {
    nbr *= -1;
    ft_putchar('-');
  }
  if (nbr > 9) {
    ft_putnbr(nbr / 10);
    ft_putnbr(nbr % 10);
  } else
    ft_putchar(nbr + 48);
}

//int main() { ft_putnbr(-21447483648); }
