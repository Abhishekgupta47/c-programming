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
void random_delete();  
void display();  
void search();
int main()
{
  int choice=0;
  while(choice !=9)
  {
    printf("\n\n***********Main Menu*************\n");
    printf("choose one option from the following list ...\n");
    printf("\n===============================================\n");
    printf("\n1.insert in begining\n2.insert at the last\n3.inseert randomly\n4.begin_delete\n5.last_delete\n6.random_delete\n7.search\n8.search");
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
      case 6:
      random_delete();
      break;
      case 7:
      search();
      break;
      case 8:
      display();
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
void random_delete(){
  struct node *temp1,*temp2;
  int loc;
  printf("\nenter the location of the node after which you want to perform deletion\n");
  scanf("%d",&loc);
  temp1=head;
  for(int i=0;i<loc;i++){
    temp2=temp1;
    temp1=temp1->next;
    if(temp1==NULL){
      printf("\n can't delete");
      return;
    }
  }
  temp2->next=temp1->next;
  free(temp1);
  printf("\n deleted node %d",loc+1);
}
void search(){
  struct node *temp;
  int item,i=0,flag;
  temp=head;
  if(head==NULL){
    printf("\n the list is empty");

  }
  else{
    printf("\n enter the item you want to search from the linked list");
    scanf("%d",&item);
    while(temp !=NULL)
    {
      if(temp->data==item){
        printf("\nitem is found at location ",i+1);
        flag=0;
        break;
      }
      else{
        flag=1;
      }
      i++;
      temp=temp->next;
    }
    if(flag==1){
      printf("\n item is not found\n");
    }
  }
}
void display(){
  struct node *temp;
  temp=head;
  if(temp==NULL)
  {
    printf("nothing to print ");

  }
  else{
    printf("\n printing the values....\n")
  }
}
    
  

 