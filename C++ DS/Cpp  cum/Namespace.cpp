#include <iostream>
// Namespace = Provides a solution for preventing name conflicts in large projects. Each entity
// needs a unique name. A namespace allows for identically named entities as long as the 
// namespaces are different.

namespace first {
    int x = 1;
}
namespace second{
    int x = 2;
}

namespace student1{
    bool student = true;
    std::string studentStatus = "Schooling";
    std::string studentGender = "male";
    }

namespace student2{
    bool student = true;
    std::string studentStatus = "Schooling";
    std::string studentGender = "female";
}
int main(){

int x = 0;

std::cout << first::x << '\n';  // 1
std::cout << second::x << '\n'; // 2

using namespace first;

std::cout << x; // 1

using namespace second;

std::cout << x; // 2

using namespace second;

std::cout << first::x << '\n';  // 1

using namespace first;

std::cout << second::x << '\n'; // 2


using namespace std; // removes std to make it easier.
string studentName = "Gerald";

cout << "Hi! " << studentName << '\n'; // Hi! Gerald

//different types of namespace without conflict on std

using std::cout;
using std::string;

string studentNam = "Homer";

cout << "Wassup cuh " << studentNam << '\n'; // Wassup cuh Homer

//example 

using namespace student1;

const char studentGrade = 'A';
const double studentGpa = 9.8;
const string studentNeme = "Gerald";
const int day = 3;
const int age = 14;
const bool student = false;
const string studentStatus = "Graduated";
const string studentGenger = "Unkown";

cout << studentNeme <<'\n';
cout << age << '\n';
cout << day << '\n';
cout << studentGrade << '\n';
cout << studentGpa << '\n';
cout << student1::student << '\n';
cout << student1::studentStatus << '\n';
cout << student2::studentGender << '\n';
/*
Gerald
14
3
A
9.8
1
schooling
female
*/
return 0;
}
