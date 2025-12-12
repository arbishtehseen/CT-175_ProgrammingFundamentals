/*Each student is required to find out the maximum frequency of characters occurring in their 
name and the courses offered in Fall 2021. To find it, the student enters their name, courses 
offered and the program finds the maximum occurrences of a character in the name and course. 
Course names should be used like Programming Fundamentals, Applied Physics, Pakistan Studies 
and so on.  */

#include<stdio.h>
#include<string.h>
int main () {
	char name[100]; 
	char course1[100]; 
	char course2[100]; 
	
	printf("Enter Name : "); 
	fgets(name , sizeof(name) , stdin); 
	
	name[strcspn (name , "\n")] = 0 ; 
	
	int lenname = strlen(name); 
 
    char letter ; 
    int maxcount = 0 ; 
    
    for(int i = 0 ; i < lenname ; i++){
    	
    	int count = 1 ; 
    	
    	if(name[i] == ' '){
    		continue ; 
		}
    	
    	for(int j = i+1 ; j < lenname ; j++){
    		
    		if(name[i] == name[j]){
    			count++; 
			}
		}
		if(count > maxcount){
			maxcount = count ; 
			letter = name[i]; 
		}
	}
	/*Each student is required to find out the maximum frequency of characters occurring in their 
name and the courses offered in Fall 2021. To find it, the student enters their name, courses 
offered and the program finds the maximum occurrences of a character in the name and course. 
Course names should be used like Programming Fundamentals, Applied Physics, Pakistan Studies 
and so on.  */

#include<stdio.h>
#include<string.h>
int main () {
	char name[100]; 
	char course1[100]; 
	char course2[100]; 
	
	printf("Enter Name : "); 
	fgets(name , sizeof(name) , stdin); 
	
	name[strcspn (name , "\n")] = 0 ; 
	
	int lenname = strlen(name); 
 
    char letter ; 
    int maxcount = 0 ; 
    
    for(int i = 0 ; i < lenname ; i++){
    	
    	int count = 1 ; 
    	
    	if(name[i] == ' '){
    		continue ; 
		}
    	
    	for(int j = i+1 ; j < lenname ; j++){
    		
    		if(name[i] == name[j]){
    			count++; 
			}
		}
		if(maxcount <= count){
			maxcount = count ; 
			letter = name[i]; 
		}
	}
	printf("%c appeared %d times." , letter , maxcount);
	
	int flag = 0 ; 
	
	for(int i = 0 ; i < lenname ; i++){
		
	}
	
	
	
	return 0; 
}