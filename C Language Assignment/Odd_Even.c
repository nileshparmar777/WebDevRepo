#include<stdio.h>
main()
{
    int no;

	printf("Enter no : ");
	scanf("%d",&no);
	
	if(no%2==0)    
	{
		printf("This given no is Even");
	}
	else
	{
		printf("This given no is Odd");				
	}
	getch();
}
