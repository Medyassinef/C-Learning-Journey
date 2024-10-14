
#include <stdio.h>

int main (){
	
	float A,B;
	float Sum,Div,Mult;
	
	printf("Enter the first number : \n");
	scanf("%f",&A);
	
	printf("Enter the second number : \n");
	scanf("%f",&B);
	
	Sum = A + B;
	Div = A / B;
  	Mult = A * B;
	
	printf("The Sum of %f and %f is: %f",A,B,Sum);
	printf("The Division of %f by %f is:",A,B,Div);
  	printf("The Multiplication of %f by %f is: %f",A,B,Mult);

	
	return 0;
}
