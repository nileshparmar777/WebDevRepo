#include<stdio.h>
main()
{
    int year,days;

	printf("Enter Year : ");
	scanf("%d",&year);
	
	days = year*365;
	
	printf("Total days of years is : %d",days);
	
	getch();
}
