#include <iostream>
#include <cstdio>

int main(){

    // sizeof() = determines the size in bytes of a:
    //            variable,, data type,, class, objects, etc.
        std::string username = "Nomad";
        double gpa = 2.5;
        char points = 'S';
        bool userRegist = false;
        char userpoints[] = {'S', 'A', 'B', 'C', 'F'};
        std::string userNameRegist[] = {"Nomad", "Bensy" , "Loop"};

            std::cout << sizeof(double) << " bytes\n";
                // 8 bytes

            std::cout << sizeof(std::string) << " bytes\n";
                // 32 bytes

            std::cout << sizeof(char) << " bytes\n";
                // 1 bytes

            std::cout << sizeof(bool) << " bytes\n";
                // 1 bytes

            std::cout << sizeof(userpoints) << " bytes\n";
                // 5 bytes

                    std::cout << sizeof(userpoints)/sizeof(char) << " elements\n";
                        // 5 elements 
                        // can add more at array

                    std::cout << sizeof(userNameRegist)/sizeof(std::string) << " elements\n";
                        // 3 elements
                        // can add more at array
                        
    return 0;
}