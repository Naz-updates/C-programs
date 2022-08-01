#include<stdio.h>
void str(char rev[20])
{
int i,n=0,j=0;
char text[20];
for(i=0;rev[i]!='\0';i++)
{
n++;
}
for(i=n-1;i>=0;i--)
{
text[j]=rev[i];
j++;
}
text[j]='\0';
printf("THE REVERSED STRING IS \n");
puts(text);
}
void main()
{
char ar[20];
printf("ENTER THE STRING\n");
gets(ar);
str(ar);
}