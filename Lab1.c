#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    char la[50];
    char s[100];
    scanf("%c", &c);
    scanf("%s", &la);
    scanf("\n");
    scanf("%[^\n]%*c", &s);
    printf("%c\n%s\n%s\n",c,la,s);
    return 0;
}