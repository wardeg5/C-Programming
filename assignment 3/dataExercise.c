#include <stdio.h>
#include <math.h>

int main(void) {
	char a;
	char b;

	double i;
	int userInt;
	float userFloat;

	a = 'a';
	/*declared variables*/

	printf("Program: dataExercise.c \n");
	printf("Author: Warren Degenhardt \n");
	printf("%c \n" , a);
	printf("%d \n", a);
	i =  (1.0 / 0) ;
	printf("%lf \n", i);
	/* Displays Infinity*/

	printf("Enter char int char float: ");
	scanf("%c %d %c %f", &a, &userInt, &b, &userFloat);
	printf(" You entered: '%c' %d '%c' %.3f \n", a, userInt, b, userFloat);
	getchar();
	/* Prompts the user and accept the following 4 types of values from a single input line: char int char float
	Displays the values that were read  */
	printf("Enter char float int char: ");
	scanf("%c %f %d %c", &a, &userFloat, &userInt, &b);
	printf("You entered: '%c' %.3f %d '%c' \n", a, userFloat, userInt, b);
	getchar();
	/*Prompts the user and accept the following types of values from a single input line: char float int char
	Displays the values   */
	printf("Enter an integer value:");
	scanf("%d", &userInt);
	printf("You entered: %015d \n", userInt);
	getchar();
	/* Prompt the user and accept an integer value
	Displays the value read in a right-justified field of width 15, with leading zeroes */

	printf("Enter an float value:");
	scanf("%f", &userFloat);
	printf("You entered: %15.2f \n", userFloat);
	getchar();
	/* Prompt the user and accept a float value. Displays the value read in a right-justified field of width 15, with 2 decimal points of precision, and leading spaces */



	return (0);

}
