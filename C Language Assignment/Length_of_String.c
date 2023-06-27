#include<stdio.h>
main()
{
    char str[100];
    int i,length=0;

    printf("Enter a string: \n");
    scanf("%s",str);

    for(i=0; str[i]!='\0'; i++)
    {
        length++;
    }    
    printf("Length of string is : %d\n",length);
    
}