#include<stdio.h>
int main()
{
     float len, wid, area;

     printf("Enter length of Rectangle (in cm): ");
     scanf("%f",&len);

	 printf("Enter width of Rectangle (in cm): ");
     scanf("%f",&wid);
     
     area = len * wid;

     printf("Area of Rectangle= %.3f cm\n",area);
     
     getch();
}