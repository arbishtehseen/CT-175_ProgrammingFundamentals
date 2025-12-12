 // checks largest of three (3) Numbers.

#include <stdio.h>
int main (void) {
	int a , b , c ; 
	
	printf("Enter 1st Number = "); 
	scanf("%d" ,&a); 
	
	printf("Enter 2nd Number = "); 
	scanf("%d" ,&b); 
	
	printf("Enter 3rd Number = "); 
	scanf("%d" ,&c); 
	
	if(a > b && a > c) {
		printf("Largest of three = %d" ,a); 
		return 0; 
	}
	
	else if (b > c) {
		printf("Largest of three = %d" ,b); 
		return 0; 
	}
	
	else {
		printf("Largest of three = %d" ,c); 
		return 0; 
	}
	
	return 0; 
}