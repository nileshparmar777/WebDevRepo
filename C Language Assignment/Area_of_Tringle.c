#include<stdio.h>
main()
{
     float b, h, area;

     printf("Enter base (in cm): ");
     scanf("%f",&b);

	 printf("Enter height (in cm): ");
     scanf("%f",&h);
     
	 area = (0.5 * b * h);

     printf("Area of triangle= %.2f cm\n",area );

     getch();
}