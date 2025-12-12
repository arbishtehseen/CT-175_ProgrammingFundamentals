// arbish tehseen Ct-25053
#include <stdio.h>

void sortfunction( int *arr , int *size , int order); 

int main () {
	int size ; 
	
	printf("Input array size : "); 
	scanf("%d" , &size); 
	
	int arr[size]; 
	int *ptr = arr ; 
	
	printf("Input Array elements :\n");
	for (int i = 0 ; i < size ; i++) {
		scanf("%d" , ptr+i); 
	}
	
	int order ; 
	
	printf("In which order do you want to sort array?\n1.Ascending\n2.Descending\n"); 
	scanf("%d" , &order); 
	
	sortfunction(ptr , &size , order); 
	
	if (order == 1){
		printf("Array Sorted in Ascending Order is :\n");
	}
	else {
		printf("Array Sorted in Descending Order is :\n");
	}
	
	for(int i = 0 ; i < size ; i++){
		printf("%d " , *(ptr + i)); 
	}
	
	return 0; 
}

void sortfunction(int *arr , int *size , int order){
	if (order == 1 ) {
		// sort in ascending order.
		for (int i = 0 ; i < *(size) - 1 ; i++){
			for (int j = 0 ; j < *(size) - i - 1 ; j++){
				if ( *(arr + j) > *(arr + j + 1)) {
					int temp ; 
					temp = *(arr + j); 
					*(arr + j) = *(arr + j + 1); 
					*(arr + j + 1) = temp ; 
				}
			}
		}
	}
	
	else {
		// sort in descending order.
			for (int i = 0 ; i < *(size) - 1 ; i++){
			for (int j = 0 ; j < *(size) - i - 1 ; j++){
				if ( *(arr + j) < *(arr + j + 1)) {
					int temp ; 
					temp = *(arr + j); 
					*(arr + j) = *(arr + j + 1); 
					*(arr + j + 1) = temp ; 
				}
			}
		}
	}
}