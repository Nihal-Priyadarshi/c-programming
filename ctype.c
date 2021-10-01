#include<stdio.h>
#include<ctype.h>
int main()
{
  char alphabet;
  printf("Enter an alphabet\n");
  putchar('\n');
  alphabet = getchar();
  printf("Revere case of %c is \n", alphabet);
  if(islower(alphabet))
  putchar(toupper(alphabet));
  else
  printf("%c", tolower(alphabet));
  return 0;

}