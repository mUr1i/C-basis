#include <iostream>

void sort(int array[], int size);
int main(){

    // Sort in a array

    int array[] = {9, 5, 8, 2, 10, 1, 4, 3, 6, 7};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array){
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){

    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){ // change '>' from '<' if you want descending order to sort
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }


}