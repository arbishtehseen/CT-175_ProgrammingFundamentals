
// calculates area of the circle.

#include <stdio.h>
int main () {
	const float pi= 3.14; 
	float area , radius ; 
	
	printf("Input Radius of the circle = "); 
	scanf("%f" , &radius); 
	
	area = pi*radius*radius; 
	
	printf("Area of Circle = %.2f" ,area); 
	return 0; 
}