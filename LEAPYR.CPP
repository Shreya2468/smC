#include<stdio.h>
#include<conio.h>

void main()
{
  int year;
  clrscr();

  printf("Enter thr year:");
  scanf("%d",&year);
  int temp=year/100;
  if(year%100==0)
   {
     if(temp%4==0)
     {
    printf("%d is leap year.",year);
     }
     else
     {
     printf("%d is ordinary year.",year);
     }
   }
   else
   {
      if(year%4==0)
      {
       printf("%d is leap year.",year);
      }
      else
      {
      printf("%d is ordinary year.",year);
      }
   }
   getch();
 }



