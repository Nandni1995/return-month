#include<stdio.h>
#include<conio.h>
void main()
{
int d,m,y;
clrscr();
printf("enter the date:");
scanf("%d-%d-%d",&d,&m,&y);
switch(m)
{
case 1:
printf("January");
break;
case 2:
printf("febuary");
break;
case 3:
printf("march");
break;
case 4:
printf("april");
break;
case 5:
printf("may");
break;
case 6:
printf("june");
break;
case 7:
printf("july");
break;
case 8:
printf("august");
break;
case 9:
printf("september");
break;
case 10:
printf("october");
break;
case 11:
printf("november");
break;
case 12:
printf("december");
break;
}
getch();
}
