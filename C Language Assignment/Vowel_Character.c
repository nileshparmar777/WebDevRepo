#include<stdio.h>
main()
{
    char a;

	printf("Enter Character : ");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("This is Vowel Character");
			break;
		
		default:
			printf("This is Consonant Character");
	}
	
	getch();
}
