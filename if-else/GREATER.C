
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
        clrscr();
        printf("\nEnter the Value of A:");
        scanf("%d",&a);
        printf("\nEnter the Value of B:");
        scanf("%d",&b);
        printf("\nEnter the Value of C:");
        scanf("%d",&c);
        if(a>b)
        {
        	if(a>c)
                {
                	printf("\nA is Greater");
                }
                else
                {
                	printf("\nC is Greater");
                }
        }
        else
        {
        	if(b>c)
                {
                	printf("\nB is Greater");

                }
                else
                {
                	printf("\nC is Greater");
                }
        }

	getch();
}





