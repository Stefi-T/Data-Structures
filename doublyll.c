
    # include<stdio.h>
    # include<stdlib.h>
    void create();
    void insertbig();
    void insertend();
    void insertspeci();
    void delfirst();
    void delend();
    void delspc();
    void display();
    struct node
    {
        struct node *prev;
        int data;
        struct node *next;
    }*head,*tail,*new,*temp;
    int val,ch,opt;
   void main()
    {
 do{
        printf("1:Create\n2:insert at beginning\n3:insert at end\n4:insert at a specific location\n5:delete from the beginning\n6:delete from  the end\n7:delete from a specific position\n8:Display the list\n");
       
            printf("enter the choice:");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:create();
                       break;
                case 2:insertbig();
                       break;
                case 3:insertend();
                       break;  
                case 4:insertspeci();
                       break;  
                case 5:delfirst();
                       break;  
                case 6:delend();
                       break;  
                 case 7:delspc();
                       break;  
                 case 8:display();
                       break;  
                 
                                               
                 default:
                 printf("wrong choice");      
            }
            printf("do you want to continue 1/0:");
            scanf("%d",&opt);
        }while(opt==1);
    }
    void create()
    {
      new=(struct node*)malloc(sizeof(struct node));
      printf("enter the data");
      scanf("%d",&val);
      new->data=val;
      new->next=NULL;
      new->prev=NULL;
      if(head==NULL)
       {
     head=tail=new;
       }
      else{
          tail->next=new;
          new->prev=tail;
          tail=new;
          }
    }
         
     
    void insertbig()
    {
      new=(struct node*)malloc(sizeof(struct node));
      printf("enter the data");
      scanf("%d",&val);
      new->data=val;
      new->next=head;
      new->prev=NULL;
     head=new;
    }
     
    void insertend()
    {
     new=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&val);
        new->data=val;
        new->next=NULL;
        temp=head;
        while(temp->next!=NULL)
        {
         temp=temp->next;
        }
        temp->next=new;
        new->prev=temp;
    }
    void display()
    {
      tail=head;
      while(tail!=NULL)
      {
       printf("%d\t",tail->data);
       tail=tail->next;
       }
    }
    
     void insertspeci()
    {
     int i,pos;
     new=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&val);
        printf("enter the position:");
        scanf("%d",&pos);
      new->data=val;
      temp=head;
        for(i=0;i<pos-1;i++)
        {
         
           temp=temp->next;
    }
           new->next=temp->next;
           temp->next=new;
           new->prev=temp;
    }
    void delfirst()
    {
     temp=head;
     head=temp->next;
     head->prev=NULL;
     printf("Deleted item is:%d",temp->data);
     free(temp);
    }
    void delend()
    {
     temp=head;
     while(temp->next!=NULL)
     {
      temp=temp->next;
     }
     temp->prev->next=NULL;
     printf("Deleted item is:%d",temp->data);
     free(temp);
    }
    void delspc()
    {
     int i,pos;
        printf("enter the position:");
        scanf("%d",&pos);
       temp=head;
      for(i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
      temp->next=temp->next->next;
      printf("Deleted item is:%d",temp->data);
      free(temp);
    }
    

	
	
	

