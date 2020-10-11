#include<stdio.h>
#include<conio.h>
int main()
{
int sm[4][4],size=0,k=0,i,j;
printf("WRITE YOUR MATRIX:\n");
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&sm[i][j]);
}
}
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(sm[i][j]!=0)
size++;
}
}

int cm[3][size];
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(sm[i][j]!=0)
{
cm[0][k]=i;
cm[1][k]=j;
cm[2][k]=sm[i][j];
k++;
}
}
}
printf("DISPLAYING MATRIX:\n");
for(i=0;i<3;i++)
{
for(j=0;j<size;j++)
{
printf("%d",cm[i][j]);
}
printf("\n");
}
return 0;
}
