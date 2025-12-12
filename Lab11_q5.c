/*Write a C program that uses functions to perform the following operations:

i) Reading a complex number
ii) Writing a complex number
iii) Addition of two complex numbers
iv) Multiplication of two complex numbers
(Note: represent complex numbers using a structure.) */ 

#include<stdio.h>

struct complexnumber{
	int realpart; 
	int imagpart; 
};

void inputcomplex(); 
void printcomplex(struct complexnumber c[] , int size ); 
void addcomplex(struct complexnumber c[] , int size);
void multiplycomplex(struct complexnumber c[] , int size);

int main (){
	
	inputcomplex(); 
	return 0; 
}

void inputcomplex(){
	struct complexnumber c[2]; 
	
	// Taking Input of Complex Numbers.
	for(int i = 0 ; i < 2 ; i++){
		printf("Input Real Part of %d Number: " , i+1); 
		scanf("%d", &c[i].realpart);
		printf("Input Imaginary Part of %d Number : " , i+1); 
	    scanf("%d" , &c[i].imagpart);
	}
	printcomplex(c , 2);
	addcomplex(c , 2); 
	multiplycomplex(c , 2); 
	return ;
}

void printcomplex(struct complexnumber c[] , int size) {
	// Printing Complex Numbers.
	for(int i = 0 ; i < size ;i++){
		printf("%d + %di\n" , c[i].realpart , c[i].imagpart);
	}
	return ; 
}

void addcomplex(struct complexnumber c[] , int size){
	 struct complexnumber result ; 
	 
	 // adding real part first .
	 result.realpart = c[0].realpart + c[1].realpart; 
	 result.imagpart = c[0].imagpart + c[1].imagpart;
	 printf("\nResult of Addition : %d + %di" , result.realpart , result.imagpart);
	 return ; 
}

void multiplycomplex(struct complexnumber c[] , int size) {
	struct complexnumber result ; 
	// (3 + 2i)*(1 + 4i)
	 
	 result.realpart = (c[0].realpart * c[1].realpart) - (c[0].imagpart * c[1].imagpart);
	 result.imagpart = (c[0].realpart * c[1].imagpart) + (c[0].imagpart * c[1].realpart);
	
	printf("\nResult of Multiplication : %d + %di" , result.realpart , result.imagpart);
	return ; 
}