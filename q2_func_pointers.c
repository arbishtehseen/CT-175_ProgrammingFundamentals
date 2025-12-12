/* A phone number, such as (212) 767-8900, can be thought of as having three parts: e.g., the area 
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
	int number ; 	
};

void getphonenumber(struct phonenumber *p); 
void printphonenumber(struct phonenumber *p); 

int main (){
	struct phonenumber p1 , p2; 
	struct phonenumber *ptr1 , *ptr2; 
	ptr1 = &p1 ; 
	ptr1->areacode = 909; 
	ptr1->exchange = 989 ; 
	ptr1->number = 2008 ; 
	
	ptr2 = &p2 ; 
	
	getphonenumber(ptr2);
	printphonenumber(ptr1); 
	printphonenumber(ptr2);
	
	return 0; 
}

void getphonenumber(struct phonenumber *p){
	printf("Enter Area Code : "); 
	scanf("%d" , &p->areacode); 
	printf("Enter Exchange : "); 
	scanf("%d" , &p->exchange);
	printf("Enter Number : "); 
	scanf("%d" , &p->number);
	return ;
}

void printphonenumber(struct phonenumber *p){
	printf("(%d) %d-%d\n" , p->areacode , p->exchange , p->number); 
	return ; 
}