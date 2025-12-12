/*Write a program which will find the factorial of a given number. Exit the program if the input 
number is negative. Test case: Input number = 5,Factorial is=5*4*3*2*1  */

#include <stdio.h>
int main () {
	int num , fact=1; 
	
	printf("Input Number = "); 
	scanf("%d" ,&num);
	
	if(num<0) {
		printf("Invalid Input!"); 
		return 0; 
	}
	
	if(num == 0 ) {
		printf("Factorial of 0 is 1.");
		return 0; 
	}
	
	for (int i=1 ; i<=num ; i++) {
           fact = fact*i; 
	}
	printf("Factorial of %d is %d." ,num , fact); 
	
	return 0; 
}