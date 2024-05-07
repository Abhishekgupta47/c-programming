#include<stdio.h>
#include<stdlib.h>
void insert_beginning();
void insert_last();
struct node{
  struct node *prev;
  int data;
  struct node *next;

};
struct node *head;
void main()
{
  int choice,item;
  printf("\nenter the coice betwean 1 to 9\n");
  scanf("%d",&choice);
  printf("\n*******main menu*******\n");
  printf("\n==============================\n");
  printf("\n1.insert at beginning\n2.insert at last");
  switch(choice)
  {
    case 1:
    insert_beginning();
    break;
    case 2:
    insert_last();
    break;
    default:
    printf("\n enter the valid input please");
  }
  
}
void insert_beginning()
{
  struct node *new1;
  int item;
  new1=(struct node*)malloc(sizeof(struct node*));
  if(new1==NULL)
  {
    printf("\noverflow");

  }
  else{
    printf("\nenter the vlaue of item\n");
    scanf("%d",&item);

    if(head==NULL){
      new1->data=item;
      new1->prev=NULL;
      new1->next=NULL;
      head=new1;
    }
    else{
      new1->data=item;
      new1->next=head;
      new1->prev=NULL;
      head->prev=new1;
      head=new1;
    }
    printf("\n node inserted successfully at beginning \n");
  }

}
 void insert_last()
 {
  struct node *new1,*temp;
  int item;
  new1=(struct node*)malloc(sizeof(struct node*));
  if(new1==NULL){
    printf("\n overflow\n");
  }
    else{
      printf("\nenter the value of item\n");
      scanf("%d",&item);
      if(head==NULL){
        new1->data=item;
        new1->next=NULL;
        new1->prev=NULL;
        head=new1;

      }
    
      else{
           temp=head;
           while(temp !=NULL){
            temp=temp->next;
           }
           temp->next=new1;
           new1->next=NULL;
           new1->prev=temp;
      }
    }
    printf("\n node inserted succesfully");
  }
 