#include<stdio.h>
#include<conio.h>
void fun(int);
void main()
{
int x=1;
clrscr();

printf("Enter a number");
scanf("%d",&x);

fun(x);
getch();
}
void fun(int y)
{
int z;
z=y%2;
if(z==0)
{
printf("Even");
}
else
{
printf("Odd");
}
}