#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char * ptr="Abdelhameed";
char * temp=ptr;
printf("%s\n",ptr);
for (int i = 0; i < 11; i++)
{
printf("%c\n",*temp++);
}

}