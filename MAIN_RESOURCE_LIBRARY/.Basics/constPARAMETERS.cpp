#include <iostream>

void printUserInfo(const std::string name, const int age);

int main() {

    // const parameter =    parameter that is effectively read-only
    //                      code is more secure & conveys intent
    //                      useful for references and pointers

        std::string name = "Nomad";
        int age = 21;

        printUserInfo(name, age);



    return 0;
}

void printUserInfo(const std::string name, const int age){
    /* can't change the variables
    name = " ";
    age = 0;
    */

    std::cout << name << " " <<  age << '\n';
  
}