#include <stdio.h>

//Function prototype
void positionassigned(int marks);

int main () {
	int marks ; 
	
	printf("Enter your test Score = "); 
	scanf("%d" ,&marks); 
	
	//Function Call.
	positionassigned(marks); 
	
	return 0; 
}
// Function Definition
void positionassigned(int marks) {
	int experience ; 
	
	if(marks<=49) {
		printf("InSufficient Marks!\nNot Selected."); 
		return ; 
	}
	if(marks> 100){
		printf("Invalid Input."); 
        return ; 
	}
	if(marks >= 50 && marks<60){
		printf("Congratulations!\nYou are selected as Trainee Engineer."); 
		return; 
	}
	else if (marks >=60 && marks<100){
		printf("Enter the number of experience you have= "); 
		scanf("%d" ,&experience); 
		if(experience <=0){
			printf("Not Selected"); 
			return ; 
		}
		if (marks >= 70 && experience >=2){
			printf("Congratulations!\nYou are selected as Associate Developer.");
		}
		else{
			printf("Congratulations!\nYou are selected as Assistant Developer.");
		}
	}
	else {
		printf("Marks not enough for selection.");
	}
}