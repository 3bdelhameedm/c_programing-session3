#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char * num[4] = {"c ","java ","C++ ","python "};
    char **ptr;
    ptr = &num;
    for (int i = 0; i < 4; i++)
    {
        printf("%s", *ptr++);
    }
    printf("\n--------------------------\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%s", num[i]);
    }

}
