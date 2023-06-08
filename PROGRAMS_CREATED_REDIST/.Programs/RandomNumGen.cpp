#include <iostream>
#include <ctime>

int main()
{
 // pseudo-random = NOT truly random (but close)
  
  srand(time(NULL));
  
 int num1 = (rand() % 1000) + 1000;
 int num2 = (rand() % 10) + 1;
 int num3 = (rand() % 10) + 1;

   std::cout << num1 << '\n';
   std::cout << num2 << '\n';
   std::cout << num3 << '\n';

  return 0;
}