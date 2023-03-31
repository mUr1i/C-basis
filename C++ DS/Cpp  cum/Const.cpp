#include <iostream>

int main () {
//The const keyword  specifies that a variable's value is constant
// tells the compiler to prevent anything from modfying it
// (read-only)

double pi = 3.13159; 
double raidus = 10;
double circumference = 2 * pi * raidus;  

std::cout << circumference << "cm" << '\n'; // 62.6318cm

//use const change word  to CAP

const double PI = 3.14159;
const int LIGHT_SPEED = 879043;
const int WIDTH = 1920;
const int HEIGHT = 1080;


// example 

const int studentLRN = 1776859403;
const double studentGPA = 9.8;
const bool student = true;
const char studentGrade = 'A';
const std::string studentName = "Gerald";

//studentInfo
std::cout << "Hellow ICPSIAN " << studentName << '\n';
std::cout << studentLRN << '\n';
std::cout << studentGPA << '\n';
std::cout << studentGrade << '\n',
std::cout << student << '\n';

//result

/*
Hellow ICPSIAN Gerald
1776859403
9.8
A
1 = true 
*/
    return 0;
}