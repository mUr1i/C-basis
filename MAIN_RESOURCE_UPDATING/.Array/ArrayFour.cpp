#include <iostream>

// int searchArray(int array[], int size, int element);
int searchArray(std::string array[], int size, std::string element);

int main() {

        // Search an array for an element
    /*
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(num)/sizeof(num[0]);
    int index;
    int myNum; // the number we are looking for

        std::cout << "Enter element to search for: " << '\n';
        std::cin >> myNum;

        index = searchArray(num, size, myNum);

        if(index != -1){
            std::cout << myNum << " is at index " << index;
        }
        else{
            std::cout << myNum << " is not in the array";
        }
    */

    std::string foods[] = {"banana", "apple", "grapes"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;

        std::cout << "Enter element to search for: " << '\n';
        std::getline(std::cin, myFood);

        index = searchArray(foods, size, myFood);

        if(index != -1){
            std::cout << myFood << " is at index " << index;
        }
        else{
            std::cout << myFood << " is not in the array";
        }
    return 0;
}

int searchArray(std::string array[], int size, std::string element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        } // linear search
    }
    return -1; // serves if something is not found
}

/*  
}
int searchArray(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1; // serves if something is not found
}
*/