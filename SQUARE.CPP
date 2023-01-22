#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k;
clrscr();
printf("Enter no of rows");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
 printf("\n");
  for(j=1;j<=k;j++)
   {
     if(i==1||i==k||j==1||j==k)
      {
	printf("* ");
      }
     else
      {
	printf("  ");
      }
    }
}
getch();
}