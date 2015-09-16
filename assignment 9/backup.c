#include <stdio.h>
#include <stdlib.h>




typedef struct { /*customer struct*/

char firstName[30];

char lastName[30];

char street[35];

char city[20];

char state[3];

int zip;

char phone[15];

int accountId;

} Customer;

Customer getCustInfo(int a)
{
Customer cust;

printf("\nEnter Data for Customer %d", a); /* prompts user for customer info 10 times */
printf("\nEnter First Last Phone: ");
scanf("%s %s %s", cust.firstName, cust.lastName, cust.phone);
printf("Enter Address (Street City State ZIP): ");
scanf("%s %s %s %d", cust.street, cust.city, cust.state, &cust.zip);

return cust;
}

void printApprovedDB(Customer cust)  /*function that runs when state ID given and matches*/
{
printf("\nData for Customer %d\n", cust.accountId);
printf("Account: %d\n", cust.accountId);
printf("Name: %s %s\n", cust.firstName, cust.lastName);
printf("Addr: %s %s %s %d\n", cust.street, cust.city, cust.state, cust.zip);
printf("Phone: %s\n", cust.phone);

}

int main(void)
{

Customer custNum[10]; // Number of customers
int i;
int ret;

char stateCode[3];

for (i = 0; i < 10; ++i) /* loop for each entered customer*/
{
custNum[i] = getCustInfo(i);
}

printf("Enter 2-character state code: ");
scanf("%s",&stateCode);

for(i=0;i<10;i++){

    ret = strcmp(stateCode, custNum[i].state); /*uses strcmp to check what customers live in the given state code */

    if (ret == 0){
    printApprovedDB(custNum[i]); /*for each customer in the given state, print their info*/
    }

}

return (0);

}
