#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
int ch;
do
{
clrscr();
printf("press 1 for add 2 for sub 3 for exit");
scanf("%d",&ch);
switch(ch)
{
case 1:  printf("add"); break;
case 2:  prontf("sub"); break;
case 3:  exit(0);
default: printf("wrong choice");
}
}while(1);
}