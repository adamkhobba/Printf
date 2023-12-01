/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:17:34 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/28 15:17:41 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putpointer(void *p) {
  int n;

  ft_putstr("0x");
  n = ft_putnbr_base((long)p, "0123456789abcdef");
  return (n);
}
// int main() {
//   int a;
//   int *p;
//
//   a = 2;
//   p = &a;
//   int f = ft_putpointer(p);
//   printf("\n%d", f);
//
//   int g = printf("\n%p", p);
//   printf("\n%d", g);
// }
