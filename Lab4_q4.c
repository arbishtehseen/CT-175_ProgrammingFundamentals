/* Write a program that asks for the number of calories and fat grams in a food.  The program 
should display the percentage of calories that come from fat.  If the calories from fat are less 
than 30% of the total calories of the food, it should also display a message indicating that the 
food is low in fat. One gram of fat has 9 calories, so Calories from fat = fat grams * 9. The 
percentage of calories from fat can be calculated as: calories from fat/total calories 
Input validation: Make sure the number of calories and fat grams are not less than 0. Also, the 
number of calories from fat cannot be greater than the total number of calories.  If that happens, 
display an error message indicating that either the calories or fat grams were incorrectly entered. */


#include <stdio.h>
int main (void) {
	float caloriesinfood , fatgrams , fatcalories; 
	
	printf("Input Total Calories in food : "); 
	scanf("%f" ,&caloriesinfood); 
	
	printf("Input Fatgrams in food : "); 
	scanf("%f" ,&fatgrams);
	
	if(caloriesinfood <= 0 || fatgrams <= 0){
		printf("INVALID INPUT!"); 
		return 0; 
	}
	
	fatcalories = fatgrams*9; 
	
	if(fatcalories > caloriesinfood){
		printf("INVALID INPUT VALUES!"); 
		return 0; 
	}
	
	
	if(fatcalories < caloriesinfood*0.30){
		printf("Food is Low in Fat.\n"); 
		printf("Calories in fat are : %.2f\n" ,fatcalories); 
	}
	else {
		printf("Calories in fat are : %.2f\n" ,fatcalories); 
	}
	
	return 0; 
}