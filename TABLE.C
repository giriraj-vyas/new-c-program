#include"stdio.h"
#include"conio.h"
void main()
{
int n,i;
clrscr();
printf("enter a number = \t");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
  printf("\n%d * %d\t= %d\n ",n,i,n*i);
}
getch();
}
