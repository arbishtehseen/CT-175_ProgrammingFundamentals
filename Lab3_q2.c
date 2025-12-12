/*A customer asks the IT firm to develop a program in C language, which can take tax rate and 
salary from the user on runtime and then calculate the tax, the user has to pay and the salary 
he/she will have after paying the tax. This information is then provided to the user. */

#include <stdio.h>
int main () {
	float taxrate , salary , tax , final_salary ; 
	
	printf("Input TaxRate (eg. 0.15 for 15 percent)= "); 
	scanf("%f" ,&taxrate); 
	
	printf("Input Total Salary = "); 
	scanf("%f" ,&salary); 
	
	tax = taxrate*salary ; 
	final_salary = salary - tax; 
	
	printf("Tax that will be cut from salary = %.2f" ,tax); 
	printf("\Salary you'll get after paying tax = %.2f" ,final_salary); 
	
	return 0; 
}