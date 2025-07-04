#include <stdio.h>

int main(void)
{
    int num[] = {1,2,3,4};  
    int *p = num;
    printf("%d", *(p+1));
   
}
