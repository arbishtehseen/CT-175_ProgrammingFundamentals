 /* Write a C program to input a character from user and check whether given character is small 
alphabet, capital alphabet, digit or special character, using if else. */

#include <stdio.h> 
int main () {
	char ch;
	
	printf("Input a character : "); 
	scanf("%c" ,&ch); 
	
	if(ch >= 'a' && ch <= 'z') {
		printf("Entered character is a small alphabet."); 
		return 0;
	}
	
    else  if (ch >= 'A' && ch <= 'Z') {
		printf("Entered character is a capital alphabet."); 
		return 0; 
	}
	
    else if (ch >= '0' && ch <= '9') {
			printf("Entered character is a Digit."); 
			return 0; 
	}
	
	else {
	printf("Entered character is a special character"); 
	}
	
	return 0; 
}