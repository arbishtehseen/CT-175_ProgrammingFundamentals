
// converts hours and minutes (combinely) into seconds.

#include <stdio.h>
int main (void) {
	int hr , min , sec ; 
	
	printf("Input hours = "); 
	scanf("%d" ,&hr); 
	
	printf("Input minutes = "); 
	scanf("%d" ,&min); 
	
	sec=hr*3600 + min*60; 
	
	printf("Total Number of seconds = %d" ,sec); 
	
	return 0; 
}