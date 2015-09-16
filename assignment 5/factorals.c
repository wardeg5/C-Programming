
/*Warren Degenhardt */
/*The assignment is to create a program to display the number of combinations where n and k are entered by the user.  */

#include <stdio.h>
#include <stdlib.h>

int main() {


	int input;
	int choose;
	int subtract;

	do {
		/*   Ask for n. Check for bounds (1 <= n && n <= 10).*/
		printf("Enter the number of items in the list (n): \n");
		scanf("%d",&input);

		if ( input < 1 ) {
			/*  Reject any input greater than 10 or less than 1 by displaying an error message and then asking the user to re-enter the input. */
			printf ("?Invalid input: Number must be between 1 and 10 \n" );
		} else if ( input > 10 ) {
			printf( "?Invalid input: Number must be between 1 and 10 \n" );
		} else {
			getchar();
		}

	} while (! (1 <= input && input <= 10));

	do {

		printf("Enter the number of items to choose (k): \n");
		scanf("%d",&choose);
		/*   Ask for k. Check for bounds (1 <= k && k <= n).*/
		if ( choose < 1 ) {
			/*   Reject any input greater than n or less than 1 by displaying an error message and then asking the user to re-enter the input. Do this as many times that they enter incorrect input. */
			printf ("?Invalid input: Number must be between 1 and %d \n", input);
		} else if ( choose > input ) {
			printf( "?Invalid input: Number must be between 1 and %d \n", input);
		} else {
			getchar();
		}

	} while (! (1 <= choose && choose <= input));
	/*    Calculate n – k. */
	subtract = (input - choose);


	int c, fact = 1;
	for (c = 1; c <= input; c++)
		fact = fact * c;
	/*Calculate factorial of n, k and n – k.*/



	int factChoose = 1;
	for (c = 1; c <= choose; c++)
		factChoose = factChoose * c;


	int factSubtract = 1;
	for (c = 1; c <= subtract; c++)
		factSubtract = factSubtract * c;


	/*  Calculate the Combination by plugging in  factorial of n / (factorial of k * factorial of n - k) */
	int combination;
	combination = ( fact / (factChoose * factSubtract));
	printf("Number of combinations: %d \n", combination);  /*   Print the number of combinations of n things taken k at a time. */
	return 0;




}
