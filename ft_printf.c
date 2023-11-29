/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:16:52 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/28 15:16:57 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *s, ...) {
  va_list arg;
  int i;
  va_start(arg, s);
  i = 0;
  while (s[i]) {
    if (s[i] == '%') {
      if (s[i + 1] == 's') 
        ft_putstr(va_arg(arg, const char *));
      if (s[i + 1] == 'd')
          ft_putnbr(va_arg(arg, int));
      if (s[i + 1] == 'c')
          ft_putchar(va_arg(arg, int));
      if (s[i + 1] == '%')
          ft_putchar('%');
    }
    if (s[i] == '%')
      i += 1;
    write(1, &s[i], 1);
    i++;
  }
  va_end(arg);

  return 1;
}

int main() {
  char s[] = "adam";
  char c = 'x';
  int d = 100;
  ft_printf("%s khobba%d %c", s,d,c);
}
