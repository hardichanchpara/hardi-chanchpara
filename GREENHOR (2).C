#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,c;
   clrscr();
   printf("enter the value a=");
   scanf("%d",&a);
   printf("enter the value b=");
   scanf("%d",&b);
   c=a,a=b,b=c;
   printf("swap a=%d\n",a);
   printf("swap b=%d",b);
   getch();
}

