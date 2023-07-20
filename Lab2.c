#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 5;
    int *ptr = &x;
    printf("%d\n", &x);
    printf("%d", ptr);
}
