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

static int ft_check_base(char *base) {
  int i;
  int j;

  i = 0;
  if (base[0] == '\0')
    return (0);
  if (base[1] == '\0')
    return (0);
  i = 0;
  while (base[i]) {
    j = i + 1;
    while (base[j]) {
      if (base[i] == base[j])
        return (0);
      j++;
    }
    i++;
  }
  return (1);
}

int ft_putnbr_base(long n, char *base) {
  int i;
  if (ft_check_base(base) != 0) {
    if (n < 0) {
      ft_putchar('-');
      n = -n;
    }
    if (n >= (long)ft_strlen(base)) {
      ft_putnbr_base(n / ft_strlen(base), base);
      ft_putnbr_base(n % ft_strlen(base), base);
    } else {
      ft_putchar(base[n]);
    }
  }
  i = ft_count(n);
  return (i);
}
// int main()
// {
//   int n =ft_putnbr_base(10000,"0123456789");
//   printf("%d",n);
// }
