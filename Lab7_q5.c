/*Write a program which takes a matrix of any size as user input and returns the maximum element 
of matrix as output. Your code should also show the entered matrix on the screen.  */ 

#include<stdio.h>
int main (){
	int rows , col ; 
	
	printf("Enter total number of rows : "); 
	scanf("%d" , &rows); 
	
	printf("Enter total number of columns : "); 
	scanf("%d" , &col); 
	
	int arr[rows][col]; 
	
	printf("Input Array elements : "); 
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < col ; j++){
			scanf("%d" , &arr[i][j]); 
		}
	}
	
	int max = arr[0][0]; 
	
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < col ; j++){
			printf("%d " , arr[i][j]); 
			
			if(max < arr[i][j]){
				max = arr[i][j]; 
			}
		}
		printf("\n");
	}
	
	printf("\nMaximum element is :  %d." , max);
	return 0;
}