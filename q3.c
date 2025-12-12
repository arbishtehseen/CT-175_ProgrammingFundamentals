
// factorial 

#include <stdio.h>
int main (void) {
	int fact=1 , num ; 
	
	printf("Input number = "); 
	scanf("%d" ,&num); 
	
	if(num < 0 ) {
		printf("Invalid input!"); 
		return 0; 
	}
	
	if(num == 0) {
		printf("Factorial of 0 is 1."); 
		return 0; 
	}
	
	for(int i=1 ; i<=num ; i++){
		fact = fact*i; 
	}
	printf("Factorial of the number is %d." ,fact); 
	
	
	return 0; 
}