#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int x = 55;
    int *ptr = &x;
    printf("x before change %d\n", x);

    *ptr = 50;
        printf("x after change %d", x);

}
