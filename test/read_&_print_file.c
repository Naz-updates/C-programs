#include<stdio.h>
void main()
{
FILE *fp;
int n,n1,limit,i;
fp=fopen("num.txt","w");
printf("ENTER THE LIMIT\n");
scanf("%d",&limit);
printf("ENTER THE NUMBERS\n");
for(i=0;i<limit;i++)
{
scanf("%d",&n);
putw(n,fp);
}
fclose(fp);
fp=fopen("number.txt","r");
printf("THE NUMBERS IN THE FILE\n");
while(!feof(fp))
{
n1=getw(fp);
printf("%d\n",n1);
}
fclose(fp);
}