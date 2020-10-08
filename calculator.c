#include<stdio.h>
int calculator(float a, float b, char operator);
int main()
{
  char operator;
  printf("Enter an operator\n");
  scanf("%c",&operator);
  float a,b;
  printf("Enter the number a and b\n");
  scanf("%f%f",&a,&b);
  
  

  calculator(a,b,operator);




}
int calculator(float a,float  b,char operator)
{




  switch(operator)
 { case '+':
  {printf("The result is %f\n",a+b);
  break;}
  case '-':
  {
    printf("The result is %f\n",a-b);
    break;

  }
  case'*':
  {
    printf("The result is %f\n", a*b);
    break;
  }
  case '/':
  {
    printf("The result is %f\n",a/b);
    break;
  }
  default:
  {
    printf("Please enter a correct input\n");

  }

  }
  return 0;

}