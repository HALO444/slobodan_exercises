#include <stdio.h>

int main(void)
{
  int x = 123;
  printf("%d", x);
  int *p = &x;
  printf("%ls",p);
  *p = 321;
  printf("%d",x);
}
