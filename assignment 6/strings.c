#include <stdio.h>
#include <string.h>

int main () {
	char str1[254];
	char str2[254];
	int len;
	int len2;
	printf("Enter string 1: \n");
	scanf("%s", &str1);
	len = strlen(str1);
	getchar();

	
	printf("Enter string 2: \n");
	scanf("%s", &str2);
	len2 = strlen(str2);
	getchar();
	/* strncpy(str1, "This is tutorialspoint.com"); */




	printf("String 1 is %d characters long, and String 2 is %d characters long\n", len, len2);

	return(0);
}
