/*Students are grouped in two to complete a lab task. Each student is required to enter a string 
of their own choice as an input to the program. The program will then display as a result 
whether both the strings are equal. If the strings are not equal, the program will display which 
of the string is greater. 
Test cases: 
Enter two strings that are same. 
Enter two different strings. */

#include<stdio.h>
#include<string.h>
int main (){
	char string1[100]; 
	char string2[100]; 
	
	printf("User 1 :\nEnter String:"); 
	fgets(string1 , sizeof(string1) , stdin); 
	
	string1[strcspn(string1 , "\n")] = 0 ; 
	
	printf("User 2:\nEnter String: "); 
	fgets(string2 , sizeof(string2) , stdin);
	
	string2[strcspn(string2 ,"\n")] = 0 ; 
	
	int len1 = strlen(string1); 
	int len2 = strlen(string2); 
	
	int equal = 1; 
	if(len1 != len2){
		printf("Both the strings are not equal!\nAs their length differs.\n");
		return 0; 
	}
	else{
		for(int i = 0 ; i < len1 ; i++){
			if(string1[i] != string2[i]){
				equal = 0 ; 
				
		    	}
	   	   }
		}
	
	
	if (equal != 0){
		printf("Both are equal!");
	}
	else {
		for(int i = 0; i < len1 ; i++){
			if(string1[i] > string2[i]){
				printf("%s is greater than %s!" , string1 , string2); 
				break ; 
			}
			else {
				printf("%s is greater than %s." , string2 , string1); 
				break ; 
			}
		}
	}
	
	return 0; 
}