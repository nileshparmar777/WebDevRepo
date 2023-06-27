#include<stdio.h>
main()
{
    float year,days;

	printf("Enter Year : ");
	scanf("%f",&days);
	
	year = days/365;
	
	printf("Total year of days is : %f",year);
	
	getch();
}
