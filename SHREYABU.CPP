#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int t,n,m,x[5]={9,3,4,5,1};
for(m=0;m<=4;m++)
 {
  for(n=0;n<=4;n=n+1)
  {
	if(x[n]>x[n+1])
	{
	t=x[n];
	x[n]=x[n+1];
	x[n+1]=t;
	}
	else
	{
	}

  }
  }

  for(n=0;n<=4;n=n+1)
  {
   printf("%d",x[n]);
  }
  getch();
  }