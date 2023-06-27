#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

main(){


//typedef = reserved keyword used to create an addition name (alias) for another data type.
// New identifier for an existing type Helps with readability and reduces typos.

text_t studentName = "Gerald";
number_t age = 17;
std::cout << studentName << '\n'; // Gerald
std::cout << age << '\n'; // 17
   
   
    return 0;

}