#include <stdio.h>
#include <stdlib.h>

#define SIZE 2 // initially to test kept it to SIZE 2



typedef struct {

char firstName[30];

char lastName[30];

char street[35];

char city[20];

char state[3];

int zip;

char phone[15];

int accountId;

} Customer;

Customer getCustInfo(int a )
{
Customer cust;
char firstName2[30];
printf(" Enter Data for Customer %d\n", a);
printf("Enter First Last Phone: ");
scanf("%s %s %s", cust.firstName, cust.lastName, cust.phone);
printf("Enter Address (Street City State ZIP): \n");
scanf("%s %s %s %d", cust.street, cust.city, cust.state, &cust.zip);
cust.accountId = a + 1;
return cust;
}

void printCustDB(Customer cust)
{
printf("Data for Customer %d\n", cust.accountId);
printf(" First Last Phone: %s %s %s \n", cust.firstName, cust.lastName, cust.phone);
printf(" Address (Street City State ZIP): %s %s %s %d\n", cust.street, cust.city, cust.state, cust.zip);
}

int main(void)
{

Customer custDB[SIZE]; // an array of Customer type of size SIZE
int i;
int ret;
char str1[3];
char str2[3];
char stateCode[3];

for (i = 0; i < SIZE; ++i)
{
custDB[i] = getCustInfo(i);
}

printf("Enter 2-character state code: ");
scanf("%s",&stateCode);

for(i=0;i<SIZE;i++){

    ret = strcmp(stateCode, custDB[i].state);

    if (ret == 0){
    printCustDB(custDB[i]);
    }

}

return (0);

}
