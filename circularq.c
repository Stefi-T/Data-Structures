#include<stdio.h>
#include<stdlib.h>
# define max 3
int queue[max];
int front=-1;
int rear=-1;
void insert();
void delete();
void display();
void peek();
int ch,x,temp,i,item,opt;
void main()
{
printf("1:insert\n2:delete\n3:dispay\n4:peek");
do
{
 printf("\nEnter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:insert();
         break;
 case 2: delete();
         break;
 case 3:display();
        break;
 case 4:peek();
        break;
 default:printf("invalid operation\n");
 }

printf("Do you want to continue?0/1");
scanf("%d",&opt);
}while(opt==1);
}
void insert()
{
printf("Insert an element:");
scanf("%d",&x);
if(rear==max-1&&front==0)
{
printf("queue overflow\n");
}
else if(front==-1 && rear==-1)
{
rear=front=0;
queue[rear]=x;
}
else if(rear==max-1 && front!=0)
{
rear=0;
queue[rear]=x;
}
else if(front!=0 && rear<front)
{
temp=rear+1;
if(temp!=front)
{
rear=rear+1;
queue[rear]=x;
}
else
{
printf("queue overflow\n");
}
}
else
{
rear=rear+1;
queue[rear]=x;
}
}
void delete()
{
if(front==-1)
{
printf("queue is empty...\n");
}
else if(front==rear)
{
item=queue[front];
front=rear=-1;
printf(" deleted element=%d\n",item);
}
else if(front==max-1)
{
item=queue[front];
front=0;
}
else
{
item=queue[front];
front=front+1;
printf(" deleted element=%d\n",item);
}
}

void peek()
{
 if (front==-1)
 {
  printf("underflow");
 }
else{
     printf("%d",queue[front]);
     }
}

void display()
{
if(front==-1 && rear==-1)
{
printf("queue is empty");
}
else if(front<=rear)
{
for(i=front;i<=rear;i++)
{
printf("%d\t",queue[i]);
}
}
else
{
for(i=front;i<=max-1;i++)
{
printf("%d\t",queue[i]);
}
for(int j=0;j<rear+1;j++)
{
printf("%d\t",queue[j]);
}
}
}

