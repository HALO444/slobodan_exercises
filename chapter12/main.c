#include <stdio.h>

int main(void)
{
    int num[] = {1,2,3,4};  

    int* p;
    printf("%p\n",&p);
    p = num;
    printf("%d\n",*p);
    printf("%p\n", &num);
    printf("%p\n", &num[0]);
    //int *p = num;
    //printf("%d", *(p+1));
   
}
