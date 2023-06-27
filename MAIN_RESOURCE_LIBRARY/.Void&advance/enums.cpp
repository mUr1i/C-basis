#include <iostream>
#include <cstdio>

enum Day
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

enum iceCream
{
    VanillaDream = 1,
    MintyFresh = 2,
    ChocolateDelight = 3
};

struct iceCreamInfo
{
    std::string Name;
    std::string Flavor;
};

void IceCreamSelect(std::string IceCream1, std::string IceCream2, std::string IceCream3, iceCream Select, int SelectIceCream);

int main()
{

    // enums = A user-defined data type that consists
    //         of paired named-integer constants.
    //         GREAT if you have a set of potential options.

    Day today = friday;

    switch (today)
    {
    case sunday:
        std::cout << "It is Sunday!\n";
        break;
    case monday:
        std::cout << "It is Monday!\n";
        break;
    case tuesday:
        std::cout << "It is Tuesday!\n";
        break;
    case wednesday:
        std::cout << "It is Wednesday!\n";
        break;
    case thursday:
        std::cout << "It is Thursday!\n";
        break;
    case friday:
        std::cout << "It is Friday!\n";
        break;
    case saturday:
        std::cout << "It is Saturday!\n";
        break;
    }

    std::string iceCreamDisplay[] = {"Vanilla Dream", "Minty Fresh", "Chocolate Delight"};

    std::cout << "****************************************************" << '\n';
    std::cout << "Available ICE CREAM: " << '\n'
              << '\n';

    for (int i = 0; i < sizeof(iceCreamDisplay) / sizeof(iceCreamDisplay[0]); i++)
    {
        std::cout << "[ " << iceCreamDisplay[i] << " ]" << '\n'
                  << '\n';
    }
    std::cout << "****************************************************" << '\n';

    std::string IceCream1;
    std::string IceCream2;
    std::string IceCream3;

    iceCream Select;
    int SelectIceCream;

    IceCreamSelect(IceCream1, IceCream2, IceCream3, Select, SelectIceCream);

    return 0;
}

void IceCreamOne(std::string IceCream1)
{
    iceCreamInfo iceCream1;

    iceCream1.Name = "Vanilla Dream";
    iceCream1.Flavor = "Vanilla";

    std::cout << "Ice Cream: " << iceCream1.Name << '\n';
    std::cout << "Flavor: " << iceCream1.Flavor << '\n';
}
void IceCreamTwo(std::string IceCream2)
{
    iceCreamInfo iceCream2;

    iceCream2.Name = "Minty Fresh";
    iceCream2.Flavor = "Mint";

    std::cout << "Ice Cream: " << iceCream2.Name << '\n';
    std::cout << "Flavor: " << iceCream2.Flavor << '\n';
}
void IceCreamThree(std::string IceCream3)
{
    iceCreamInfo iceCream3;

    iceCream3.Name = "Chocolate Delight";
    iceCream3.Flavor = "Chocolate";

    std::cout << "Ice Cream: " << iceCream3.Name << '\n';
    std::cout << "Flavor: " << iceCream3.Flavor << '\n';
}
void IceCreamSelect(std::string IceCream1, std::string IceCream2, std::string IceCream3, iceCream Select, int SelectIceCream)
{
    std::cout << "Select your ice cream: " << '\n';
    std::cin >> SelectIceCream;

    switch (SelectIceCream)
    {
    case VanillaDream:
        std::cout << "Selected the ice cream: " << '\n'
                  << '\n';
        IceCreamOne(IceCream1);
        break;
    case MintyFresh:
        std::cout << "Selected the ice cream: " << '\n'
                  << '\n';
        IceCreamOne(IceCream2);
        break;
    case ChocolateDelight:
        std::cout << "Selected the ice cream: " << '\n'
                  << '\n';
        IceCreamOne(IceCream3);
        break;
    }
}