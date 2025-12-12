/*  Declare a structure named employee that stores the employee id, name, salary and 
department. 
2. Take data input from user after declaring a variable of employee type and show the data in 
proper format on output screen.  */

#include<stdio.h>
#include<string.h>
struct employee {
	int id ; 
	char name[100]; 
	float salary ;
	char dept[100];
};

void getemployeedata(struct employee *e); 
void printdata(struct employee *e );

int main (){
	struct employee e; 
	struct employee *ptr = &e ; 
	
	getemployeedata(ptr);
	printdata(ptr);
	
	return 0; 
}
void getemployeedata(struct employee *e){
	
	printf("Enter Employee ID : "); 
	scanf("%d" , &e->id);
	getchar(); 
	
	printf("Enter Name : "); 
	fgets(e->name , sizeof(e->name) , stdin); 
	
	e->name[strcspn (e->name , "\n")] = 0 ; 
	
	printf("Enter Salary : ");
	scanf("%f" , &e->salary); 
	getchar();
	
	printf("Enter Department : "); 
	fgets(e->dept , sizeof(e->dept) , stdin);
	
	e->dept[strcspn(e->dept, "\n")] = 0 ; 
	
	return ; 
}

void printdata(struct employee *e ){
	
	printf("\nEmployee ID : %d" , e->id); 
	printf("\nEmployee Name : %s" , e->name); 
	printf("\nEmployee's Salary : %.2f" , e->salary); 
	printf("\nEmployee's Department : %s" , e->dept);
	return ; 
}






