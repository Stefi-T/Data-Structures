
#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node*link;
};

struct node*head,*temp,*newnode;
void begin();
void count();
void search();
void display();
void main()
{
int c,option;
head=(struct node*)malloc(sizeof(struct node));
head->link=NULL;
do
{
printf("\n**** Main Menu ****\n");
printf("1. Insert an element\n");
printf("2. Count of nodes\n");
printf("3. Search\n");
printf("4. Display list\n");
printf("5.Exit\n");
   printf("Enter your option : ");
   scanf("%d",&option);
switch(option)
{
case 1:begin();
break;
case 2:count();
break;
case 3:search();
break;
case 4:display();
break;
default:printf("Invalid Operator");
}
printf("Do you want to continue(0/1) : ");
scanf("%d",&c);
}while(c==1);

}

void begin()
{
int val;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data : ");
scanf("%d",&val);
newnode->data=val;
newnode->link=head->link;
head->link=newnode;
}

void count()
{
temp=head;
int count=0;
while(temp->link!=NULL)
{
count++;
temp=temp->link;

}
printf("\nNumber of nodes in list is : %d\n",count);
}

void search()
{
int a;
temp=head;
int key,pos=0,f=0;
printf("Enter the value to be searched : ");
scanf("%d",&key);
while(temp->link!=0)
{
temp=temp->link;
pos=pos+1;
if(temp->data==key)
{
    printf("%d found at %d\n",key,pos);
    f++;
    break;
}
}
if(f==0)
{
printf("Data not found in list");
}
}


void display()
{
temp=head;
while(temp->link!=NULL)
{
temp=temp->link;
printf("%d\t",temp->data);
}
}
