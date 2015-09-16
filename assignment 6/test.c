#include <stdio.h>
#include <stdlib.h>

int main (void) {
	char ch;
	int i; /* used in the count_table array for each iteration in the for loop */
	int count_table[128]= {0}; /* Array keeps frequency of the the characters 
	entered that matches each character's numerical ASCII code. */
	int len = 0; /* counts each character */
/*declare variables*/


	for (i = 0; i < 127; ++i ) {
		count_table[i] = 0;
	}
printf("Program: Array \nAuthor: Warren Degenhardt\n\n");
	printf("Enter string 1: ");
	ch = getchar();
	while (ch != '\n')/*reads input */ {
		len++;  /* +1 to character counter */
		count_table[ch]++; /*increments array */
		ch = getchar();

	}
	printf("\n  FREQUENCY TABLE\n");
	printf("---------------------------\n");
	printf("  Char   Count %% of Total\n");
	printf("  ----   ----- ----------\n");
/*prints table header*/

	printf("  ALL       %d      100.00 \n", len);
/* prints first line of table */
	for(i = 0; i < 127; i++) {

		if( count_table[i] > 0) {

			printf("  \"%c\"        %d      %.2f   \n", i, count_table[i], (float)count_table[i]/len*100);
/* here we print the individual table values in a for loop: character, count, and percentage of total string*/

		}

	}


	exit(0);
}

