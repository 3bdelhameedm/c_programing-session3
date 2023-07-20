#include <stdio.h>
#include <stdlib.h>
void prerev(void);

int main(void)
{

prerev();


}
void prerev(void){
int num[11];
int sum=0;
for (int i = 1; i < 11; i++)
{
printf("Enter number %d",i);
scanf("%d",&num[i]);

}
for (int i = 1; i < 11; i++)
{
sum = sum+num[i];


}

printf("the sum of array element equal :%d\n",sum);
printf("the ava of array element equal :%d",(sum/10));

}


