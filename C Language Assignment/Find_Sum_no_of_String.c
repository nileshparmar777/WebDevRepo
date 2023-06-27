#include<stdio.h>  
main()    
{    
	int no,sum=0,m;    
	
	printf("Enter a number:");    
	scanf("%d",&no);    
	
	while(no>0)    
	{    
		m=no%10;    
		sum=sum+m;    
		no=no/10;    
	}    
	printf("Sum is : %d",sum);    
	
	getch();  
} 