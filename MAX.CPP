#include<stdio.h>
#include<conio.h>
void main()
{
int max=0,nmax=0,i,j,A[10]={13,23,45,56,88,89,64,4,56,34};
clrscr();

for(i=0;i<=9;i++)
printf("\n%d",A[i]);
getch();

for(i=0;i<=9;i++)
{
if(A[i]>max)
{max=A[i];}
}
printf("\nThe highest value is:%d",max);
getch();
}
