#include <iostream>
#include <cstdio>

void userGradeInput();

int main()
{

    // dynamic memory = Memory that is allocated after the program
    //                  is already compiled & running.
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more flexible,
    //                  especially when accepting user input

    int *pNum = NULL;

    pNum = new int;

    *pNum = 17;

    // Display

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete[] pNum;

 
    char *pGrades = NULL;
    int gradeSize;

    std::cout << "How many grades you want? " << '\n';
    std::cin >> gradeSize;

    pGrades = new char[gradeSize];
 
    for (int i = 0; i < gradeSize; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    std::cout << "Result:\n"
              << '\n';

    for (int i = 0; i < gradeSize; i++)
    {
        std::cout << pGrades[i] << " "
                  << " Graded\n"
                  ;
    }

    delete[] pGrades;



    return 0;
}