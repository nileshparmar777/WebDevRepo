#include<stdio.h>
main()
{
    int no, sum=0, f, l;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &no);
    
	l = no % 10;
    while(no >= 10)
    {
        no = no / 10;
    }
    f = no;
    sum = f + l;
    printf("Sum of first and last digit = %d", sum);
    
    getch();
}