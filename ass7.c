#include <stdio.h>
#include <stdlib.h>
void swap(int *p, int *q, int *r);

int main(void)
{

    int x = 9;
    int y = 11;
    int z = 15;
    int *p = &x;
    int *q = &y;
    int *r = &z;
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of z is %d\n", z);
    printf("The value of p is %d\n", p);
    printf("The value of q is %d\n", q);
    printf("The value of r is %d\n", r);
    printf("The value of *p is %d\n", *p);
    printf("The value of *q is %d\n", *q);
    printf("The value of *r is %d\n", *r);
    printf("Swapping pointers\n");
    swap(&x,&y,&z);
     printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of z is %d\n", z);
    printf("The value of p is %d\n", p);
    printf("The value of q is %d\n", q);
    printf("The value of r is %d\n", r);
    printf("The value of *p is %d\n", *p);
    printf("The value of *q is %d\n", *q);
    printf("The value of *r is %d\n", *r);
}
void swap(int *p, int *q, int *r)
{
   int temp =*r;
    *r = *p;
    *p = *q;
    *q=temp;
}