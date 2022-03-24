/*Program to Calculate various mathematics operation*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
        clrscr();
        printf("\nEnter any Two Numbers:");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("\nAddition=%d",c);
        c=a-b;
        printf("\nSubtraction=%d",c);
        c=a/b;
        printf("\nDivision=%d",c);
        c=a*b;
        printf("\nMultiplication=%d",c);
        getch();
}