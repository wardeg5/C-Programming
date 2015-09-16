#include <stdio.h>

int add ( int x, int y, int a);

int main()
{
  int x;
  int y;
  int a;

  printf( "Please input three numbers to be added: " );
  scanf( "%d", &x );
  scanf( "%d", &y );
  scanf( "%d",  &a);
  printf( "The sum of your three numbers is %d\n", add( x, y, a) );
WelcomeMessage();
  getchar();
}

int add (int x, int y, int a)
{
  return x + y + a;

}

    int WelcomeMessage()
    {
        printf( "sup nigga");
    }
