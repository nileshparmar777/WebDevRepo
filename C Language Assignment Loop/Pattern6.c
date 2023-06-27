#include<stdio.h>
main()
{
    char i,j,no;
    
    printf("Enter no : ");
    scanf("%c",&no);

	for(i='A'; i<=no; i++)
	{
		for(j='A'; j<=i; j++)
		{
			printf("%c",j);	
		}
		printf("\n");
	}		
	getch();
}
