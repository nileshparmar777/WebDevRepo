#include<stdio.h>
main()
{
    int i,no,sum=0;

	printf("Enter no : ");
	scanf("%d",&no);
	
	for(i=1; i<=no; i++)
	{
		printf("%d\n",i);
		if(i%2==1)
		{
			sum+=i;
		}
	}
	printf("Sum of odd no below series in : %d",sum);	
	getch();
}
