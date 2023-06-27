#include<stdio.h>
main()
{
    int i,no;

	printf("Enter no : ");
	scanf("%d",&no);
	
	for(i=1; i<=10; i++)
	{
		printf("%d   %d   %d\n",no,i,no*i);
	}
	getch();
}
