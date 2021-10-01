#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the number a and b\n");
  scanf("%d%d",&a,&b);
  if(a==b)
  {
    printf("Both the numbers are equal\n");
  }

  else if(a>b)
  {
    printf("The greater number is %d\n",a);
    printf("The smallest number is %d\n",b);

  }
  else
  {
    printf("The greatest number is %d\n",b);
    printf("The smallest number is %d\n",a);
  }
  return 0;
}