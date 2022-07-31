#include<stdio.h>
void swap(int *,int *);
void main()
{
int s,x,y,ch,*m,*n;
m=&x,n=&y;
printf("ENTER TWO NUMBERS\n");
scanf("%d%d",&x,&y);
printf("1.ADD\n2.SWAP\n");
printf("ENTER YOUR CHOICE\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
s=*m+*n;
printf("SUM = %d",s);
break;
case 2:
swap(&x,&y);
break;
default:
printf("INVALID CHOICE\n");
break;
}
}
void swap(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
printf("AFTER SWAPPING\nA = %d,B = %d",*a,*b);
}