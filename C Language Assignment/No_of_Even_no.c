#include<stdio.h>
main()
{
    int i,no,even=0;

	printf("Enter no : ");
	scanf("%d",&no);
	
	for(i=1; i<=no; i++)
	{
		printf("%d\n",i);
		if(i%2==0)
		{
			even++;
		}
	}
	printf("Total even no below series in : %d",even);	
	getch();
}
