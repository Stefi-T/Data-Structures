#include <stdio.h>
#define N 5
int QUEUE[N];
int front=-1,rear=-1;
void insert();
int delet();
int peek();
void display();
void main()
{
	
char choice;int opt;
do
{
printf("Operations are:\n");
printf("1.insert\n2.delete\n3.peek\n4.display\n");
printf("Enter the operation to be performed");
int n;
scanf("%d",&n);
switch(n)
{
case 1:insert();
break;
case 2:val=delet();
if(val!=-1)
printf("Deleted item is:%d",val);
break;
case 3:val=peek();
if(val!=-1)
printf("First value in the queue is:%d",val);
break;
case 4:display();
break;
default:printf("Invalid operation");
}printf("\nDo you want to continue?0/1");

scanf("%d",&opt);
}while(opt==1);
}
void insert()
{

	 
if (rear==N-1)
{				
printf("\nQueue is full\n");
}
elseif(front==-1 && rear==-1)
{
front=rear=0;
}
else
			{       int ITEM;
				printf("enter the ITEM:");
				scanf("%d", &ITEM);
				rear++;
				QUEUE[rear] = ITEM;
			}
}
int delet()
{
			if (front==-1 || front>rear)
{

				printf("\nqueue is empty\n");
                                return-1;

}
			else
			{       int val;
				val = QUEUE[front];
				front++;
                               if(front>rear)
                               front=rear=-1;
                               return val;
			}
		}
void display()
		{
			if (front==-1 || front>rear)
{

				printf("\nqueue is empty\n");
                               

}
			else
			{
				printf("The queue is:\n");
				for (int i = front; i <= rear; i++)
					printf("%d\t", QUEUE[i]);
			}
		}
		int peek()
		{
			if (front==-1 || front>rear)
{

				printf("\nqueue is empty\n");
                                return-1;

}
			else
			{
				return QUEUE[front];
				
			}
		}
		

