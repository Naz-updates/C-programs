#include<stdio.h>
int rfact(int n)
{
if(n<=1)
return 1;
else
return n*fact(n-1);
}
int nrfact(int n)
{
if(n<=1)
return 1;
else
{
int i,p;
for(i=1;i<=n;i++)
{
p=p*i;
}
return p;
}
}
void main()
{
int limit,f,ch;
printf("ENTER THE LIMIT\n");
scanf("%d",&limit);
printf("1.RECURSIVE\n2.NON-RECURSIVE\n");
printf("ENTER YOUR CHOICE\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
f=rfact(limit);
printf("FACTORIAL FOUND USING 1= %d\n",f);
case 2:
f=nrfact(limit);
printf("FACTORIAL FOUND USING 2= %d\n",f);
default:
printf("INVALID CHOICE\n");
}
}