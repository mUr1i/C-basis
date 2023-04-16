#include <iostream>

void happyBirthday(std::string name, int age);
// void happyBirhday1(std::string birthdayBoi);

int main()
{
   // function = a block of reusable code

   std::string name = "Joshua";
   int age = 21;
   
   happyBirthday(name, age);

   return 0;
}

void happyBirthday(std::string name, int age)
{
std::cout << "Happy Birthday to " << name << "!\n";
std::cout << "Happy Birthday to " << name << "!\n";
std::cout << "Happy Birthday dear " << name << "!\n";
std::cout << "Happy Birthday to " << name << "!\n";
std::cout << "You are now " << age << "!\n";
}

/*
void happyBirthday1(std::string birthdayBoi)
{
std::cout << "Happy Birthday to " << birthdayBoi << "!\n";
std::cout << "Happy Birthday to " << birthdayBoi << "!\n";
std::cout << "Happy Birthday dear " << birthdayBoi << "!\n";
std::cout << "Happy Birthday to " << birthdayBoi << "!\n ";
}
*/
