//Find the area of Cube
#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b,h,v;
        clrscr();
        printf("\nEnter the value of 1 :");
        scanf("%d",&l);
        printf("Enter the value of b :");
        scanf("%d",&b);
        printf("Enter the value of h :");
        scanf("%d",&h);
        v=l*b*h;
        printf("Volume of Cube :%d",v);
        getch();
}