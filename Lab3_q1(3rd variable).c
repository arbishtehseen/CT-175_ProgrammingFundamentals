#include <stdio.h>
int main () {
	int a , b , temp; 
	
	printf("Input 1st Number = "); 
	scanf("%d" ,&a); 
	
	printf("Input 2nd Number = "); 
	scanf("%d" ,&b); 
	
	temp = a ;  //stored value of 'a' in temp. 'a' is empty now 
	a = b ;     // stored value of 'b' in a. filled empty 'a' , Now 'b' is empty
	b = temp;   // value of 'a' which was stored in temp is now being stored in 'b'.
	
	printf("After Swapping:\n1st Number = %d\n2nd Number = %d" , a , b); 
	
	return 0; 
}