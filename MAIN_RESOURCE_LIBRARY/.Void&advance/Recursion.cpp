#include <iostream>
#include <cstdio>

void walk(int steps);

int factorial(int num);


int main() 
{

    // recursion = a programming technique where a function
    //             invokes itself  from within
    //             break a complex concept into a repeatable single steps

    //  (iterative vs recursive)

    //  advantage = less code and is cleaner
    //              useful for sorting and searching algorithoms

    //  disadvantages = uses more memory
    //                   slower



     walk(5);

    std::cout << factorial(10);
    return 0;
}

void walk(int steps){

    /* Iterative
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step!\n";
    }
    */

    // Recursive
    if(steps > 0){
        std::cout << "You take a step!\n";
            walk(steps - 1);
    }
}
int factorial(int num){

    /* Iterative
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
    */

    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}

