#include<stdio.h>
int factorial(int a);
int main()
{
  int a;
  printf("Enter the value of a\n");
  scanf("%d",&a);
  printf("The factorial of %d is %d\n",a,factorial(a));
  
  
}
int factorial(int a)
{
  if(a==0||a==1)
  return 1;
   else;
   return (a*factorial(a-1));
   
   
}
