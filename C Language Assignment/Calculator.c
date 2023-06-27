#include<stdio.h>
main()
{
	int a,b,add,sub,mul,div,mod;
	
	printf("Enter value of a : ");
	scanf("%d",&a);
	
	printf("Enter value of b : ");
	scanf("%d",&b);
	
	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	mod = a % b;
	
	
	printf("\nAddition is : %d\n",add);
	printf("Substraction is : %d\n",sub);
	printf("Multiplication is : %d\n",mul);
	printf("Division is : %d\n",div);
	printf("Moduls is : %d",mod);
	
	getch();
}