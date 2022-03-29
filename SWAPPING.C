//Swapping of two number without third variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
        clrscr();
        printf("\nEnter the Value of A :");
        scanf("%d",&a);
        printf("\nEnter the Value of B :");
        scanf("%d",&b);
        printf("\nBefore swapping\n");
        printf("A:%d\nB:%d",a,b);
        a=b+a;
        b=a-b;
        a=a-b;
       		 printf("\nAfter swapping :");
                 printf(" \nA:%d \nB:%d",a,b);
        getch();
}