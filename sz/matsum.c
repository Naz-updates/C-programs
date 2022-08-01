#include<stdio.h>
void main()
{
int a[50][50],b[50][50],c[100][100],i,j,m,n,p,q;
printf("enter the rows and column of first matrix");
scanf("%d%d",&m,&n);
printf("enter the rows and column of second matrix");
scanf("%d%d",&p,&q);
if(p==m&&q==n)
{
printf("enter the the rows and column of first matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}}
printf("enter the the rows and column of second matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}}
printf("added matrix is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
}
else
printf("matrix operation not possible");
}
