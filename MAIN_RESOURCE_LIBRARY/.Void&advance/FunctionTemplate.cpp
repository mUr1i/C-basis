#include <iostream>
#include <cstdio>


template <typename T, typename U>

auto max(T x, U y){
    return (x > y) ? x : y;
}

template <typename A, typename B>

auto userProfile(A userAge, B userName){
    return userAge;
}



int main() 
{

    // function template = describes what a function looks like.
    //                     Can be used to generate as many overloaded functions
    //                     as needed, each using different data types.

     std::cout << max(1, 2.1) << '\n';


    std::cout << userProfile(15, "Joshua") << '\n';

    return 0;
}
