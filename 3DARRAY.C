#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][3][2],i,j,k;
clrscr();
printf("ENTER THE ELEMENTS OF 2*3 3D ARRAY:\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<2;k++)
{
scanf("%d",&a[i][j][k]);
}
}
}

printf("DISPLAYING ARRAY:\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<2;k++)
{
printf("%d  ",a[i][j][k]);
}
printf("\t");
}
printf("\n\n");
}
getch();
}