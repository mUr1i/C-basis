#include <iostream>
#include <cstdio>

struct cars
{
    std::string model;
    int year;
    std::string color;
};

struct userInfo
{
    std::string name;
    std::string gender;
    int age;
};

void printCar(cars &car);
void paintCar(cars &car, std::string color);
void userInfoFiles(userInfo &users);
void userInfoChanges(userInfo &users, std::string name);

int main()
{
    
    cars car1;
    cars car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    std::cout << &car1 << '\n';
    printCar(car1);
    printCar(car2);
    

        userInfo user1;
        userInfo user2;

        user1. name = "Alan";
        user1. gender = "Male";
        user1. age = 16;

            user2. name = "Jessica";
            user2. gender = "Female";
            user2. age = 17;

                userInfoChanges(user1, "Claen");
                userInfoChanges(user2, "Alley");

        userInfoFiles(user1);
        userInfoFiles(user2);

    return 0;
}

void printCar(cars &car)
{
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(cars &car, std::string color)
{
    car.color = color;
}
void userInfoFiles(userInfo &users)
{
    std::cout << &users << '\n';
    std::cout << users.name << '\n';
    std::cout << users.gender << '\n';
    std::cout << users.age << '\n';
}
void userInfoChanges(userInfo &users, std::string name)
{
    users. name = name;
}