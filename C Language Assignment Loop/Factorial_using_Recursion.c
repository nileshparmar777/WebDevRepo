#include<stdio.h>
#include<conio.h>
int factorials(int n);

main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, factorials(n));
    getch();
}

int factorials(int n) {
    if (n>=1)
        return n*factorials(n-1);
    else
        return 1;
}