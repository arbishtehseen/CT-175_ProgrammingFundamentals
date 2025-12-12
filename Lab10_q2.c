// Arbish Tehseen , CT-25053
/* Write a program to implement the exchange or swap the values of 3 variables{a,b,c}. To
implement this, you need to write a function called swaped().
void swaped(int *aPtr, int *bPtr, int *cPtr);

such that; b ----> temp
a ----> b
c ----> a
temp -> a */ 
#include <stdio.h>

void swaped(int *aptr , int *bptr , int *cptr); 
int main () {
	int a , b , c ; 
	int *aptr , *bptr , *cptr ; 
	aptr = &a ; 
	bptr = &b ; 
	cptr = &c ; 
	
	printf("Input Number 1 : "); 
	scanf("%d" ,aptr); 
	
	printf("Input Number 2 : "); 
	scanf("%d" ,bptr); 
	
	printf("Input Number 3 : "); 
	scanf("%d" ,cptr); 
	
	swaped(aptr , bptr , cptr); 
	
	printf("After Swapping:\n"); 
	printf("Number 1 = %d\n" , a);
	printf("Number 2 = %d\n" , b);
	printf("Number 3 = %d\n" , c);
	
	return 0; 
}

void swaped(int *aptr , int *bptr , int *cptr) {
	int temp = *bptr ; 
	*bptr = *aptr ; 
	*aptr = *cptr ; 
	*cptr = temp ; 
	
	return ; 
}