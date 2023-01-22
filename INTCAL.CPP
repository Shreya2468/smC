#include<stdio.h>
#include<conio.h>
#define period 10
#define principal 5000.00
void main()
{
int year;
float amount,value,inrate;
clrscr();
amount=principal;
inrate=0.11;
year=0;
while(year<=period)
{
printf("%2d %8.2f\n",year,amount);
value=amount+inrate*amount;
year=year+1;
amount=value;
}
getch();
}
