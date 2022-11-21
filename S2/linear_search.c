#include <stdio.h>
void main ()
{
int a[25],n,i,key,flag=0;
printf("Enter the limit of the array : ");
scanf("%d",&n);
printf("Enter the number : ");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the key element to be searched : \n");
scanf("%d",&key);
for (i=0;i<n;i++)
{
    if (a[i]==key)
    {
        printf("Elemrnt found at location %d \n",i+1);
        flag=1;
    }
}
  if (flag==0)  
    printf("Element not found");
}