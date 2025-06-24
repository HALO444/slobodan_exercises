#include <stdio.h>

int main(void)
{
    int num[] = {1,2,3,4};
    int *p = &num[3];
    printf("%d\n", *p); 
}
