#include <stdio.h>
#include <stdlib.h>
int found = 0;
int main(void)
{
    int num[11];
    int max= 0;
    int min = 1;

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter number %d", i);
        scanf("%d", &num[i]);
    }

    for (int i = 1; i <= 10; i++)
    {

        if (num[i] > max)
        {
            max = num[i];
        }
        if (min > num[i])
        {
            min = num[i];
        }
    }
    printf("max :%d\n", max);
    printf("min :%d", min);
}