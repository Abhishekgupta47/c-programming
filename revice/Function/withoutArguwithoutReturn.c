#include <stdio.h>
//  function type without return and without argument


void printName();
void Fact();
void Arith();
void arr1d();
void evenOdd();
void febo();
int isPrime();
int palinDrome();
int  armStrong(n);
void sumDigit();
//  the large function type is without retuen but with argument;
void large( int arr[],int size);
void samll(int arr[],int size);
int main()
{
  printf("hello");
  printName();
  Fact();
  Arith();
  arr1d();
  evenOdd();
  sumDigit();
  return 0;
}



void printName()
{
  printf(" Abhishek \n");
}

//  factorial 

void Fact()
{
  int n, factorial = 1;
  printf("enetr the number= ");
  scanf("%d", &n);
  if (n > 0)
  {
    // int f;
    for (int i = 1; i <= n; i++)
    {
      factorial = i * factorial;
      // printf("%d",factorial);
    }
    printf(" the factorial of the number which you entered in my feed =%d", factorial);
    printf("\n");
  }
}

//  arithmatic opeeration 


void Arith()
{
  int a, b, sum,sub,mul,div;
  printf("enter the value of a and b");
  scanf("%d%d", &a, &b);
  sum = a + b;
  printf("\nthe sum of the a and b = %d\n",sum);
  sub=a-b;
  printf("\nthe subtraction is =%d",sub);
  mul=a*b;
  printf("\nthe multiplication is = %d",mul);
  div=a/b;
  printf("\nthe dividion is = %d",div);
}

//  1 d array




void arr1d()
{
  int size, arr[100];
  printf("\nenter the size of the array");
  scanf("%d", &size);
  // large(arr1d,size);
  for (int i = 0; i < size; i++)
  {
    printf("enter the elements\n");
    scanf("%d", &arr[i]);
  }
  printf("\nthe array is =");
  for (int i = 0; i < size; i++)
  {
    printf("\t%d",arr[i]);
  }
  large(arr,size);
  small(arr,size);
}


//  largest element



//  largest element



void large(int arr[], int size)
{
    int large=arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i]>large)
    {
      large=arr[i];
    }
  }
  printf("\nlargest element = %d\n", large);
}

// smallest element



void small(int arr[],int size){
  int small=arr[0];
  for(int i=0;i<size;i++){
    if(arr[i]<small)
    {
      small=arr[i];
    }
  }
  printf("\nsmallest element=%d",small);
}

//  even odd




void evenOdd(){
  int n;
  printf("\neneter the number for checking for that num is even or odd : ");
  scanf("%d",&n);
  if(n%2==0){
    printf("this number is even");

  }
  else{
    printf("this number is odd");
  }
  febo(n);
  isPrime(n);
  palinDrome(n);
  armStrong(n);
}


// febonaci series  



void febo(n){
  int n1=0,n2=1;
  printf("\n\t\tfebonaci series of this num = %d %d", n1, n2);
  for(int i=2;i<n;i++){
    int n3=n1+n2;
    printf("\t%d",n3);
    n1=n2;
    n2=n3;
  }

}


// prime number 



 isPrime(n){
  int isPrime = 1; // Assume the number is prime

    if (n <= 1) {
        isPrime = 0; // Not a prime number
    } else {
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }
}
 if (isPrime) {
        printf("\n%d is a prime number.\n", n);
    } else {
        printf("\n%d is not a prime number.\n", n);
    }
}


//  palindrome number



int palinDrome(n){
  int sum=0,r;
  int t;
  t=n;
  while(n>0){
   r=n%10;
   sum=sum*10+r;
   n=n/10;
  }
  if(t==n){
    printf("\npalindrome");
  }
  else{
    printf("\nnot palindrome");
  }
}

//  armstrong number


int armStrong(n){
  int sum=0;
  int t,r;
  t=n;
  while(n>0){
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
  }
  if(sum==t){
    printf("\narmstrong");
  }
  else{
    printf("\nnot armstrong");
  }
}

void sumDigit(){
   int n;
   int r,sum=0;
   printf("enter the digit whoes sum you want ");
   scanf("%d",&n);
   while(n>0)
   {
    r=n%10;
    sum=sum+r;
    n=n/10;
   }
   printf("\nsum of the digit is =%d",sum);

}

