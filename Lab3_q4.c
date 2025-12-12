/*Construct a C program with the flowchart below. The input value of the Principle must be 
between 100 Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time 
Period must be between 1 to 10 years. Hint: these restrictions can be displayed in the form of 
message on the window.*/

#include <stdio.h>
int main (void) {
	float principle_amount , rateofinterest , timeperiod , simpleinterest ;
	
	printf("Value of the Principle must be between 100 Rs. To 1,000,000 Rs."); 
	printf("Input Principle Amount = "); 
	scanf("%f" ,&principle_amount); 
	
	if(principle_amount < 100 || principle_amount > 1000000){
		printf("INVALID INPUT!"); 
		return 0; 
	}
	
	printf("Rate of Interest must be between 5% to 10%\nInput in the format (for 5% = 0.5)"); 
	printf("Input Rate of interest = ");
	scanf("%f" ,&rateofinterest); 
	
	if(rateofinterest < 0.5 || rateofinterest > 0.10 ){
		printf("INVALID INPUT!"); 
		return 0; 
	}
	
	printf("Time period must be between 1-10 years!"); 
	printf("Input Time Period = "); 
	scanf("%f" ,&timeperiod); 
	
	if (timeperiod < 1 || timeperiod > 10){
		printf("INVALID INPUT!"); 
		return 0; 
	}
	
	simpleinterest = principle_amount*rateofinterest*timeperiod;
	// didn't divide by 100 because rateofinterest 0. ke format mae hae
	
	printf("Simple Interest = %.2f" ,simpleinterest); 
	
	return 0; 
}