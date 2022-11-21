#include<stdio.h>
void main()
{
char s1[50],s2[50],s3[150];
int i,j,k=0;
printf("enter the first string \n");
gets(s1);
printf("enter the second string \n");
gets(s2);
for(i=0;s1[i]!='\0';i++)
{
s3[k]=s1[i];
k++;
}
for(j=0;s2[j]!='\0';j++)
{
s3[k]=s2[j];
k++;
}
s3[k]='\0';
printf("the concatenated string is %s",s3);
}
