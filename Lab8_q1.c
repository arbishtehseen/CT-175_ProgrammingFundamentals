/*  As a programmer, you are required to create a program that takes the first and last name from 
a user. The program then combines both the inputs taken and prints the string backwards. */

#include<stdio.h>
#include<string.h>
int main (){
	char firstname[50]; 
	char lastname[50]; 
	char fullname[100]; 
	
	// Input first Name.
	printf("Enter First Name : "); 
	fgets(firstname , sizeof(firstname) , stdin); 
	
	// removing newline.
	firstname[strcspn (firstname , "\n")] = 0 ; 
	
	// Input last name.
    printf("Enter Last Name : ");
	fgets(lastname , sizeof(lastname) , stdin); 
	
	// removing newline.
	lastname[strcspn (lastname , "\n")] = 0 ; 
	
	int len1 = strlen(firstname);
	int len2 = strlen(lastname); 
	
	// copying strings into fullname. 
	for(int i = 0 ; i < len1 ; i++){
		fullname[i] = firstname[i]; 
	}
	
	// adding space 
	fullname[len1] = ' ';
	
	for(int i = 0 ; i < len2 ; i++){
		fullname[len1 + i + 1] = lastname[i]; 
	}
	
	fullname[len1 + len2 + 1 ] = '\0';
	
	int len3 = strlen(fullname);
	
	// printing in reverse order.
	for(int i = len3-1 ; i >= 0 ; i--){
		printf("%c" , fullname[i]);
	}
	
	return 0; 
}