#include<stdio.h>
main()
{
    int a,b;
    
    printf("Enter value of a : ");
    scanf("%d",&a);
    
    printf("Enter value of b : ");
    scanf("%d",&b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("\nAfter Swapping\n");
    printf("a is : %d\n",a);
    printf("b is : %d",b);
	
	getch();
}
