#include<stdio.h>
void main()
{
int a[30][30],b[30][30],c[60][60],i,j,p,q,m,n,k;
printf("enter the rows and columns of first matrix \n");
scanf("%d %d",&m,&n);
printf("enter the rows and columns of second matrix \n");
scanf("%d %d",&p,&q);
if(n==p)
{
printf("enter the element of first matrix \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}}
printf("enter the element of second matrix \n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
{ for(k=0;k<n;k++)
c[i][j]+=a[i][k]*b[k][j];
}
}}
printf("the multipied matrix is");
for(i=0;i<m;i++)
{printf("\n");
for(j=0;j<n;j++)
{
printf("%d \t",c[i][j]);
}}
}
else
printf("the matrix opertion is not possible");
}


