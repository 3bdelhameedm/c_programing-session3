#include <stdio.h>
#include <stdlib.h>
int sum(int x, int y);
int sub(int x, int y);
int dive(int x, int y);
int mul(int x, int y);

int main(void)
{
    int num1, num2, op;
    printf("enter num 1");
    scanf("%d", &num1);
    printf("enter num 2");
    scanf("%d", &num2);
    printf("enter operation mumber [1-sum , 2-sub,3-div,4-mul]");
    scanf("%d", &op);

    int (*ptr[4])(int, int) = {sum, sub, dive, mul};
    int res = ptr[op - 1](num1, num2);
    printf("%d", res);
}
int sum(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }
int dive(int x, int y) { return (x / y); }
int mul(int x, int y) { return x * y; }