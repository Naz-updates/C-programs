#include <stdio.h>
void main ()
{
int a[30],t,n,i,j;
printf("Enter the number of elements : ");
scanf("%d",&n);
for (i=0;i<n;i++)
scanf("%d",&a[i]);
for (i=0;i<n;i++)
{
    for (j=0;j<n-i-1;j++)
    {
        if (a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
}
printf("The sorted element are \n");
for (i=0;i<n;i++)
{
    printf("%d \n",a[i]);
}
}