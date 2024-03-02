#include<stdio.h>
int main()
{
  int i=0,j=0;
   char A[70],B[20];
   printf("enter the string one ");
   gets(A);
   printf("enter the string two");
   gets(B);
  concat(A,B);
  printf("after concatination the string is =%s ",A);
  return 0;
}
void concat(char A[],char B[])
{
  int i ,j;
  i=strlen(A);
  for(j=0;B[j]!='\0';i++,j++){
    A[i]=B[j];
  }
  A[i]='\0';
  return 0;

}