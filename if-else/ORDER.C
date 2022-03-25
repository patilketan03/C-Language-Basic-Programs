#include<stdio.h>
#include<conio.h>
void main()
{
	int ono,qty;
        clrscr();
        printf("\n*****MENU*****");
        printf("\n1.Icecream price is 10");
        printf("\n2.Cone price is 20");
        printf("\n3.Pestries price is 30");
        printf("\n4.Exit");
        printf("\nEnter Your Order No.:");
        scanf("%d",&ono);
        if (ono==1)
        {
        	printf("Your Order is Icecream with 10Rs");
                printf("\nEnter The Quantity : ");
                scanf("%d",&qty);
                printf("\nYour Total bill is :%d",qty*10);
        }
        else if(ono==2)
        {
        	printf("Your Order is Cone with 20Rs");
                printf("\nEnter the Quantity");
                scanf("%d",&qty);
                printf("\nYour Total bill is :%d",qty*20);
        }
        else if(ono==3)
        {
        	printf("\nYour Order is Pestries with 30Rs");
                printf("\nEnter the Quantity:");
                scanf("%d",&qty);
                printf("\nYour Total bill is :%d",qty*30);
        }
        else if(ono==4)
        {
        	printf("\n*Thank You for Visit*");
        }
        else
        {
        	printf("Invalid Order No");
        }
        getch();
}
