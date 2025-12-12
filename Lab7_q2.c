/*Write a C program to read elements in a matrix and check whether matrix is Sparse matrix or 
not. Logic: To check whether a matrix is sparse matrix we only need to check the total number 
of elements that are equal to zero. The matrix is sparse matrix if T = ((m * n) / 2 ) where T defines 
total number of zero elements where m and n are rows and columns respectively. */

#include<stdio.h>
int main (){
	int rows , col ; 
	
	printf("Enter total number of rows : "); 
	scanf("%d" , &rows); 
	printf("Enter total number of coloumns : "); 
	scanf("%d" , &col); 
	
	int arr[rows][col]; 
	int zerocount = 0 ; 
	
	printf("Input elements : \n");
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < col ; j++){
			scanf("%d" , &arr[i][j]);
			
			if(arr[i][j] == 0){
				zerocount++; 
			}
		}
	}
	
	if (zerocount >= (rows*col)/2){
		printf("The Matrix is Sparse!");
	}
	else{
		printf("Matrix is not Sparse!");
	}
	return 0; 
}