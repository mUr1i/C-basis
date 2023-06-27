#include <iostream>

    int main() {

    // memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

        std::string name = "Bro";
        int age = 21;
        bool student = true;

            std::cout << &name << '\n';
            std::cout << &age << '\n';
            std::cout << &student << '\n';

                // hexidecimals to decimals 
                // 79661ff700 = 521404413696 // Array
                // 79661ff6fc = 521404413692 // Int
                // 79661ff6fb = 521404413691 // bool

        return 0;
    }