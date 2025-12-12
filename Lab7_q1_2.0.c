/*Write a program that reads the numbers from user and store these numbers into an array of 
same size. Find and display the sum of all positive numbers and calculate the average. */

#include<stdio.h>
int main () {
	int size ; 
	
	printf("Enter size of array : "); 
	scanf("%d" , &size); 
	
	int arr[size]; 
	int sum = 0 ; 
	int count = 0 ; 
	
	printf("Input Array Elements : "); 
    for(int i = 0 ; i < size ; i++){
    	scanf("%d" , &arr[i]);
    	if(arr[i] > 0){
    		sum+=arr[i]; 
    		count++; 
		}
	}
	
	if(count > 0){

    printf("Sum = %d\n" , sum);
	float average = sum/count; 
	printf("Average = %.2f" , average);
    }
    else {
    	printf("No Positive Number found!");
	}


	return 0; 
}