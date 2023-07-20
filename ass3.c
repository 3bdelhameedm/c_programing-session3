#include <stdio.h>
#include <stdlib.h>
int re(int *ptr, int *ptr1);

int main(void)
{
    int x,y;
    printf("Enter value 1:");
    scanf("%d", &x);
    printf("Enter value 2:");
    scanf("%d", &y);
    re(&x,&y);
}
int re(int *ptr, int *ptr1)
{

   printf("sum = %d\n",*ptr + *ptr1);
      printf("sub = %d",*ptr - *ptr1);

}