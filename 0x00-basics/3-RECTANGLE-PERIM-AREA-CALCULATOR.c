#include <stdio.h>

int main (){
	
	float length,width;
	float area,perimeter;
	
	printf("Enter the length of your rectangle: \n");
	scanf("%f",&length);
	
	printf("Enter the width of your rectangle: \n");
	scanf("%f",&width);
	
	perimeter = (length + width)*2;
	area = length * width;
	
	printf("The permiter of your rectangle is: %.1f\n",perimeter);
	printf("And the area is: %.1f\n",area);

	
	return 0;
}
