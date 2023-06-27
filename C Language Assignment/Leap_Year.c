#include<stdio.h>
main()
{
    int year;

	printf("Enter Year : ");
	scanf("%d",&year);
	
	if(year%4==0)    
	{
		printf("This year is Leap Year");
	}
	else
	{
		printf("This year is Not Leap Year");				
	}
	getch();
}
