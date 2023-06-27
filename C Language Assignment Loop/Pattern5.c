#include<stdio.h>
main()
{
    int i,j,no,k=1;
    
    printf("Enter no : ");
    scanf("%d",&no);

	for(i=1; i<=no; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",k++);	
		}
		printf("\n");
	}		
	getch();
}
