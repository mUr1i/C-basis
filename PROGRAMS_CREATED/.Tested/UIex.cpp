#include <iostream>

using std::cout;
using std::cin;
using text_t = std::string;



int main(){


text_t studentName;
int studentAge;
double studentGrade = 'A';
double studentGPA = 9.8;
bool studentStatus = true;


cout << "What is your name? ";
std::getline(cin, studentName);

cout << "What is your age? ";
cin >> studentAge;


cout << "Hello " << studentName << " Welcome Back" << '\n';
cout << "Your age is " << studentAge;





    return 0;
}