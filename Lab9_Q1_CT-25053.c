#include <stdio.h>
#include <stdlib.h>

void countfrequency(int array1[] , int size); 

int main (){
	int size ; 
	
	printf("Input Array size = "); 
	scanf("%d" ,&size); 
	
	int array1[size]; 
	
	for(int i=0 ; i<size ; i++){
		array1[i] = rand()%11; 
	}
	countfrequency(array1 , size); 
	
	return 0; 
}
// Function Definition
void countfrequency(int array1[] , int size) {
	
	int visited[size] ;  
	
	// initialized visited array as 0.
	for (int k=0 ; k<size ; k++) 
		visited[k] = 0; 
		
		//check if each element is counted 
		for(int i=0 ; i<size ; i++) {	
		   if (visited[i] == 0) {	// 0 = element not counted.
				int count = 1; 
				
				// this loop counts duplicates
				for(int j=i+1 ; j<size ; j++) {
					if ( visited[j] == 0 && array1[i] == array1[j]) {
							count++; 
							visited[j] = 1; // if counted = 1.
					}
				}
				// j loop ended 
				visited[i] = 1;
			printf("%d = %d\n" , array1[i] , count); 
		}
		}
		// i loop ended
	// k loop ended
}