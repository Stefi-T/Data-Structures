
# include<stdio.h>
# include<stdlib.h>

void display();
void push();
void pop();

struct node
{
    int data;
    struct node *next;
}*top,*temp,*new,*q;
int val,ch,opt;
int main()
{
do{
    printf("\n1:Push\n2:Pop\n3:Display\n");

   
        printf("enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
       
             default:
             printf("wrong choice");      
        }
        printf("\ndo you want to continue 1/0:");
        scanf("%d",&opt);
    }while(opt==1);
}

void display()
{
    q=top;
    while(q!=NULL)
    {
        printf("%d\t",q->data);
        q=q->next;
    }

}
void push()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&val);
    new->data=val;
    new->next=top;
    top=new;
}




void pop()
{
    if(top==NULL)
    {
        printf("Deletion is not possible");
    }
    else
    {
temp=top;
top=temp->next;
printf("Deleted item is:%d",temp->data);
free(temp);
}
}
