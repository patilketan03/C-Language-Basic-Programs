#include<stdio.h>
#include<conio.h>
void main()
{
	int p,c,m,e,h;
        float total,percentage;
        clrscr();
        printf("\nEnter the Physics Marks:");
        scanf("%d",&p);
        printf("\nEnter the Chemistry Marks:");
        scanf("%d",&c);
        printf("\nEnter thr Math Marks:");
        scanf("%d",&m);
        printf("\nEnter the English Marks:");
        scanf("%d",&e);
        printf("\nEnter the Hindi Marks:");
        scanf("%d",&h);
        total=(p+c+m+e+h);
        printf("\nYour Total Marks is :%f",total);

        printf("\nYour Total Marks is :%f",total);
        percentage=(total/5);
        printf("\nYour Percentage is :%f",percentage);
        if (percentage>35 && percentage<=45)
        {
        	printf("\nYour Grade is D");
        }
        else if(percentage>45 && percentage<=55)
        {
        	printf("\nYour Grade is C");
        }
        else if(percentage>55 && percentage<=65)
        {
        	printf("\nYour Grade is B");
        }
        else if(percentage>65 && percentage<=75)
        {
        	printf("\nYour Grade is B+");
        }
        else if(percentage>75 && percentage<=85)
        {
        	printf("\nYour Grade is A");
        }
        else if(percentage>85 && percentage<=100)
        {
        	printf("\nYour Grade is A+");
        }
        else
        {
        	printf("\n You are Fail");
        }
        getch();
}






