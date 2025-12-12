
// converts speed from km/hr to miles/hr

#include <stdio.h>
int main () {
	float kmhr , mileshr; 
	
	printf("Input speed in km/hour = "); 
	scanf("%f" ,&kmhr); 
	
	mileshr = kmhr*0.621371; 
	
	printf("Speed in miles/hr = %.2f",mileshr); 
	
	return 0; 
}