#include <iostream>

using std::cout;

int main()
{
   //break = break out of a loop
   //continue = skip current iteration

  for(int i = 1; i <= 20; i++){
    if(i == 13){
    break; // stops at 13
   }
   cout << i << '\n';
  }

  for(int i = 1; i <= 20; i++){
    if(i == 13){
    continue; //doesn't include 13 when counting from 1 to 20
   }
   cout << i << '\n';
  }


    return 0;
}