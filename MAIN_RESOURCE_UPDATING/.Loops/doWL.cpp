#include <iostream>

 using std::cout;
 using std::cin;


int main()
{
 // do while loop = do someblock of code first,
 //                 Then repeat again if condition is true
    
  int num;

  


do{
   cout << "Enter a positive #: ";
   cin >> num;
}  while(num < 0);


   cout << "The number is: " << num;

    return 0;
}