#include <iostream>

void swapFunc(std::string &x, std::string &y); // PASS BY REFERENCE
// void swapFunc(std::string x, std::string y); // PASS BY VALUE
int main() {

    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::string temp;

        /*
        temp = x;
        x = y;
        y = temp;
        */

    swapFunc(x, y);

        std::cout << "X: " << &x << '\n';
        std::cout << "Y: " << &y << '\n';



    return 0;
}

void swapFunc(std::string &x, std::string &y){
    std::string temp;
        temp = x;
        x = y;
        y = temp;
}