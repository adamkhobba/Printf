#include "ft_printf.h"

int main(void) {
  int f;
  char s[] = "fock";
  int n;
  int n1;

  f = 2999;
  ft_printf("%s\n%s%WW", s);
  printf("\n");
  printf("%s\n%s%WW", s);
  // n = ft_printf("%s%d", s, f);
  // ft_printf("\nn = %d\n", n);
  // n1 = printf("%s%d", s);
  // printf("\nn1 =%d", n1);
}
