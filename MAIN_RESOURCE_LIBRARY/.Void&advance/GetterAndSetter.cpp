#include <iostream>
#include <cstdio>

class stove
{
private:
    int temperature = 0;

public:

    // getter

    int getTemperature()
    {
        return temperature;
    }

    // setter

    stove(int temeperature)
    {
        setTemperature(temperature);
    }

    void setTemperature(int temperature)
    {
        if (temperature < 0)
        {
            this->temperature = 0;
        }
        else if (temperature >= 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};

class cat
{

private:

std::string condition = "good";

public:
    std::string breed;
    int age;

    cat(std::string breed, int age)
    {
        this->breed = breed;
        this->age = age;
    }

    cat()
    {
    }
    void eat()
    {
        std::cout << "The cat is eating\n";
    }
    void sleep()
    {
        std::cout << "The cat is sleeping\n";
    }
    void run()
    {
        std::cout << "The cat is running\n";
    }
};

int main()
{

    // Abstraction = hiding unnecessary data from outside a class
    // Getter = function that makes a private attribute READABLE
    // Setter = function that makes a private attribute WRITEABLE

    
    stove stoveObj(0);

    stoveObj.setTemperature(3);

    std::cout << "The temperature setting is: " <<  stoveObj.getTemperature() << "*";
    


    /*
    cat cat1("Aegean", 6);
    cat cat2("Birman", 4);
    cat cat3;

    std::cout << "Cats available:\n" << '\n'; 

    std::cout << "Breed: " << cat1.breed << '\n'
              << "Age: " << cat1.age << '\n' << '\n';

    std::cout << "Breed: " << cat2.breed << '\n'
              << "Age: " << cat2.age << '\n' << std::endl;

    std::cout << "Statuses:\n" << '\n';

    if (cat2.age <= 5 || cat2.age <= 0)
    {
        std::cout << cat2.breed << " ";
        cat2.sleep();
    }
    else{
        std::cout << cat2.breed << " ";
        cat2.eat();
    }
    if(cat1.age >= 5 || cat1.age >= 0)
    {
        std::cout << cat1.breed << " ";
        cat1.eat();
    }
    */

    return 0;
}