#include<stdio.h>
int main(){
  int n,i ,arr[20];
  printf("enter the number of elements in array \n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
       printf("\n arr[%d]=",i);
       scanf("%d",&arr[i]);

  }
  printf("\n the array elements are ");
  for(i=0;i<n;i++)
  printf("/t %d",arr[i]);
  return 0;

}