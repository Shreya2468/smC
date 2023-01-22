#include<stdio.h>
#include<conio.h>
int main()
{
int i,a;
clrscr();
for(i=1;i<=10;i++)
{
 for(a=1;a<=i;a++)
 {
   printf("*");
 }
 printf("\n");
}
getch();
}