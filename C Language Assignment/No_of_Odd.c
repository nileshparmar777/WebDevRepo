#include<stdio.h>
main()
{
    int i,no,odd=0;

	printf("Enter no : ");
	scanf("%d",&no);
	
	for(i=1; i<=no; i++)
	{
		printf("%d\n",i);
		if(i%2==1)
		{
			odd++;
		}
	}
	printf("Total odd no below series in : %d",odd);	
	getch();
}
