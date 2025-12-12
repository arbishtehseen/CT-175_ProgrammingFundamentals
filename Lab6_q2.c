/*Write a program which will generate the Fibonacci series up to 1000. Also find the sum of the 
generated Fibonacci numbers divisible by 3, 5 and 7 only.  
Fibonacci series is:1 1 2 3 5 8 13 25..........  
Note: Do this task by using for loop and while loop. Also identify which one is more efficient?*/ 

#include <stdio.h>
int main () {
	int a=0 , b=1 , result=0 ;
	int count3=0 , count5=0 , count7=0 ; 
	
	printf("0 1 "); 
	
	while(result <= 1000) {
		result = a + b ;
		a = b;  
		b = result; 
		
		if(result%3 == 0) {
			count3+=result; 
		}
		if(result%5 == 0) {
			count5+=result; 
		}
		if(result%7 == 0) {
			count7+=result; 
		}
		printf("%d " ,result); 
}
	
	printf("\nSum of Numbers divisible by 3 = %d\n" ,count3);
	printf("Sum of Numbers divisible by 5 = %d\n" ,count5);
	printf("Sum of Numbers divisible by 7 = %d\n" ,count7); 
	
	
	return 0; 
}