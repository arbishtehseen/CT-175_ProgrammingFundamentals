#include <stdio.h>

// Created two functions.

// prototype se compiler gets to know return type and parameters.

float getdata();  //takes input only

// getdata() --No Value because input func ke andr lerha hae.
// when input is taken in the function , parameters arenot defined!// 


float volumecall(float a , float h );            // calculates volume


int main (){
	
	float volume ;  //volume variable declare kiya jo volume store krrega.
	
	 volume = getdata(); //function ko call kiya
	 
	 //getdata , input leke volumecall ko call krega calculation krne ke lye.
	 
	 // return value aygi aur volume mae store hojaaye gi.
	 
	 printf("Volume = %.2f" ,volume);
	return 0; 
}

//first func
float getdata() {
	
	//declare kiya un variables ko jinko input lena hae.
	float a , h;  
	

	printf("Input the value of Base= "); 
	scanf("%f" ,&a); 
	printf("Input the value of Height= ");
	scanf("%f" ,&h);
	
	
	// input lelya , ab call krega 'volumecall' ko calculation krne ke liye.
	
	// a and h pass hrhe hein volume call ke function mae 
	return volumecall(a,h); 
	//return value jayegi volume(variable) mae store hojaaye gi.
}

//second func
float volumecall(float a , float h){
	//calculation krega aur result return krregaw.
	return (a*a*h)/3.0;
}





