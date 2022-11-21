#include <stdio.h>
#include <string.h>
void main ()
{
    char text[30],rev[30];
    int i,n=0,j=0;
    printf("Enter the string : ");
    gets(text);
    for (i=0;text[i]!='\0';i++)
    n++;
    for (i=n-1;i>=0;i--)
    {
        rev[j]=text[i];
        j++;
    }
rev[j]='\0';
if (strcmp(text,rev)==0)
printf("The given string is pallindrome \n");
else
{
printf("The given string is not pallindrome \n");
printf("The reversed string is %s",rev);
}
}