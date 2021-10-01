#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the value of a and b\n");
  scanf("%d%d", &a,&b);
  int t;
  t =a;
  a=b;
  b=t;
  printf("The swap value\n\t\t  a = %d \n\t\t b =  %d\n", a,b);
  return 0;
}