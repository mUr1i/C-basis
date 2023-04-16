#include <iostream>

using std::cout;
using std::cin;


int main(){

// ternary operator ?: = replacement to an if/else statement
// condition ? expression 1: expression2;

int grade = 75;
//(grade >= 60) ? cout << "You pass!" : cout << "You fail!";
cout << ((grade >= 60) ? "You pass!" : "You fail!") << '\n';

int num = 9;
//num % 2 ? cout << "OBB" : cout << "EVEN";
cout << (num % 2 ? "ODD" : "EVEN") << '\n';


bool hungry = true;

//hungry ? cout << "You are hungry " : cout << "Yuu are full";
cout << (hungry ? "You are hungry\n" : "You are full\n");



    return 0;
}