#include"stdio.h"
#include"conio.h"
void main()
{
int a,b,c;
clrscr();
printf("enter value a \t");
scanf("%d",&a);
printf("enter value b \t");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("\nswaping value");
printf("\n a %d ",a);
printf("\n b %d ",b);
getch();
}