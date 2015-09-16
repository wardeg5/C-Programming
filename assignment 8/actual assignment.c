#include <stdio.h>

int mult (int milesPerGallon, int lowPerGallon, int highPerGallon, int milesTraveled, int lowCost, int highCost, gallonsPurchased);

int main()
{
  int milesPerGallon;
  int lowPerGallon;
  int highPerGallon;
  int milesTraveled;
  int lowCost;
  int highCost;
  
  printf( "Welcome to the Trip Planner!\nSo you are ready to take a trip? Let me help you plan for\nyour fuels costs and required stops to fill up your tank.\n");
printf("============================================================\nPlease provide answers to the prompts below and I will\ndisplay a summary for you when I have computed the results.\n============================================================\n" );
  
 
    printf("Please input your car's average miles per gallon (enter 0 to quit) >>");
     scanf( "%d", &milesPerGallon );
   printf("Please tell me the range of fuel costs you expect to pay (per gallon).");
    printf("The lowest per gallon cost of fuel is >>");
     scanf( "%d", &lowPerGallon );
     printf("The highest per gallon cost of fuel is >>");
       scanf( "%d", &highPerGallon );
     printf("Please tell me how many miles you plan to travel >>");
 scanf( "%d", &milesTraveled );
  getchar(); 
  printf("===============   Trip Summary   ==================\n");
  printf("You will need to purchase %d gallons of fuel.\n", mult(gallonsPurchased));
  printf("The approximate cost of fuel for your trip is between $%d and $%d.\n", mult(lowCost, highCost));
  printf("===============   End Trip Summary   ==================");
}

int mult (int x, int y)
{
  return x * y;
}
