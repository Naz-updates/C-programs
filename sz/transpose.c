#include<stdio.h>
void main()
{
int i,j,m,n,a[10][10],b[10][10];
printf("ENTER THE NUMBER OF ROWS AND COLUMNS OF THE MATRIX\n");
scanf("%d%d",&m,&n);
printf("ENTER THE ELEMENTS OF THE MATRIX\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=a[j][i];
}
}
printf("THE TRANSPOSE OF THE MATRIX IS\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}
}

