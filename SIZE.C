#include"stdio.h"
#include"conio.h"
int main()
{
int inttype;
char chartype;
float floattype;
double doubletype;
clrscr();
printf("size of int \t %d bytes \n",sizeof(inttype));
printf("size of char \t %d bytes \n",sizeof(chartype));
printf("size of float \t %d bytes \n",sizeof(floattype));
printf("size of double \t %d bytes \n",sizeof(doubletype));
getch();
}