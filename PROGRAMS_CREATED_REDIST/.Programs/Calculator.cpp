#include <iostream>

using std::cout;
using std::cin;


using text_t = std::string;

int main(){

char op;
double num1;
double num2;
double result;


cout << "********* CALCULATOR *********\n";

cout << "Enter either (+ - * /): ";
cin >> op;


cout << "Enter #1: ";
cin >> num1;

cout << "Enter #2: ";
cin >> num2;

switch(op){
case '+':
result = num1 + num2;
cout << "Result: " << result << '\n';
break;
case '-':
result = num1 - num2;
cout << "Result: " << result << '\n';
break;
case '*':
result = num1 * num2;
cout << "Result: " << result << '\n';
break;
case '/':
result = num1 / num2;
cout << "Result: " << result << '\n';
break;
default:
cout << "Not a valid response\n";
break;
}




cout << "***************************";


    return 0;
}