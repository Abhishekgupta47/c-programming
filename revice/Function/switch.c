#include<stdio.h>
int main()
{
  int n;
  printf("Enter the month number to check ");
  scanf("%d",&n);
  switch(n)
  {
    case 1: 
      printf("the month is januray ");
      break;
    case 2:
      printf("the month is february ");
      break;
    case 3:
      printf("the month is march ");
      break;
    case 4:
      printf("the month is april ");
        break;
    case 5:
      printf("the month is may ");
        break;
    case 6:
      printf("The month is june ");
      break;
    case 7:
      printf("the month is july ");
        break; 
          break;
    case 8:
      printf("the month is August ");
        break;
          break;
    case 9:
      printf("the month is September ");
        break;
        
    case 10:
      printf("the month is October ");
        break; 
          break;
    case 11:
      printf("the month is November ");
        break;
          break;
    case 12:
      printf("the month is December ");
        break; 
    default:
      printf("The month number is invalid ");                    
  }
  
}