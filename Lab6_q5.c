/*(Calculating the Value of p) Calculate the value of p from the infinite series. Print a table that 
shows the value of p approximated by one term of this series, by two terms, by three terms, and 
so on. How many terms of this series do you have to use before you first get 3.14? 
3.141? 3.1415? 3.14159? */

#include <stdio.h>
int main () {
	float sum = 0.0 , pi = 0.0 ;
	float num = 1.0 , sign = 1.0 ; 
	
    
    int i = 1 ; 
	 while (1) {
	
		sum += sign/num ;
		pi = 4*sum ; 
		printf ("%d    %.6f\n" ,i ,pi ); 
		if (pi >= 3.14159 ) {
			break ; 
		}
		sign = -sign ;
		num+=2.0; 
		i++; 
		 
	}
	
	return 0; 
}