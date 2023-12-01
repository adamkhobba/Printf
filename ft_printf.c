/*************************************************************************** */
/*                                                                           */
/*                                                       :::      ::::::::   */
/*  ft_printf.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*  By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*  Created: 2023/11/28 15:16:52 by akhobba           #+#    #+#             */
/*  Updated: 2023/11/28 15:16:57 by akhobba          ###   ########.fr       */
/*                                                                           */
/*************************************************************************** */

#include "ft_printf.h"

static int  ft_condi(va_list arg, const char *s, int i)
{
  int n;

  n = 0;
  switch(s[i + 1])
  {
    case 's':
      n += ft_putstr(va_arg(arg, const char *));
      break;
    case 'd':
      n +=ft_putnbr_base(va_arg(arg, int),"0123456789");
      break;
    case 'i':
      n += ft_putnbr_base(va_arg(arg, int),"0123456789");
      break;
    case 'c':
      n += ft_putchar(va_arg(arg, int));
      break;
    case 'u':
      n += ft_putnbr_base((unsigned int )va_arg(arg, int), "0123456789");
      break; 
    case 'p': 
      n += ft_putpointer(va_arg(arg, void *));
      break;
    case 'x':
      n += ft_putnbr_base(va_arg(arg, int), "0123456789abcedf");
      break;
    case 'X':
      n += ft_putnbr_base(va_arg(arg, int), "0123456789ABCDEF");
      break;
    case '%':
      n += ft_putchar('%');
      break;
    default:
      return (0);
  }
  return (n);
}

static void  ft_realy(va_list arg, const char *s) 
{
  int i;

  i = 0;
  while (s[i]) 
  {
    if (s[i] == '%') 
      ft_condi(arg,s,i);
    if (s[i] == '%')
    { 
      i += 2;
      if (s[i] == '%')
        continue;
    }
    write(1, &s[i++], 1);
  }
}

int ft_printf(const char *s, ...) {
  va_list arg;
  va_start(arg, s);
  ft_realy(arg,s);
  va_end(arg);
  return 1;
}

int main() {
  char s[] = "adam";
  char c = 'x';
  int d = 230;
  int *p = &d;
  ft_printf("%d%%%s%p",d,s,p);
  printf("\n");
  printf("%d%%%s%p",d,s,p);
}
