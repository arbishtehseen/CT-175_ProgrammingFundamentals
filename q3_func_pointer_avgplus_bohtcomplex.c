/*Define a structure to store the following student data: CGPA, courses (course name, GPA), 
address (consisting of street address, city, state, zip). Input 2 student records, compare and 
display which student have highest GPA in which course also Display which student has the 
highest CGPA . HINT: define another structure to hold the courses and address. */

#include<stdio.h>
#include<string.h>

struct course{
	char coursename[100]; 
	float gpa ; 
};

struct address{
	char street[100]; 
	char city[50]; 
	char state[50]; 
	int zip ; 
};

struct student{
	char name[100]; 
	float cgpa ; 
	struct course courses[2]; 
	struct address add ; 
};

void getstudentdata(struct student *s);
void printstudentdata(struct student *s); 
struct student* highestcgpa(struct student *s1 , struct student *s2);
void comparecoursegpa(struct student *s1 , struct student *s2); 
float avgcoursegpa(struct student *s);


int main (){
	
	struct student s1 , s2 ; 
	struct student *ptr1 = &s1 , *ptr2 = &s2 ; 
	
	// input data for both the students.
	printf("Student 1 : \n");
    getstudentdata(ptr1 ); 
    printf("Student 2 :\n");
    getstudentdata(ptr2 ); 
    
    // printing data for both the students
    printf("\nStudent 1 :\n"); 
    printstudentdata(ptr1); 
    printf("\nstudent 2 :\n"); 
    printstudentdata(ptr2); 
    
    // finding student who got highest cgpa
    struct student highcgpa ;
    struct student *phighcgpa = highestcgpa(ptr1 , ptr2); 
    printf("\n%s got highest CGPA.\n" , phighcgpa->name);
	printf("CGPA = %.2f\n" , phighcgpa->cgpa);
	
	// comparing course gpa
	comparecoursegpa(ptr1 , ptr2); 
	
	// calculating average course gpa of both students.
	float student1 = avgcoursegpa(ptr1); 
	float student2 = avgcoursegpa(ptr2); 
	
	printf("\nStudent 1 :\n"); 
	printf("Average Courses GPA = %.2f" , student1);
	
	printf("\nStudent 2 :\n"); 
	printf("Average Courses GPA = %.2f" , student2); 
	
	return 0; 
}

void getstudentdata(struct student *s){
	
	printf("Enter your Name : "); 
	fgets(s->name , sizeof(s->name) , stdin); 
	
	s->name[strcspn (s->name , "\n")] = 0; 
	
	printf("Enter CGPA : ");
	scanf("%f" , &s->cgpa);
	getchar(); 
	
	if(s->cgpa < 0.0 || s->cgpa >4.0){
		printf("Invalid Input!\nIt should must be between (0.0-4.0)\n");
		return ; 
	}
	
	printf("Enter 1st Course Name : "); 
	fgets(s->courses[0].coursename , sizeof(s->courses[0].coursename) , stdin); 
	
	//removing newline.
	
	s->courses[0].coursename[strcspn (s->courses[0].coursename , "\n")] = 0 ; 
	
	printf("Enter 1st Course's GPA: "); 
	scanf("%f" , &s->courses[0].gpa); 
	getchar(); 
	
	if(s->courses[0].gpa < 0.0 || s->courses[0].gpa > 4.0){
		printf("Invalid gpa!\nIt should must be between (0.0-4.0)\n"); 
		return ; 
	}
	
	printf("Enter 2nd Course Name : "); 
	fgets(s->courses[1].coursename , sizeof(s->courses[1].coursename) , stdin); 
	
	// removing newline
	
	s->courses[1].coursename[strcspn (s->courses[1].coursename , "\n")] = 0 ;
	
	printf("Enter 2nd Course's GPA : "); 
	scanf("%f" , &s->courses[1].gpa); 
	getchar();
	
		if(s->courses[1].gpa < 0.0 || s->courses[1].gpa > 4.0){
		printf("Invalid gpa!\nIt should must be between (0.0-4.0)\n"); 
		return ; 
	} 
	
	// Taking Input Address!
	
	printf("Enter Street Address : "); 
	fgets(s->add.street , sizeof(s->add.street) , stdin);
	
	s->add.street[strcspn (s->add.street , "\n" )] = 0 ; 
	
	printf("Enter City : "); 
	fgets(s->add.city , sizeof(s->add.city) , stdin); 
	
	s->add.city[strcspn (s->add.city , "\n")] = 0 ; 
	
	printf("Enter State : "); 
	fgets(s->add.state , sizeof(s->add.state) , stdin); 
	
	s->add.state[strcspn (s->add.state , "\n")] = 0 ; 
	
	printf("Enter ZIP : "); 
	scanf("%d" , &s->add.zip); 
	getchar();
	
	return ; 
}

void printstudentdata(struct student *s){
	
	printf("\nStudent Name : %s\n" , s->name); 
	printf("CGPA : %.2f\n" , s->cgpa); 
	printf("1st Course : %s\n" , s->courses[0].coursename); 
	printf("1st Course GPA : %.2f\n" , s->courses[0].gpa); 
	printf("2nd Course : %s\n" , s->courses[1].coursename); 
	printf("2nd Course GPA : %.2f\n" , s->courses[1].gpa); 
	printf("Address:\n");
	printf("Street Address : %s\n" , s->add.street); 
	printf("City : %s\n" , s->add.city); 
	printf("State : %s\n" , s->add.state); 
	printf("ZIP : %d" , s->add.zip);

	return ; 
}

struct student* highestcgpa(struct student *s1 , struct student *s2){
	
	if ( s1->cgpa > s2->cgpa){
		return s1 ; 
	}
	else {
		return s2;
	}
}

void comparecoursegpa(struct student *s1 , struct student *s2){
	
	// comparing 1st courses's gpa. 
	if(s1->courses[0].gpa > s2->courses[0].gpa ){
		printf("\n%s got highest GPA.\n" , s1->name);
		printf("In %s's subject\n" , s1->courses[0].coursename); 
		printf("GPA = %.2f\n" , s1->courses[0].gpa); 
	}
	else if(s2->courses[0].gpa > s1->courses[0].gpa ){
		printf("\n%s got highest GPA.\n" , s2->name);
		printf("In %s's subject\n" , s2->courses[0].coursename); 
		printf("GPA = %.2f\n" , s2->courses[0].gpa); 
	}
	else if( s2->courses[0].gpa == s1->courses[0].gpa ){
		printf("\nIt's a TIE!\nBoth got equal gpa!");
	}
	
	// comparing 2nd courses's gpa.
	if(s1->courses[1].gpa > s2->courses[1].gpa ){
		printf("\n%s got highest GPA.\n" , s1->name);
		printf("In %s's subject\n" , s1->courses[1].coursename); 
		printf("GPA = %.2f\n" , s1->courses[1].gpa); 
	}
	else if(s2->courses[1].gpa > s1->courses[1].gpa ){
		printf("\n%s got highest GPA.\n" , s2->name);
		printf("In %s's subject\n" , s2->courses[1].coursename); 
		printf("GPA = %.2f\n" , s2->courses[1].gpa); 
	}
	else if( s2->courses[1].gpa == s1->courses[1].gpa ){
		printf("\nIt's a TIE!\nBoth got equal gpa!");
	}
	return;
	
}

float avgcoursegpa(struct student *s){
	
	float avggpa ;
	avggpa = (s->courses[0].gpa + s->courses[1].gpa) / 2.0; 
	if(avggpa < 2.0){
		printf("\nStudent Needs Improvement!\n");
	}
	
	return avggpa ;
}
