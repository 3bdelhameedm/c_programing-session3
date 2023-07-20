#include <stdio.h>
#include <stdlib.h>
void fun(int *add);
int main(void)
{
    int x = 5;
    fun(&x);
    printf("%d\n", x);
    int *ptr = 0;
    printf("%d",*ptr);
}

void fun(int *add)
{
    *add = *add + 1;
}
