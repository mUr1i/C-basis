#include <iostream>
#include <cstdio>

class pizza
{
public:
    std::string topping1;
    std::string topping2;

    pizza()
    {
    }

    pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }
    pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

class planeDrone
{

public:
    std::string model;
    std::string type;
    bool friendly;

    void fly()
    {
        std::cout << "The drone is flying\n";
    }

    void fire()
    {
        std::cout << "The drone is busy\n";
    }

    void destruct()
    {
        std::cout << "The drone destructed!\n";
    }

    planeDrone(std::string model, std::string type, int friendly)
    {
        this->model = model;
        this->type = type;
        this->friendly = friendly;
    }
};

int main()
{

    // overloaded constructors = multiple constructors w/ same name but different parameters
    //                           allows for varying arguments when instantiating an object.

    pizza pizza1("pepperoni");
    pizza pizza2("mushrooms", "peppers");
    pizza pizza3;

    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    planeDrone drone1("Hubsan Zino", "Nano Drones", false);
    planeDrone drone2("Parrot Anafi", "Autonomous Drones", true);

    std::cout << drone1.model << '\n'
              << drone1.type << '\n'
              << drone1.friendly << '\n';

    std::cout << drone2.model << '\n'
              << drone2.type << '\n'
              << drone2.friendly << '\n';

    if (drone2.friendly != true)
    {
        drone2.fly();
    }
    else{
        drone2. destruct();
    }

    if (drone1.friendly == false)
    {
        drone2.fire();
    }

    else if (drone1.friendly != false)
    {
        drone1.destruct();
    }

    return 0;
}
