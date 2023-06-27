#include <iostream>
#include <cstdio>

int main()
{
    std::string userGitName;
    std::string userChoice;
    std::string userGitNameDefault = "Anonymous";

    char userGitNameExit;

    std::cout << "Enter your Github username\n"
              << "If not press enter to continue.\n"
              << '\n';
    std::cout << "User choice: ";
    std::getline(std::cin, userGitName);

    while (userGitName.length() > 32)
    {
        std::cout << "Error; Invalid Github username.\n"
                  << '\n';
        std::cout << "Enter your Github username: ";
        getline(std::cin, userGitName);
    }
    while (userGitName.empty())
    {
        userGitName = userGitNameDefault;
        break;
    }

    std::cout << "Hello! " << userGitName << " welcome to Git status tracker." << '\n'
              << '\n';

    return 0;
}