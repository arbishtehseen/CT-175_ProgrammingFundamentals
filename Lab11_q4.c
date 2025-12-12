/* Define a structure to store the following student data: CGPA, courses (course name, GPA),
address (consisting of street address, city, state, zip). Input 2 student records, compare and
display which student have highest GPA in which course also Display which student has the
highest CGPA . HINT: define another structure to hold the courses and address. */

#include<stdio.h>
#include<string.h>

struct courses {
	char coursename[100]; 
	float gpa ; 
};

struct address {
	char streetaddress[100]; 
	char city[50]; 
	char state[50]; 
	int zip ; 
};

struct student{
	float cgpa ; 
	struct courses c1 , c2 ; 
	struct address a ; 
};

int main () {
	
	struct student s[2];
	
	for(int i = 0 ; i < 2 ; i++){
		printf("Student %d : " , i+1);
		// input 1st course name and gpa.
		 
		getchar();
		printf("Enter %d Course Name : " , i+1); 
		fgets(s[i].c1.coursename , sizeof(s[i].c1.coursename), stdin);
		printf("Enter gpa of \n%s course : " , s[i].c1.coursename); 
		scanf("%f" , &s[i].c1.gpa);
		getchar(); 
		
		// input 2nd course name and gpa. 
		printf("Enter %d Course Name : " , i+1); 
		fgets(s[i].c2.coursename , sizeof(s[i].c2.coursename), stdin);
		printf("Enter gpa of \n%s course : " , s[i].c2.coursename); 
		scanf("%f" , &s[i].c2.gpa);
		getchar(); 
		
		// input address. 
		printf("Enter Street Address : "); 
		fgets(s[i].a.streetaddress , sizeof(s[i].a.streetaddress) , stdin); 
		
		printf("Enter City : "); 
		fgets(s[i].a.city , sizeof(s[i].a.city) , stdin); 
		
		printf("Enter State :"); 
		fgets(s[i].a.state , sizeof(s[i].a.state) , stdin);
		
		printf("Enter Zip : "); 
		scanf("%d" , &s[i].a.zip); 
		
		// input cgpa 
		printf("Enter CGPA : "); 
		scanf("%f" , &s[i].cgpa);
		getchar(); 
	}
	
	float maxgpa = s[0].c1.gpa ; 
	char maxcourse[100]; 
	strcpy(maxcourse , s[0].c1.coursename);
	int stud = 1 ; 
	 
	 // Comparing GPA.
	 // storing course name.
	 // storing student Number.
	for (int i = 0 ; i < 2 ; i++) {
		
		if(maxgpa < s[i].c1.gpa) {
			maxgpa = s[i].c1.gpa; 
			strcpy(maxcourse , s[i].c1.coursename);
			stud = i+1;
		}
		
		if(maxgpa < s[i].c2.gpa) {
			maxgpa = s[i].c2.gpa; 
			strcpy(maxcourse , s[i].c2.coursename);
			stud = i + 1 ; 
		}
	}
	
	float mmaxcgpa = s[0].cgpa ; 
	int stu = 1 ; 
	
	if (mmaxcgpa < s[1].cgpa) {
		mmaxcgpa = s[1].cgpa;
		stu = 2 ;  
	}
	
    printf("\nMaxgpa = %.2f of Student %d." , maxgpa , stud);
    printf("\nCourse: %s" ,maxcourse);
    printf("\nMax CGPA : %.2f of Student %d." , mmaxcgpa , stu); 

    
	return 0; 
}