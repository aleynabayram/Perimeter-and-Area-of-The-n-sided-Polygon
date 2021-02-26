/*The code calculates the perimeter and area of the n-sided polygon*/

#include<stdio.h>

int main(){
	
	int side;
	float length;
	float perimeter;
	float area;
	double degree;
	double radian;
	double result;
	const double PI = 3.14159265;
	
	printf("How many sides has the polygon whose perimeter and area you want to find:");
	scanf("%d",&side);
	
	printf("\nPlease enter the side length of the polygon:");
	scanf("%f",&length);
	
	if(side<=2){
		printf("A two-dimensional polygon must have at least 3 sides!");
	}
	
	if(side>2){
		
		degree=180/side;
		radian = degree * PI/180;
		result =tan(radian);
				
		perimeter= side*length;
		area=(side*length*length/4)*1/result;
		
		printf("The perimeter of the polyhon:%.2f\n",perimeter);
		printf("The area of the polygon: %.2f\n",area);
		
	}

	return 0;
}

