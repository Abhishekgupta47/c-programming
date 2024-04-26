#include<stdio.h>
int main(){
  int i,j,A[10],temp,n;
  printf("enter the size of the array: ");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    printf("enter elements in array\n");
    scanf("%d",&A[i]);

  }
  for(i=0;i<n;i++){ 
    for(j=0;j<n;j++){
      if(A[i]<A[j]){
        temp =A[i];
        A[i]=A[j];
        A[j]=temp;
      }
    }
  }
  printf("sorted array\n");
  for(i=0;i<n;i++){
    printf("%d\t",A[i]);
  }
  return 0;

}