#include<stdio.h>
int fibonacci(int a);
int main()
{
  int a=0;
  printf("Enter the value of a\n");
  scanf("%d",&a);
  fibonacci(a);

}
int fibonacci(int a)
{
  int p,q,r,i=3;
  p=0;
  q=1;
  if(a==1)
  printf("%d\t",p);
  if(a>=2)
  printf("%d\t%d",p,q);
  {
    
    while(i<=a)
    {
      r=p+q;
      printf("\t%d",r);
      p=q;
      q=r;
      i++;

    }
    return 0;
  }
}