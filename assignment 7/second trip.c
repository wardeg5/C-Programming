#include <stdio.h>
#include <string.h>




   /* FUNCTIONS */

void WelcomeMessage(){
printf( "Welcome to the Trip Planner!\nSo you are ready to take a trip? Let me help you plan for\nyour fuels costs and required stops to fill up your tank.\n");
printf("============================================================\nPlease provide answers to the prompts below and I will\ndisplay a summary for you when I have computed the results.\n============================================================\n" );
    }
void AskUserForInput(float milesPerGallon, float lowPerGallon, float highPerGallon, float milesTraveled, float gallonsPurchased, float lowCost, float highCost) {
printf("Please input your car's average miles per gallon (enter 0 to quit) >>");
scanf( "%f", &milesPerGallon );
if ( milesPerGallon == 0){
    printf( "Thank you, please drive safely and have a nice trip!" );
    return 0;
}
else{
 printf("Please tell me the range of fuel costs you expect to pay (per gallon).\n");
 printf("The lowest per gallon cost of fuel is >>");
scanf("%f", &lowPerGallon );
printf("The highest per gallon cost of fuel is >>");
scanf( "%f", &highPerGallon );
  printf("Please tell me how many miles you plan to travel >>");
 scanf( "%f", &milesTraveled );
   getchar();

   gallonsPurchased = milesTraveled/milesPerGallon;
lowCost = lowPerGallon * gallonsPurchased;
highCost = highPerGallon * gallonsPurchased;
  printf("===============   Trip Summary   ==================\n");
  printf("You will need to purchase %.2f gallons of fuel.\n", gallonsPurchased);
  printf("The approximate cost of fuel for your trip is between $%.2f and $%.2f.\n", lowCost, highCost);
  printf("===============   End Trip Summary   ==================\n");
  AskUserForInput(milesPerGallon, lowPerGallon, highPerGallon, milesTraveled, gallonsPurchased, lowCost, highCost);
} /*recursion*/
}


    /* MAIN */
     int main(void) {
        /* Call the functions */
        float milesPerGallon, lowPerGallon, highPerGallon, milesTraveled, gallonsPurchased, lowCost, highCost;
    WelcomeMessage();
    AskUserForInput(milesPerGallon, lowPerGallon, highPerGallon, milesTraveled, gallonsPurchased, lowCost, highCost);
	return(0);
}

