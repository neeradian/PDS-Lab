#include<stdio.h>
#include<conio.h>

struct employee
{
	int EMP_ID;
	char name[30];
	float salary;
};

int main()
{
	struct employee e1={1,"ram",20000};
	struct employee e2={2,"sita",25000};
	// clrscr();

	printf("Info for Employee 1");
	printf("\nEMP_ID is %d\nName is %s\nSalary is %.0f",e1.EMP_ID,e1.name,e1.salary);
	printf("\n\nInfo for Employee 2");
	printf("\nEMP_ID is %d\nName is %s\nSalary is %.0f",e2.EMP_ID,e2.name,e2.salary);
	getch();
	return 0;
}