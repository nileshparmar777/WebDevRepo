#include<stdio.h>
main()
{
    int i,j,no;
    
    printf("Enter no : ");
    scanf("%d",&no);

	for(i=1; i<=no; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");			
		}
		printf("\n");
	}		
	for(i=no-1; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");			
		}
		printf("\n");
	}	
	getch();
}
