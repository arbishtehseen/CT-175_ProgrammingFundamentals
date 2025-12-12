// arbish tehseen CT-25053

// write a program that calculates the sum of all the elements of an array.

#include <stdio.h>
int main () {
	int size ; 
	
	printf("Input size of an array : ");
	scanf("%d" , &size); 
	
	int arr[size]; 
	int *ptr = arr ; 
	int sum = 0 ; 
	int *sptr = &sum ; 
	
	printf("Input Array elements : \n"); 
	for (int i = 0 ; i < size ; i++) {
		scanf("%d" , ptr+i); 
		*sptr += *(ptr + i); 
	}
	
	printf("Sum of array elements = %d" , *sptr);
	
	return 0; 
}