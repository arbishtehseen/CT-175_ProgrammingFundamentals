// arbish tehseen CT-25053
#include<stdio.h>
int main (){
	int arr[10]; 
	int *ptr = arr ; 
	
	for(int i = 0 ; i < 10 ; i++){
		*(ptr+ i) = i*i ; 
	}
	
	printf("Resultant Array : \n"); 
	for(int i = 0; i < 10 ; i++){
		printf("%d " , *(ptr+i));
	}
	return 0; 
}