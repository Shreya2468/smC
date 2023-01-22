#include<stdio.h>
#include<conio.h>
void main()
{
int array[10]={9,3,4,6,5,2,10,20,11,15},i,j,t;
clrscr();
for(i=0;i<=9;i++)
{for(j=0;j<=9;j++)
{if(array[j]>array[j+1])
 {t=array[j];
  array[j]=array[j+1];
  array[j+1]=t;
  }
 }
}
for(i=0;i<=9;i++)
{
 printf("\n%d",array[i]);
}
getch();
}