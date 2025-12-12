/*Write down a program which asks user to input his first name and last name in a separate array. 
After taking the input your program should be able to concatenate first name and last name and 
return it as full name. Count down number of characters in the full name as well. 
For example: First name: Muhammad, Second name: Ahmed, Full name: Muhammad Ahmed  */

#include<stdio.h>
#include<string.h>
int main (){
	char firstname[50]; 
	char lastname[50]; 
	char fullname[100]; 
	
	// input first name 
	
	printf("Enter your first name : "); 
	fgets(firstname , sizeof(firstname) , stdin); 
	
	// remove extra line
	firstname[strcspn(firstname , "\n")] = 0 ; 
	
	// finding len
	int len1 = strlen(firstname); 
	
	// input last name 
	
	printf("Enter your last name : "); 
	fgets(lastname , sizeof(lastname) , stdin); 
	
	// remove extra line
	lastname[strcspn (lastname , "\n")] = 0 ; 
	
	// finding len 
	int len2 = strlen(lastname); 
	
	// copying firstname into fullname string.
	for(int i =0 ; i < len1 ; i++){
		fullname[i] = firstname[i]; 
	}
	
	// adding space
	fullname[len1] = ' '; 
	
	// copying lastname into fullname string.
	for(int i = 0 ; i < len2 ; i++){
		fullname[len1 + i + 1 ] = lastname[i]; 
	}
	
	// adding '\0'; 
	fullname[len1 + len2 + 1] = '\0';
	
	int len3 = strlen(fullname); 
	
	puts(fullname); 
	printf("Count of characters = %d" , len3);
	
	return 0; 
}