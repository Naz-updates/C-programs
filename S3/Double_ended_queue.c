#include<stdio.h>
#include<stdlib.h>
void input_restricted();
void output_restricted();
void insertion_through_front();
void deletion_through_rear();
void insertion_through_rear();
void deletion_through_front();
void display();
int q[20],front=-1,rear=-1,i,k,max,ch,ch1,ch2,ch3;
void main()
{
printf(" Enter the limit of the  queue : ");
scanf("%d",&max);
a();
}
void a()
{
do
{
printf(" 1-Input restricted \n 2-Output restricted \n 3-Exit  \n");
printf(" Enter your choice : ");
scanf("%d",&ch1);
switch(ch1)
{
case 1:input_restricted();
break;
case 2:output_restricted();
break;
case 3:exit(0);
break;
}
}
while(ch1>0);
}
void input_restricted()
{
printf(" 1-Insertion through rear \n 2-Deletion through front \n 3-Deletion through rear \n 4-Display \n 5-Main  \n");
do
{
printf("Enter your choice : ");
scanf("%d",&ch2);
switch(ch2)
{
case 1:insertion_through_rear();
break;
case 2:deletion_through_front();
break;
case 3:deletion_through_rear();
break;
case 4:display();
break;
case 5:a();
break;
}
}
while(ch2>0);
}
void output_restricted()
{
printf(" 1-Insertion through rear \n 2-Deletion through front \n 3-Insertion through front \n 4-Display \n 5-Main \n");
do
{
printf("Enter your choice : ");
scanf("%d",&ch3);
switch(ch3)
{
case 1:insertion_through_rear();
break;
case 2:deletion_through_front();
break;
case 3:insertion_through_front();
break;
case 4:display();
break;
case 5:a();
break;
}
}
while(ch3>0);
}
void insertion_through_front()
{
printf("Enter the element to be inserted : ");
scanf("%d",&k);
if(front==0&&rear==max-1||front==rear+1)
{
printf("Dequeue full \n");
}
else if(front==max-1)
{
front=0;
q[front]=k;
}
else if(front==-1)
{
rear=0,front=0;
q[front]=k;
}
else 
{
front++;
q[front]=k;
}
}
void deletion_through_rear()
{
if(front==-1)
{
printf("Queue empty \n");
}
else if(front==rear)
{ 
front=rear=-1;
}
else if(rear==0)
{
rear=max-1;
}
else
{
rear--;
}
}
void insertion_through_rear()
{
printf("Enter the element to be inserted : ");
scanf("%d",&k);
if(front==0&&rear==max-1||front==rear+1)
{
printf(" Dequeue full \n");
}
else if(rear==max-1)
{
rear=0;
q[rear]=k;
}
else if(rear==-1)
{
front=rear=0;
q[rear]=k;
}
else
{
rear++;
q[rear]=k;
}
}
void deletion_through_front()
{
if (front==-1)
{
printf("Dequeue empty \n");
}
else if(front==rear)
{
front=rear=-1;
}
else if(front==max-1)
{
front=0;
}
else
{
front++;
}
}
void display()
{
if(rear==-1)
{
printf("Dequeue empty \n");
}
else if(front<=rear)
{
for(i=front;i<=rear;i++)
{
printf("%d\n",q[i]);
}
}
else
{
for(i=front;i<=max-1;i++)
{
printf("%d\n",q[i]);
}
for(i=0;i<=rear;i++)
{
printf("%d\n",q[i]);
}
}
}
