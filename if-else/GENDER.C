#include<stdio.h>
#include<conio.h>
void main()
{

	int age;
        char gender;
        clrscr();
        printf("\nEnter the Gender: ");
        scanf("%c",&gender);
        printf("\nEnter the Age: ");
        scanf("%d",&age);
        if(gender=='m')
        {
           if(age>=18)
           {
           	printf("\nDriving Allowed for Male");
	   }
           else
           {
           	printf("\nDriving Not Allowed for Male");
           }
	}
        else
        {
        	if(age>=22)
                {
                 printf("\nDriving Allowed for Female");
                }
                else
                {
                 printf("\nDriving Not Allowed for Female");
                }
        }
        getch();
}


