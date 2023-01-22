#include<stdio.h>
#include<conio.h>
void main()
{
int marks;
clrscr();
printf("Grade is:");
scanf("%d",&marks);
if(marks>79)
{
 printf("\3 excellent");
}
if(marks<=79&&marks>=50)
{
 printf("good");
}
if(marks<50&&marks>=35)
{
 printf("average");
}
if(marks<35)
{
 printf("fail");
}
getch();
}



