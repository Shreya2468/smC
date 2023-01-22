#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a==b==c)
 {
  printf("It is an equilateral triangle");
 }
 if(a==b&&b!=c||b==c&&c!=a)
  {
   printf("It is an isosceles triangle");
  }
  if(a!=b&&b!=c&&c!=a)
   {
   printf("It is a scalene triangle");
   }
getch();
}