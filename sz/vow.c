#include<stdio.h>
#include<string.h>
void main()
{
int i,c=0,v=0,s=0;
char a[50];
printf("enter the word");
scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
v++;
}
else if(a[i]==' ')
{
s++;
}
else
{
c++;
}}
printf("vowel count is %d",v);
printf("space count is %d",s);
printf("consonent count is %d",c);
}
