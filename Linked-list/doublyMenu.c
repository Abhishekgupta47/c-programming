#include<stdio.h>
#include<stdlib.h>
void insert_beginning();
void insert_last();
void insert_specific();
 void deletion_beg();
 void deletion_last();
 void deletion_specified();
 void display();
struct node{
  struct node *prev;
  int data;
  struct node *next;

};
struct node *head;
void main()
{
  int choice,item;
  while(choice !=9){
  printf("\n*******main menu*******\n");
  printf("\n==============================\n");
  printf("\n1.insert at beginning\n2.insert at last\n3.insert at specific location\n4.deletion at begining\n5.deletion at last\n6.deletion at specified\n7.display");
  printf("\nenter the coice betwean 1 to 9\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    insert_beginning();
    break;
    case 2:
    insert_last();
    break;
    case 3:
    insert_specific();
    break;
    case 4:
    deletion_beg();
    break;
    case 5:
    deletion_last();
    break;
    case 6:
    deletion_specified();
    break;
    case 7:
    display();
    break;
    default:
    printf("\n enter the valid input please");
  }
  
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
 
 void insert_specific()
 {
  struct node *new1,*temp;
  int item,loc;
  new1=(struct node*)malloc(sizeof(struct node*));
  if(new1==NULL)
  {
    printf("\noverflow");
  }
  temp=head;
  printf("\n enter the location");
  scanf("%d",&loc);
  for(int i=0;i<loc;i++){
    temp=temp->next;
    if(temp==NULL)
    {
      printf("\n the location does not exist ");
      return ;
  
    }
  }
 printf("\n enter the value ");
 scanf("%d",&item);
 new1->data=item;
 new1->next=temp->next;
 temp->next=new1;
 new1->prev=temp;
 temp->next->prev=new1;
 printf("\nnode inserted \n");
 }

 void  deletion_beg(){
  struct node *temp;
  if(head==NULL)
  {
    printf("\nunderflow");

  }
  else if(head->next==NULL)
  {
    temp=head;
    head=NULL;
    free(temp);
    printf("\n node deleted\n ");

  }
  else{
    temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
    printf("\n node deleted successfully");
  }
 }
void deletion_last(){
   struct node *temp;
   if(head==NULL)
   {
    printf("\n underflow");
   }
   else if(head->next==NULL)
   {
    temp=head;
    head=NULL;
    free(temp);
    printf("\n node deleted\ns");

   }
   else{
    temp=head;
    if(temp->next!=NULL){
      temp=temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
    printf("\n node deleted successfully..\n");
   }

}

void deletion_specified(){
    struct node *temp1,*temp2;
    int val;
    printf("\n enter the data after which the data is to be deleted ");
    scanf("%d",&val);
    temp1=head;
    while(head->next==NULL)
    {
      printf("\n can't delted\n");
    }
      if(temp1->next->next==NULL)
    {
      temp1->next==NULL;
    }
    else{
      temp2=temp1->next;
      temp1->next=temp2->next;
      temp2->next->prev=temp1;
      free(temp2);
      printf("\nnode deleted \n");
    }

}
void display()
{
  struct node *temp;
  printf("\n printing values\n");
  temp=head;
  while(head!=NULL)
  {
    printf("%d\n",temp->data);
    temp=temp->next;
  }
}


 