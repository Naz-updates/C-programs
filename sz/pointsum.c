#include<stdio.h>
void sum(int*,int);
void main()
{
int a[10],n,i;
printf("enter the limit\n");
scanf("%d",&n);
printf("enter the numbers\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sum(a,n);
}
void sum(int *ptr,int n)
{
int s=0,i;
for(i=0;i<n;i++)
{
s=s+*(ptr+i);
}
printf("sum = %d",s);
}
