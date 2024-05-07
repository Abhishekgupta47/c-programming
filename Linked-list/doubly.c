#include<stdio.h>
#include<stdlib.h>
void insertbegining(int item);
struct node{
  struct node *prev;
   int data;
   struct node *next;

};
struct node *head;
void main()
{
  int choice,item;
  do{
  printf("\n enter the data which you want to insert in doubly linked list");
  scanf("%d",&item);
  insertbegining(item);
  printf("\n press 0 to insert more data in to the list");
  scanf("%d",&choice);
  }
  while(choice==0);
}
void insertbegining(int item){
  struct node *new1= (struct node*)malloc(sizeof(struct node*));
  if(new1==NULL)
  {
    printf("\noverflow");
  }
  else if(head==NULL){
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
}

