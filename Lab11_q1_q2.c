/*Declare a structure named employee that stores the employee id, name, salary and
department.*/
#include<stdio.h>
#include<string.h>
struct employee{
	int id ; 
	char name[20]; 
	float salary ; 
	char dept[30];
};
int main () {
	struct employee e1 ; 
	
	printf("Enter the following (sequentially):\n"); 
	printf("Employee id :\n");
	scanf("%d" , &e1.id);
	
	getchar();
	
	printf("Name:\n"); 
	fgets(e1.name , sizeof(e1.name) , stdin);
	int len = strlen(e1.name); 
	
	if(len > 0 && e1.name[len-1] == '\n'){
		e1.name[len-1] = '\0'; 
	}
	
	printf("Salary:\n"); 
	scanf("%f" , &e1.salary);
	
	getchar();
	
	printf("Department:\n"); 
	fgets(e1.dept , sizeof(e1.dept) , stdin); 
	
	int lenn = strlen(e1.dept);
	
	if (lenn > 0 && e1.dept[lenn- 1] == '\n'){
		e1.dept[lenn - 1 ] == '\0';
	}
	
	printf("Employee id = %d\nName: %s\nSalary= %.2f\nDepartment=%s\n" , e1.id , e1.name , e1.salary ,
	e1.dept);
	return 0; 
}