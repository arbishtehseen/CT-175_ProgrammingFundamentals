#include <stdio.h>

int main() {
    int n = 1;               // term counter
    double pi = 0.0;          // approximation of pi
    double term;              // current term
    double sign = 1.0;        // alternating + and -
    
    printf("Term\tApproximation of Pi\n");
    while (pi < 3.141592) {  // we can go until a good approximation
        term = sign / (2 * (n - 1) + 1); // calculate term
        pi += term;                       // add to sum
        printf("%d\t%.6f\n", n, 4 * pi); // print approximation
        if (pi >= 3.141592) {
        	break ; 
		}
        sign = -sign;                      // change sign
        n++;
    }

    return 0;
}