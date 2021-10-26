#include<stdio.h>
#include<conio.h>


int main () {
	float height_in_feet, height_in_cm, height_in_inch;
	printf("enter in your height in feet\n");
	scanf("%f", &height_in_feet);
	height_in_inch = height_in_feet * 12;
	height_in_cm =  height_in_inch * 2.54;
	printf("%.2f feet is equal to %.2f inches or %.2f centimeters",height_in_feet, height_in_inch, height_in_cm);
	
	
	return 0;
	 	
}
