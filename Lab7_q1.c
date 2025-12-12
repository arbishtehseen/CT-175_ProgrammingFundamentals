/*Write a program that reads the numbers from user and store these numbers into an array of 
same size. Find and display the sum of all positive numbers and calculate the average.  */
#include <stdio.h>
int main () {
	int size ;
	
	printf("Input size of array : "); 
	scanf("%d" ,&size); 
	
	int arr[size]; 
	int sum=0 ; 
	float average = 0.0 ; 
	
	printf("Input array elements : \n"); 
	for(int i=0 ; i<size ; i++) {
		scanf("%d" ,&arr[i]); 
		if (arr[i] > 0 ) {
			sum+=arr[i]; 
		}
	}
	
	printf("Input array is as follows:\n"); 
	for(int i = 0 ; i<size ; i++) {
		printf("%d " ,arr[i]); 
	}
	average = sum / size ; 
	printf("\nAverage of the elements is = %.2f" ,average);
	
	return 0; 
}