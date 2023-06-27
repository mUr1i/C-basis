#include <iostream>
#include <cstdio>

class student{

    public:

        std::string name;
        int age;
        double gpa;

    student(std::string name, int age, double gpa){

        this->name = name;
        this->age = age;
        this->gpa = gpa;

        /*
        student(std::string x, int y, double z)
        name = x;
        age = y
        gpa = z;
        
        */
    }
};

class car{

    public:

    std::string make;
    std::string model;
    int year;
    std::string color;

    car(std::string make, std::string model, int year, std::string color){

        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }

};

int main()
{

    // constructor = special method that is automatically called 
    //               when an object is instantiated.
    //               useful for assigning values to attributes as arguments.

    student student1("Wally", 19, 3.2);
    student student2("Glean", 23, 1.5);
    student student3("Ken", 26, 2.6);

    std::cout << student1. name << '\n';
    std::cout << student1. age << '\n';
    std::cout << student1. gpa << '\n';

    std::cout << student2. name << '\n';
    std::cout << student2. age << '\n';
    std::cout << student2. gpa << '\n';

    std::cout << student3. name << '\n';
    std::cout << student3. age << '\n';
    std::cout << student3. gpa << '\n';

            car car1("chevy", "Corvette", 2022, "blue");

            std::cout << car1. make << '\n';
            std::cout << car1. model << '\n';
            std::cout << car1. year << '\n';
            std::cout << car1. color << '\n';

    

    return 0;
}