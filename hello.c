#include <stdio.h>

int main(void)
{
    double d = 10.6;
    double *pd = &d;
    printf("Pointer pd: address=%p \n", (void *)pd);
    pd = pd + 2;
    printf("Pointer pd: address=%p \n", (void *)pd);

    char c = 'N';
    char *pc = &c;
    printf("Pointer pc: address=%p \n", (void *)pc);
    pc = pc - 3;
    printf("Pointer pc: address=%p \n", (void *)pc);
    
    return 0;
}