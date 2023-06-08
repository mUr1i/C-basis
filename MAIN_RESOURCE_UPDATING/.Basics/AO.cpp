#include <iostream>

namespace studentNum1{
std::string studentClass = "This classroom has a total of ";
int studentNum = 36; 
}

namespace studentExam1{
    int studentExam = 6 - (5 + 4) * 3 / 2; // -7
}

using text_t = std::string;
using std::cout;

int main(){

// arithmetic operators = return the result of a specific
// arithemtic operation (+ - * /)

//parenthesis 
//multiplication & division
//addition & subtraction

//example of this operation

int studentExam = 6 - 5 + 4 * 3 / 2; // 7
//simplify
// int studentExam = 1 + 6

int studentNum = 25;
 text_t studentClass =  "This classroom has ";


// Addition

// student = student + 1; // 21
// student+=1; 
// student++;

// Subtraction

// student = student -1; // 19
// student-=2; // 18
// student--; // only extract 1 result. 19

//Multiplication

// studentNum = studentNum * 2; // 40
// studentNum*=2;

// Division

// studentNum  = studentNum  / 2; // 10
// studentNum/= 2; 


cout << studentClass << studentNum << '\n'; 
// This classroom has 20
cout << studentNum1::studentClass << studentNum1::studentNum << '\n'; 
// This Classroom has a total of 36


int remainder = studentNum % 2; // 2
// if 1 displays then odd num else 0 then even num


cout << remainder << '\n';
cout << studentExam << '\n';
cout << studentExam1::studentExam << '\n';

    return 0;
}