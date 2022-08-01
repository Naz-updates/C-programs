include<stdio.h>
void main()
{
FILE *fp,*fo,*fe;
int n,n1,limit,i;
fp=fopen("number.txt","w");
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
fe=fopen("even.txt","w");
fo=fopen("odd.txt","w");
while(!feof(fp))
{
n1=getw(fp);
if(n1%2==0)
putw(n1,fe);
else
putw(n1,fo);
}
fclose(fp);
fclose(fe);
fclose(fo);
}