#include<stdio.h>  
main()  
{  
    int a, b;  
    char choice;  
  
    printf("Enter your choice\n");  
    printf("a. Addition\nb. Subtraction\nc. Multiplication\nd. Division\n");  
    scanf("%c", &choice);  
  
  
  	printf("Enter value of a : ");  
    scanf("%d",&a);  
    
    printf("Enter value of b : ");
    scanf("%d",&b);
  
    switch(choice)  
    {  
        case 'a': 
			printf("%d + %d = %d\n", a, b, (a+b));  
   			break;  
  
        case 'b': 
			printf("%d - %d = %d\n", a, b, (a-b));  
   			break;  
  
        case 'c': 
			printf("%d x %d = %d\n", a, b, (a*b));  
   			break;  
  
        case 'd': 
		if( b != 0)  
        	printf("%d / %d = %d\n", a, b, (a/b));  
  		else  
    		printf("Number can't be divided by 0\n");  
      		break;  
  
        default: 
			printf("You entered wrong choice\n");  
            break;  
    }  
  
    getch();  
}