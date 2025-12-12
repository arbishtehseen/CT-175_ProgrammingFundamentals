/* In shopping for a new house, you must consider several factors. In this problem the initial cost 
of the house, the estimated annual fuel costs, and the annual tax rate are available. Write a 
program that will determine the total cost of a house after a five-year period and run the 
program for each of the following sets of data. */

#include<stdio.h>

float totalcost(float initialcost , float fuelcost , float taxrate); 

int main (){
	float initialcost , fuelcost , taxrate; 
	float finalamount ; 
	
	printf("Enter Initial House Cost : "); 
	scanf("%f" , &initialcost); 
	
	printf("Enter Annual Fuel Cost : "); 
	scanf("%f" , &fuelcost); 
	
	printf("Enter Taxrate(in percent) : "); 
	scanf("%f" , &taxrate); 
	
	finalamount = totalcost(initialcost , fuelcost , taxrate); 
	
	printf("Final Amount = %.2f" , finalamount);
	
	return 0; 
}

float totalcost(float initialcost , float fuelcost , float taxrate) {
	
	float annualtax5years = (taxrate*initialcost)*5 ; 
	float fuelcost5years = fuelcost*5; 
	return initialcost + annualtax5years + fuelcost5years;
	
}