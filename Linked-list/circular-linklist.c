#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
};
struct node *head;
void beginsert();
void lastinsert();
void begindelete();
void main()
{
  int choice;
  while(choice !=7)
  {
  printf("\n*********MENU**********\n");
  printf("\n choose one option from the following list...\n");
  printf("\n1.insert at begining\n2.insert at last\n3.delete at begining");
  printf("\nenter choice\n");
  scanf("\n%d",&choice);
  switch(choice)
  {
    case 1:
    beginsert();
    break;
    case 2:
    lastinsert();
    break;
    case 3:
    begindelete();
    break;
    default:
    printf("\nenter valid choice\n");
  }

}
}
void beginsert()
{
  struct node *new1,*temp;
  int item;
  new1=(struct node*)malloc(sizeof(struct node));

  if(new1==NULL)
  {
    printf("\nOVERFLOW\n");
  }
  else{
    printf("\n enter the node data ?\n");
    scanf("%d",&item);
    new1->data=item;
    if(head==NULL)
    {
      head=new1;
      new1->next=head;
    }
    else{
    temp=head;
    while(temp->next!=head)
    
      temp=temp->next;
    
    new1->next=head;
    temp->next=new1;
  }
  printf("\n node inserted\n");
}
}
void lastinsert()
{
  struct node *new1,*temp;
  int item;
  new1=(struct node*)malloc(sizeof(struct node));
  if(new1==NULL)
  {
    printf("\nOVERFLOW\n");
  }
  else{
    printf("\n enter the node data\n");
    scanf("%d",&item);
    new1->data=item;
     if(head==NULL)
     {
      head=new1;
      new1->next=head;
     }
     else{
      head=temp;
      while(temp->next!=head)
      {
        temp=temp->next;
      }
        temp->next=new1;
        new1->next=head;
     }
     printf("\nnode inserted ");
  }
  
}
 void begindelete()
 {
  struct node *temp;
  if(head==NULL)
  {
    printf("\nUNDERFLOW");
  }
  else if(head->next==head)
  {
    head==NULL;
    free(head);
    printf("\n node deleted\n");

  }
  else
  {
    temp=head;
    while(temp->next!=NULL)
    
       temp=temp->next;
       temp->next=head->next;
       free(head);
       head=temp->next;
       printf("\nnode deleted\n");
    
  }
 }
 
