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

static void  ft_condi(va_list arg, const char *s, int i)
{
      if (s[i + 1] == 's') 
        ft_putstr(va_arg(arg, const char *));
      if (s[i + 1] == 'd' || s[i + 1] == 'i')
          ft_putnbr_base(va_arg(arg, int),"0123456789");
      if (s[i + 1] == 'c')
          ft_putchar(va_arg(arg, int));
      if (s[i + 1] == '%')
        ft_putchar('%');
       if (s[i + 1] == 'u')
           ft_putnbr_base(va_arg(arg, int),"0123456789");
      // if (s[i + 1] == 'c')
      //     ft_putchar(va_arg(arg, int));
      // if (s[i + 1] == 'c')
      //     ft_putchar(va_arg(arg, int));
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
  int d = 100;
  printf("%s%d%c\\t%d%%",s,d,c,d);
  printf("\n");
  printf("%s%d%c\\t%d%%",s,d,c,d);
}
