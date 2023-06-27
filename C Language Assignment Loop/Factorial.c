#include<stdio.h>
main()
{
    int i,no,fact=1;

	printf("Enter no : ");
	scanf("%d",&no);
	
	for(i=1; i<=no; i++)
	{
		fact = fact * i;
	}
	printf("Factorial is : %d",fact);	
	getch();
}
