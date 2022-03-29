//Find the area of circle
#include<stdio.h>
#include<conio.h>
void main()
{
	float r,a,pi=3.14;
        clrscr();
        printf("\nEnter the radius :");
        scanf("%f",&r);
        a=pi*r*r;
        printf("Area of Circle is %.2f",a);
        getch();
}