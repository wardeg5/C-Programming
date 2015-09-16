#include <stdio.h>
#include <math.h>

int main(void) {
	/*Declare variables*/
	unsigned short int userInt;
	float userCircumference;
	float userArea;
	float userPolynomial;
	float userAnswer;
	float firstPoly;
	float secondPoly;
	float thirdPoly;
	int dividend, divisor;
	printf("Program: Arithmetic Expressions: \n" "Author: Warren Degenhardt \n");
	/*Prompt for and accept an unsigned short int  */
	printf("Enter unsigned short int: \n");
	scanf("%d", &userInt);
	/*Display 2 raised to the power of input value  */
	printf("Value of 2 raised to the %d power is %.2lf \n", userInt, pow(2, userInt));
	getchar();
	/*Prompt for unsigned short int as radius of circle  */
	printf("Enter unsigned short int: \n");
	scanf("%d", &userInt);
	userCircumference = (2*3.14159265358979323846*userInt);
	userArea = (3.14159265358979323846*userInt*userInt);
	/*Displays circle circumference and area  */
	printf("A circle with radius %d has circumference of %.3f and an area of %.3f \n", userInt, userCircumference , userArea);
	getchar();
	/*prompt for a float value for use in polynomial as x where 2x3 + 3x2 + 4x + 5  */
	printf("Enter a float value: \n");
	scanf("%f", &userPolynomial);
	firstPoly = 2 * pow(userPolynomial, 3);
	secondPoly = 3 * pow(userPolynomial, 2);
	userAnswer = (firstPoly + secondPoly + 4 * userPolynomial + 5);
	/*Solves Polynomial*/
	printf("The value of 2(%.2f)**3 + 3(%.2f)**2 + 4(%.2f) + 5 = %.2f \n", userPolynomial, userPolynomial, userPolynomial, userAnswer);
	getchar();
	printf("Enter two integers:\n");
	/*Prompts for two integers and displays remainder in one operation*/
	scanf("%d %d",&dividend,&divisor);
	printf("The remainder of %d / %d = %d", dividend, divisor, dividend%divisor); /* Computes and displays remainder */
	return (0);

}
