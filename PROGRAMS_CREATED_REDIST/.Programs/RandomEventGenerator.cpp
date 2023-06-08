#include <iostream>
#include <ctime>


int main()
{

 srand(time(0));

 int randNum = rand() % 5+1;

 switch(randNum){
    case 1:
    std::cout << "You won a cum jar!";
    break;
    case 2:
    std::cout << "You won a battlepass!";
    break;
    case 3:
    std::cout << "You won a prime membership!";
    break;
    case 4:
    std::cout << "You won a body pillow!";
    break;
    case 5:
    std::cout << "You won a free hyperx keyboard!";
    break;
 }



  return 0;
}