
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
	
	printf("The Sum of %.0f and %.0f is: %.1f\n",A,B,Sum);
	printf("The Division of %.0f by %.0f is: %.1f\n",A,B,Div);
  	printf("The Multiplication of %.0f by %.0f is: %.1f",A,B,Mult);

	
	return 0;
}
