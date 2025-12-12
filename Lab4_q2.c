/*An online shopping store is providing discounts on the items due to the Eid. If the cost of items 
is more than 1999 it will give a discount upto 50%. If the cost of shopping is 2000 to 4000, a 20% 
discount will be applied. If the cost of shopping is 4001 to 6000, a 30% discount will be applied. 
If it's more than 6000 then 50% discount will be applied to the cost of shopping. Print the actual 
amount, saved amount and the amount after discount. */
 
#include <stdio.h>
int main () {
	float actualamount , savedamount ,finalamount ; 
	
	printf("Input actual amount of your purchase = "); 
	scanf("%f" ,&actualamount); 
	
	if(actualamount == 0 || actualamount < 0){
		printf("INVALID INPUT!"); 
		return 0; 
	}
	
	if(actualamount <= 1999){
		printf("No discount available.\n");
		printf("Actual amount = %.2f\n" ,actualamount);
		printf("Amount Saved = 0\n"); 
		printf("Final amount = %.2f\n" ,actualamount); 
		return 0; 
	}
	
	else if (actualamount >=2000 && actualamount <=4000) {
		printf("Actual amount = %.2f\n" ,actualamount); 
	    savedamount = actualamount*0.20; 
		finalamount = actualamount-savedamount; 
		printf("Amount Saved = %.2f\n" ,savedamount); 
		printf("Final amount = %.2f\n" ,finalamount); 
	}
	
	else if (actualamount >=4001 && actualamount <= 6000){
		printf("Actual amount = %.2f\n" ,actualamount); 
		savedamount = actualamount*0.30; 
		finalamount = actualamount-savedamount; 
		printf("Amount Saved = %.2f\n" ,savedamount); 
		printf("Final amount = %.2f\n" ,finalamount);
	}
	
	else {
		printf("Actual amount = %.2f\n" ,actualamount); 
		savedamount = actualamount*0.50; 
		finalamount = actualamount-savedamount; 
		printf("Amount Saved = %.2f\n" ,savedamount); 
		printf("Final amount = %.2f\n" ,finalamount);
		
	}
	return 0; 
}