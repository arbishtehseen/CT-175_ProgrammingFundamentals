/*Write a program that takes a positive number with a fractional part and rounds it to two decimal 
places. For example, 32.4851 would round to 32.49, and 32.4431 would round to 32.44. */

#include<stdio.h>

float roundoff(float value); 

int main(){
	float value ; 
	float result;
	
	printf("Enter Value : ");
	scanf("%f" , &value); 
	
	if(value < 0){
		printf("Enter Positive numbers only!"); 
	}
	else {
	 result = roundoff(value);
	 printf("Result = %.2f" , result); 
	}
	
	return 0; 
}
float roundoff(float value){
	
	float newvalue = value*100 ; 
    	newvalue+=0.5 ; 
	float result = (int)newvalue;
	result = result/100;
	
	return result;
	
	
}