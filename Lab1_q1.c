// converts temperature from fahrenheit to kelvin

#include <stdio.h>
int main () {
	float fahrenheit , kelvin ; 
	
	printf("Input Temperature in Fahrenheit= "); 
	scanf("%f" ,&fahrenheit); 
	
	kelvin = (fahrenheit - 32)*(5.0/9.0)+ 273.15; 
	
	printf("Temperature in Kelvin = %f" ,kelvin); 
	
	return 0; 
}