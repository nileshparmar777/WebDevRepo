#include<stdio.h>
main()
{
    char i,j,no,k='A';
    
    printf("Enter no : ");
    scanf("%c",&no);

	for(i='A'; i<=no; i++)
	{
		for(j='A'; j<=i; j++)
		{
			printf("%c",k++);	
		}
		printf("\n");
	}		
	getch();
}
