/*You taking a square matrix as input from keyboard and then you transpose the same matrix after 
meeting the requirements you are also interested to find out whether original Matrix A and 
transpose of Matrix A are equal are not. If the answer is yes, then you print the matrix along with 
message “matrix is symmetric” otherwise you print the “matrix is asymmetric”.   */

#include<stdio.h>
int main (){
	int r ; 
	
	printf("For Square Matrix :\n");
	printf("Enter Number of Rows and Columns : ");
	scanf("%d" , &r);
	
	int arr[r][r]; 
	
	printf("Enter elements : "); 
	for(int i = 0 ; i <r ; i++){
		for(int j = 0 ; j < r ; j++){
			scanf("%d" , &arr[i][j]);
		}
	}
	
	// Transposing the matrix.
	int transpose[r][r];
	
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < r ; j++){
			transpose[j][i] = arr[i][j];
		}
	}
	
	// checking if symmetric. 
	int symmetric = 1 ; 
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < r ; j++){
			if(transpose[i][j] != arr[i][j]) {
				symmetric = 0 ; 
				break ; 
			}
		}
	}
	
	if(symmetric != 0){
		printf("Matrix is Symmetric!");
	}
	else {
		printf("Matrix is not symmetric!");
	}
	
	return 0; 
}