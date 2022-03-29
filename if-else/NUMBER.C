
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
        clrscr();
        printf("Enter the Starting No.:");
        scanf("%d",&i);
        printf("Enter the Ending No.:");
        scanf("%d",&j);
       if(i<=j)
       {
       		for(i=i;i<=j;i++)
                {
                	printf("\n%d",i);
                }
       }
       else
       {
       		for(i=i;i>=j;i--)
                {
                	printf("\n%d",i);

                }
       }
       getch();
}