#include <iostream>

using std::cout;
using std::cin;
using text_t = std::string;



int main(){

// cout << (insertion operator)
// cin >> (extraction operator)

text_t studentName;
int age;

cout << "Age of student: ";
cin >> age;

cout << "Full name of student: ";
std::getline(std::cin >> std::ws, studentName);


cout << "Hello " << studentName << " How may I help you today?" << '\n';


cout << "Welcome back " << studentName << '\n';
cout << "You are " << age <<   " years old";

// result

/*G
Name of student: Gerald
Welcome back Gerald
Age of student: 17
You are 17 years old
*/



return 0;
}