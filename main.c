#include "ft_printf.h"

int main(void) {
  int f;
  char s[] = "fock";
  int n;
  int n1;

  f = -1;
  printf("%d",ft_printf("%p", NULL));
  printf("\n");
  printf("%d",printf("%p", NULL));
  // n = ft_printf("%s%d", s, f);
  // ft_printf("\nn = %d\n", n);
  // n1 = printf("%s%d", s);
  // printf("\nn1 =%d", n1);
}
