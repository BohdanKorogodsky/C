#include <stdio.h>

int main(void)
{
    int a = 10;
    int *pa = &a;
    printf("pa: address=%p \t value=%d \n", (void *)pa, *pa);
    int b = ++*pa;

    printf("b: value=%d \n", b);
    printf("pa: address=%p \t value=%d \n", (void *)pa, *pa);

    printf("b => %d \n", b);
    
    printf("a => %d \n", a);

    return 0;
}