/*For each of the following, write a single statement that performs the indicated task. Assume that 
long integer variables value1 and value2 have been defined and that value1 has been initialized 
to 200000.  
a) Define the variable lPtr to be a pointer to an object of type long.  
b) Assign the address of variable value1 to pointer variable lPtr.  
c) Print the value of the object pointed to by lPtr.  
d)   Assign the value of the object pointed to by lPtr to variable value2. 
e)   Print the value of value2.  
f)   Print the address of value1.  
g)   Print the address stored in lPtr. Is the value printed the same as the address of value1? */

#include<stdio.h>
int main (){
	long int value1 , value2;
	value1 = 200000; 
	
	long int *lptr ; 
	lptr = &value1; 
	
	// printing value 1 .
	printf("%ld\n" , *(lptr));
	
	value2 = *(lptr); // value 2 
	
	// printing value 2
	printf("%ld\n" , value2); 
	// printing address of value 1
	printf("%p\n" , &value1); 
	
	//printing address of value 2
	printf("%p\n" , lptr);
	
	return 0; 
}