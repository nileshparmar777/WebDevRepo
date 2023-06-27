#include<stdio.h>
main()
{
    int i,no,sum=0;

	printf("Enter no : ");
	scanf("%d",&no);
	
	for(i=1; i<=no; i++)
	{
		printf("%d\n",i);
		if(i%2==0)
		{
			sum+=i;
		}
	}
	printf("Sum of even no below series in : %d",sum);	
	getch();
}
