#include <iostream>

using text_t = std::string;
using std::cout;

namespace studentScore1{
 const int correction = 20;
 const int questions = 20;

double score = correction/(char)questions * 100;




}
    


int main(){

//type conversion = convertion a vaue  of  one data type to another
//  Implicit = automaticl
//   Explicit = Precede value with new  data type example. (int)

double x = (int) 3.14; // 3

cout << x << '\n';

char studentScore = 100;  

cout <<  studentScore << '\n'; // d Implicit
cout << (char) 100 << '\n'; // d Explicit

int correction = 10;
int questions = 20;

double score = correction/(double)questions * 100; // 50%

cout << studentScore1::score << '%';



return 0;
}