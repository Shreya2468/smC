#include<stdio.h>
#include<conio.h>

int mul(int i,int j); // declaration

void main()
{
clrscr();
int a,b,c;
a=2;
b=3;
c=mul(a,b);
printf("%d*%d=%d",a,b,c);
getch();
}


int mul(int i,int j)
{
int k;
  k=i*j;
  return (k);
}

