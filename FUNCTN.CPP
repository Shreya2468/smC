#include<stdio.h>
#include<conio.h>
void fun(int[]);
void main()
{
int i,A[10]={0};
clrscr();
fun(A);
for(i=0;i<=9;i++)
{
printf("%d",A[i]);
}
getch();
}
void fun(int A[])
{
int i;
for(i=0;i<=9;i++)
{
A[i]=i;
}
}