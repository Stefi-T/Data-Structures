
#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node*link;
};

struct node*front,*temp,*q,*rear,*ptr;
void insert();
void delete();
void display();
void main()
{
 int c=0,option;
 front=(struct node*)malloc(sizeof(struct node));
 front->link=NULL;

do
 {
  printf("\n**** Main Menu ****\n");
  printf("1. Insert\n");
  printf("2. Delete\n");
  printf("3. Display queue\n");
     printf("Enter your option : ");
     scanf("%d",&option);
  switch(option)
  {
  case 1:insert();
   break;
  case 2:delete();
   break;
  case 3:display();
   break;
  default:printf("Invalid Operator");
  }
  printf("Do you want to continue(0/1) : ");
  scanf("%d",&c);
 } while(c==1);

}

void insert()
{
 int val;
 q=front;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter the data : ");
 scanf("%d",&val);
 while(q->link!=NULL)
 {
  q=q->link;
 }
 temp->data=val;
 temp->link=NULL;
 q->link=temp;
}

void delete()
{

 ptr=front;
 if(ptr->link==NULL)
 {
  printf("\nUnderflow\n");
 }
 else
 {
  ptr=ptr->link;
  front->link=ptr->link;
  printf("Deleted Node is: %d\n",ptr->data);
  free(ptr);
}
}

void display()
{

 if(front==NULL)
 {
  printf("\nUnderflow\n");
 }
 else
 {
    temp=front;
 
 while(temp->link!=NULL)
 {
  temp=temp->link;
  printf("%d\t",temp->data);
 }
 printf("\n");
 }
}
