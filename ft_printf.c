/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:26:11 by akhobba           #+#    #+#             */
/*   Updated: 2023/12/02 12:26:12 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_condi(va_list arg, const char *s, int i) {
  int n;

  n = 0;
  if (s[i + 1] == 's')
    n += ft_putstr(va_arg(arg, const char *));
  if (s[i + 1] == 'd' || s[i + 1] == 'i')
    n += ft_putnbr_base(va_arg(arg, int), "0123456789");
  if (s[i + 1] == 'c')
    n += ft_putchar(va_arg(arg, int));
  if (s[i + 1] == 'u')
    n += ft_putnbr_base((unsigned int)va_arg(arg, int), "0123456789");
  if (s[i + 1] == 'p')
    n += ft_putpointer(va_arg(arg, void *));
  if (s[i + 1] == 'x')
    n += ft_putnbr_base(va_arg(arg, int), "0123456789abcedf");
  if (s[i + 1] == 'X')
    n += ft_putnbr_base(va_arg(arg, int), "0123456789ABCDEF");
  if (s[i + 1] == '%')
    n += ft_putchar('%');
  return (n);
}

static int ft_realy(va_list arg, const char *s) {
  int i;
  int n;

  i = 0;
  while (s[i] != '\0') {
    if (s[i] == '%')
      n += ft_condi(arg, s, i);
    if (s[i] == '%' && (s[i + 1] == 'd' || s[i + 1] == 'i' || s[i + 1] == 's' ||
                        s[i + 1] == 'c' || s[i + 1] == 'p' || s[i + 1] == 'x' ||
                        s[i + 1] == 'X' || s[i + 1] == 'u')) {
      i += 2;
      if (s[i] == '\0')
        break;
      if (s[i] == '%')
        continue;
    }
    if (s[i]) {
      ft_putchar(s[i]);
      n++;
    }
    i++;
  }
  return (n);
}

int ft_printf(const char *s, ...) {
  int n;
  va_list arg;

  va_start(arg, s);
  n = ft_realy(arg, s);
  va_end(arg);
  return (n);
}

int main(void) {
  int f;
  char s[] = "asdf";
  int n;
  int n1;

  f = 2999;
  ft_printf("%s\n%s%WW", s);
  printf("\n");
  printf("%s\n%s%WW", s);
  // n = ft_printf("%s%d", s, f);
  // ft_printf("\nn = %d\n", n);
  // n1 = printf("%s%d", s, f);
  // printf("\nn1 =%d", n1);
}
