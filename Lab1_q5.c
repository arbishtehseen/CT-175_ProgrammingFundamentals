#include <stdio.h> 
int main (void) {
	int depth=12 ,height , width ; 
    int hboards=5 , vboards=3; //horizontal boards , vertical boards.
    int  hboards_total ,vboards_total , totallength; 
    
    
      printf("Enter height : "); 
      scanf("%d" ,&height); 
      printf("Enter width : "); 
      scanf("%d" ,&width); 
      
      // Horizontal boards length in feet (depth = 12 inches = 1 foot)
      hboards_total = 1*hboards; 
      
      // vertical boards total length
      vboards_total = height*vboards; 
      
      totallength= hboards_total + vboards_total; 
      
      printf("Total boards needed : %d feet." ,totallength);
	
	return 0; 
}