// arbish tehseen CT-25053
/* write a program that finds second highest number in a float type array of 20 
elements using pointer */
#include<stdio.h> 
int main () {
	float arr[20];
	float *ptr = arr ; 
	
	printf("Input elements (in float ): \n");
	for (int i = 0 ; i < 20 ; i++) {
		scanf("%f" , ptr+i); 
	}
	
	float max = arr[0]; 
	float secmax = arr[0] ; 
	
	for(int i = 0 ; i <20 ; i++) {
		if (max < *(ptr + i)) {
			secmax = max ; 
			max = *(ptr +i);
		}
		else if ( max > *(ptr +i) && secmax < *(ptr +i)) {
			secmax = *(ptr +i); 
		}
		else if (max == *(ptr+i)) {
			continue ; 
		}
	}
	
	printf("Largest = %.2f\n" ,max); 
	printf("Second Largest = %.2f\n" ,secmax);
	
	return 0; 
}