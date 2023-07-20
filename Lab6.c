#include <stdio.h>
#include <stdlib.h>
int found = 0;
int main(void)
{
    int value;

    int num[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter number %d", i + 1);
        scanf("%d", &num[i]);
    }
    printf("enter the value to search :");
    scanf("%d", &value);
    for (int i = 0; i < 10; i++)
    {
        if (num[i] == value)
        {
            printf("value exist about %d times\n", i);
            found = 1;
        }
    }
    if (found != 1)
    {
        printf("value does not exist ");
    }
}