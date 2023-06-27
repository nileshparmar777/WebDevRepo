#include <stdio.h>

struct employee
{
	int   empId;
    char  name[30];    
    int   age;
    char  add[30];
};
 
int main()
{
    struct employee emp;
    
    printf("\nEnter details :\n");
    printf("Emp Id :");            
	scanf("%d",&emp.empId);
    printf("Employee Name :");          
	scanf("%s",&emp.name);
    printf("Age :");            
	scanf("%d",&emp.age);
    printf("Employee Add :");          
	scanf("%s",&emp.add);
     
    printf("\nEntered detail is:\n");
    printf("Emp Id: %d\n"     ,emp.empId);
	printf("Emp Name: %s\n"   ,emp.name);
    printf("Age: %d\n"     ,emp.age);
    printf("Emp Add: %s\n",emp.add);
}