#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,count=0;
    printf("enter a number:\n");
    scanf("%d,&n");
    if(n<=1)
    {
        printf("\nthe number you have entered is not a composite number.\n");
    }
    else if(n>1)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            count++;
        }
        if(count>=1)
        {
        printf("%d is a composite number.\n",n);
    	}
    }
        else
    {
        printf("\nthe number you have entered is not a composite number.");
    }
    getch();
}
