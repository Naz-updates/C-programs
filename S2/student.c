#include<stdio.h>
struct student
{
int roll,m1,m3,m2,total;
char name[20];
}s[50],t;
void main()
{
int n,i,j;
printf("enter the number of student \n");
scanf("%d",&n);
printf("enter the details \n");
for(i=0;i<n;i++)
{
printf("name");
scanf("%s",s[i].name);
printf("roll no");
scanf("%d",&s[i].roll);
printf("enter 3 marks \n");
scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
s[i].total=s[i].m1+s[i].m2+s[i].m3;
}
for(i=0;i<n;i++)
{
for(j=0;j<=n-i-1;j++)
{
if(s[j].total<s[j+1].total)
{
t=s[j];
s[j]=s[j+1];
s[j+1]=t;
}
}}
printf("rank list \n");
for(i=0;i<n;i++)
{
printf("name=%s rank=%d total =%d \n",s[i].name,i+1,s[i].total);
}}

