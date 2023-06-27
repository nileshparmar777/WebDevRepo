#include<stdio.h>
struct employee
{
    int id,age;
    char name[25],add[25];
}emp[100];

void main()
{
    int i,n;
    printf("Enter no of employees\n");
    scanf("%d",&n);
    
    printf("Enter employee info as EmpId , Name , Age , Address\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %s",&emp[i].id,emp[i].name,&emp[i].age,&emp[i].add);
    }
    printf("\nEMP_NAME\tEMP_NAME\tEMP_AGE\t\tEMP_ADD\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%s\n",emp[i].id,emp[i].name,emp[i].age,emp[i].add);
    }
}