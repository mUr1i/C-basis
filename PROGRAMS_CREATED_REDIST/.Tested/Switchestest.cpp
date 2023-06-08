#include <iostream>

using std::cout;
using std::cin;

namespace studentGradeLvl{
    std::string studentStatus1 = " Working";
    bool ifStudent1 = false;
}

using text_t = std::string;


int main(){


int studentGradeLvl;
text_t studentName;
bool ifStudent = true;
text_t studentStatus = " Schooling";


cout << "What is the Full student name?: ";
std::getline (cin >> std::ws, studentName);


cout << "What is the student grade level?(7-12): ";
cin >> studentGradeLvl;



switch(studentGradeLvl){
    case 7:
    cout << "Hello " << studentName << " Your in Freshman Year" << '\n';
    break;
    case 8:
    cout << "Hello " << studentName << " Your in Middle School" << '\n';
    break;
    case 9:
    cout << "Hello " << studentName << " Your in Freshmen Year" << '\n';
    break;
    case 10:
cout << "Hello " << studentName << " Your in Sophomore Year" << '\n';
break;
case 11:
cout << "Hello " << studentName << " Your in Senior HighSchool" << '\n';
break;
case 12:
cout << "Hello " << studentName << " Your in Senior High School Diploma" << '\n'; 
break;

default:
cout << "Pls enter the student grade level number from (7-12) thank you" << '\n';
}

cout << ifStudent << studentStatus << '\n';

text_t studentName1;
text_t studentResponse;
text_t studentStatus1;
int studentStatusReg;

cout << "What is Student Full Name?: ";
std::getline (cin, studentName);
cout << "Hello " << studentName << " Welcome back!\n";

cout << "Is the student already registed already (1/0)?: ";
cin >> studentStatusReg;


switch(studentStatusReg){
    case 1:
    cout << "Done you are not A student";
    break;
    case 0:
    cout << "This student is not registered yet";
break;
default:
cout << "This is not a valid character use only (1/0) thank you. ";


}
    return 0;
}