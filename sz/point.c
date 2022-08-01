#include<stdio.h>
void main()
{
int a[10],n,i,*ptr;
ptr=a;
printf("enter the limit\n");
scanf("%d",&n);
printf("enter the numbers\n");
for(i=0;i<n;i++)
scanf("%d",ptr+i);
printf("array elements\n");
for(i=0;i<n;i++)
printf("%d ",*(ptr+i));
}
