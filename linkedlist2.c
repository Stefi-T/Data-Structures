
# include<stdio.h>
# include<stdlib.h>
void create();
void display();
void insertbig();
void insertend();
void insertspeci();
void delet_beg();
void delet_end();
void delet_loc();
struct node
{
    int data;
    struct node *next;
}*head,*temp,*new,*q;
int val,ch,opt;
int main()
{
do{
    printf("\n1:create a node\n2:display the list\n3:insert at beginning\n4:insert at end\n5:insert at a specified location\n");
printf("6. Delete from the beginning\n");
printf("7. Delete from the  end\n");
printf("8. Delete from  a specified location\n");
    
        printf("enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
                   break;
            case 2:display();
                   break;
            case 3:insertbig();
                   break;
            case 4:insertend();
                   break;    
            case 5:insertspeci();
                   break;  
            case 6:delet_beg();
            break;
           case 7:delet_end();
            break;
           case 8:delet_loc();
            break;            
             default:
             printf("wrong choice");      
        }
        printf("\ndo you want to continue 1/0:");
        scanf("%d",&opt);
    }while(opt==1);
}
void create()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&val);
    new->data=val;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        temp=new;
    }
    else
    {
        temp->next=new;
        temp=new;
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }

}
void insertbig()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&val);
    new->data=val;
    new->next=head;
    head=new;
}
void insertend()
{
int val;
new=(struct node*)malloc(sizeof(struct node));
printf("Enter the data : ");
scanf("%d",&val);

    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
new->data=val;
new->next=NULL;
temp->next=new;

}
void insertspeci()
{
    int pos,i;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&val);
    printf("enter the position:");
    scanf("%d",&pos);
    temp=head;
    for(i=0;i<pos-1;i++)
    {
        new->data=val;
        temp=temp->next;
        new->next=temp->next;
        temp->next=new;

    }

}
void delet_beg()
{
temp=head;
head=head->next;
printf("Deleted item is:%d",temp->data);
free(temp);
}
void delet_end()
{
temp=head;
while(temp->next!=NULL)
{
q=temp;
temp=temp->next;
}
q->next=NULL;
printf("Deleted item is:%d",temp->data);
free(temp);
}
void delet_loc()
{
int i,pos;
printf("enter the position:");
scanf("%d",&pos);
q=head;
for(i=0;i<pos-1;i++)
{
q=q->next;
}
q->next=q->next->next;
printf("Deleted item is:%d",q->data);
}

	
	
	

