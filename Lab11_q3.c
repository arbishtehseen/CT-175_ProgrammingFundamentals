/*A phone number, such as (212) 767-8900, can be thought of as having three parts: e.g., the area
code (212), the exchange (767), and the number (8900). Write a program that uses a structure
to store these three parts of a phone number separately. Call the structure phone. Create two
structure variables of type phone. Initialize one, and have the user input a number for the other
one. Then display both numbers.
The interchange might look like this:
Enter area code: 415
Enter exchange: 555
Enter number: 1212
Then display like below:
My number is (212) 767-8900
Your number is (415) 555-1212 */

#include<stdio.h>

struct phonenumber{
	int areacode ;
	int exchange ; 
	int thenum ; 
};

int main (){
	struct phonenumber n1 , n2; 
	n1.areacode = 999 ; 
	n1.exchange = 876 ; 
	n1.thenum = 2008 ; 
	
	printf("Enter Area code: "); 
	scanf("%d" , &n2.areacode); 
	printf("Enter exchange: "); 
	scanf("%d" , &n2.exchange); 
	printf("Enter Number : "); 
	scanf("%d" , &n2.thenum); 
	
	printf("My number is : (%d) %d-%d" , n1.areacode , n1.exchange , n1.thenum); 
	printf("\nYour number is : (%d) %d-%d" , n2.areacode , n2.exchange , n2.thenum);
}