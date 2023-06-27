#include <iostream>

using text_t = std::string;
using std::cout;
using std::cin;



int main(){

// if statements = do something if a condition is true.
// if not, then don't do it.

int age;

cout << "Enter your age: ";
cin >> age;
if(age >= 100){
    cout << "Man you dead";
}
else if(age >= 18){
cout << "Welcome to c++ nerd";
}
else if(age < 0){
cout << "Run.";
}
else{
    cout << "Pls run before it catches you...";
}


}