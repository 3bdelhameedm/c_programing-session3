#include <stdio.h>
#include <stdlib.h>


int main(void)
{
int num[11];
for (int i = 1; i <= 10; i++)
{
printf("Enter number %d\n",i);
scanf("%d",&num[i]);
}
for (int i =10; i >=1; i--)
{

printf("%d\n",num[i]);

}


}
