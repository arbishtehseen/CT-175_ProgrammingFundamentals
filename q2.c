/*Write pseudo-code and draw flow chart. Ask a user to enter exam scores for five different 
courses and determine whether the student is passing or failing the course. Calculate the 
average score, the number of failed courses, and the number of passed courses. To confirm your 
solution, trace through the designed flowchart and pseudo-code by using the following test case: 
88, 65, 45, 23, 77. */


#include <stdio.h> 
int main (void) {
	int marks[5]; 
	int pass=0 , fail =0 , sum=0 ;
	float average = 0.0; 
	
	
	for(int i=0 ; i<5 ; i++) {
		printf("Enter Marks for subject %d = ", i+1); 
		scanf("%d" ,&marks[i]); 
		
		// Input Validation
		if(marks[i] > 100 || marks[i] < 0){
			printf("Invalid input!Please enter marks(0-10).\n"); 
			i-- ; //repeats this iteration
			
			continue; // pass fail check nh hoga na hi sum mae add hnge.
			// repeat hogi wo iteration.
		}
		
		// pass or fail check
		if(marks[i] >= 50 ){
			pass++; 
		}
		else {
			fail++; 
		}
		
		sum+=marks[i]; 
	}
	
	average= (float) sum/5.0; 
	printf("\nCourses Passed = %d\nCourses Failed = %d\nAverage Marks = %.2f" ,pass ,fail ,average); 
	
	return 0; 
}