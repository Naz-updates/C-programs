#include<stdio.h>
#include<string.h>
void main()
{
int i,j=0,n=0;
char a[30],rev[30];
printf("enter the string \n");
scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
n++;
}
for(i=n-1;i>=0;i--)
{
rev[j]=a[i];
j++;
}
rev[j]='\0';
if(strcmp(a,rev)==0)
{
printf(" the string palindrome \n");
}
else
{
printf("the string is not palindrome \n");
printf("the reversed string is %s",rev);
}}

