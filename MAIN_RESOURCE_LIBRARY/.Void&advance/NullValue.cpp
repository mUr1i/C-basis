#include <iostream>
#include <cstdio>

int main() {

    // Null value = a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer).

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer

    // When using pointer, be careful that your code ins't 
    // dereferencing nullptr or pointing to free memory
    // this will cause undefined behavior

    int *pointer = nullptr;

        int x= 123;

            pointer = &x;

            if(pointer == nullptr){
                std::cout << "address not assigned!\n";
                
            }
            else{
                std::cout << "address was assigned!\n";
                std::cout << *pointer;
            }




    return 0;
}