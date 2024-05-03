#include<stdio.h>
#include<stdlib.h>
 struct node{
  int data;
  struct node *next;
 };
 struct node *head;
 void beginsert ();   
void lastinsert ();  
void randominsert();  
void begin_delete();  
void last_delete();  
// void random_delete();  
// void display();  
// void search();
int main()
{
  int choice=0;
  while(choice !=9)
  {
    printf("\n\n***********Main Menu*************\n");
    printf("choose one option from the following list ...\n");
    printf("\n===============================================\n");
    printf("\n1.insert in begining\n2.insert at the last\n3.inseert randomly\n4.begin_delete\n5.last_delete");
    printf("\nenter your choice?\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      beginsert();
      break;
      case 2:
      lastinsert();
      break;
      case 3:
      randominsert(); 
      break;
      case 4:
      begin_delete();
      break;
      case 5:
      last_delete();
      break;
      default:
      printf("please enter valid choice");
    }
  }
   return 0;
}

// begin insert


void beginsert(){
  struct node *new1;
  int item;
  new1=(struct node*)malloc(sizeof(struct node*));
  if(new1==NULL)// suppose memory available nahi hui 
  {
    printf("\n overflow ");
  }
  else{
    printf("\n Emter value\n");
    scanf("%d",&item);
    new1->data=item;
    new1->next=head;
    head=new1;
    printf("\n Node inserted ");
  }
}

// last insert


 void lastinsert (){
  struct node *new1,*temp;
  int item;
  new1=(struct node*)malloc(sizeof(struct node*));
  if(new1==NULL) // memory nahi allocate hui
  {
    printf("\nOVERFLOW");
  }
  else{
    printf("\n Enter the value");
    scanf("%d",&item);
    new1->data=item;
    if(head==NULL)// koi node ho hi na to
    {
      new1->next=NULL;
    head=new1;
    printf("\nNode inserted" );
    }
    else{
      temp=head;
      while(temp->next !=NULL)
      {
        temp=temp->next;
      }
      temp->next=new1;
      new1->next=NULL;
      printf("\nNode inserted");
    }
  }
  }

// random inser

  void randominsert(){
    int i,loc,item;
    struct node *temp,*new1;
      new1=(struct node*)malloc(sizeof(struct node));
      if(new1==NULL){
        printf("\nOVERFLOW");
      }
        else{
          printf("enter the data ");
          scanf("%d",&item);
          printf("enter the location");
          scanf("%d",&loc);
          temp=head;
          for(int i=0;i<loc;i++){
            temp=temp->next;
            if(temp==NULL){
              printf("\n location not found");
              return;
            }
          }
          new1->next=temp->next; 
          temp->next=new1;
          printf("node inserted");
        }

      }

      // delete from begining

      void begin_delete()
      {
        struct node *temp;
        if(head==NULL)
        {
          printf("\n the linked list is empty");
        }
        else{
          temp=head;
          head=temp->next;
          free(temp);
          printf("node deleted successfully");
        }
      }

void last_delete(){
  struct node *temp1,*temp2;

  if(head==NULL)
  {
    printf("the list is empty");
  }
  else if (head->next==NULL)
  {
    head=NULL;
    free(head);
    printf("\n the single node is deleted from the list");
  }
  else{
    temp1=head;
    while(temp1->next !=NULL){
      temp1=temp2;
      temp1=temp1->next;
    }
    temp2->next=NULL;
    free(temp1);
    printf("\n node is deleted from the last ");
  }

}
    
  

 