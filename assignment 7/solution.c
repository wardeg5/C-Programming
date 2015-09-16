/*Warren Degenhardt*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char firstString[254], secondString[254], combinedStr [254]; /*first input, second input, combined input*/
    int firstStringLength, secondStringLength;
    char currentChar, currentChar2;
    int i = 0, totLtrs = 0;
    double percentage = 0.00;
printf("Program: String Processing\nAuthor: Warren Degenhardt"); /*header*/

    printf("\nEnter string 1:");
    fgets(firstString,254,stdin); /*uses fget for input 1*/
    printf("Enter string 2:");
    fgets(secondString,254, stdin); /*fget input 2*/
    firstStringLength = (strlen (firstString));
    secondStringLength = (strlen (secondString)); /*string lengths*/
    firstString[firstStringLength - 1] = '\0'; /*string termination*/
    secondString[secondStringLength - 1] = '\0';
    firstStringLength = firstStringLength - 1; /*eliminate extra character */
    secondStringLength = secondStringLength - 1;
    printf("String 1 is %d characters long, and String 2 is %d characters long \n", firstStringLength, secondStringLength);
    firstStringLength = firstStringLength + 1; /*...add it back in, or else errors */
    secondStringLength = secondStringLength + 1;
    strncpy(combinedStr, firstString, (firstStringLength) / 2);
    combinedStr[firstStringLength / 2] = '\0'; /*split our strings for concatination*/
    strcat(combinedStr, secondString + (secondStringLength-1) / 2);
    printf("First half of string 1 and Second half of string 2 is: \"%s\"\n", combinedStr); /*print our final combined string*/
    return 0;
}
