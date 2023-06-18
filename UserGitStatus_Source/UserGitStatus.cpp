#include <iostream>
#include <cstdio>
#include <algorithm>

int userGitSelected(std::string gitdisplay[], int size, std::string gitelement);

std::string str_tolower(std::string s)
{
    auto lower = [](unsigned char c)
    { return std::tolower(c); };
    std::transform(s.begin(), s.end(),
                   s.begin(), lower);
    return s;
}

int main()
{

    //  GIT USER CONFIG

    std::cout << "******************* GITHUB REPOSITORY USER TRACKER *******************" << '\n'
              << '\n';

    std::string userGitStatus[][3] = {{"Starred", "Viewed", "Shared"},
                                      {"Supports the repository", "Viewed the repository", "Shared the repository"}};

    int userGitRows = sizeof(userGitStatus) / sizeof(userGitStatus[0]);
    int userGitColumn = sizeof(userGitStatus[0]) / sizeof(userGitStatus[0][0]);
    int index;

    for (int i = 0; i < userGitRows; i++)
    {
        std::cout << "GIT STATUS & DESCRIPTION" << '\n';
        for (int j = 0; j < userGitColumn; j++)
        {
            std::cout << "* " << userGitStatus[i][j] << " " << '\n';
        }
        std::cout << '\n';
    }

    std::cout << "**********************************************************************" << '\n'
              << '\n';

    // GITHUB USERNAME CONFIG

    std::string userGitName;
    std::string userChoice;
    std::string userGitNameDefault = "Anonymous";
    std::string y("y");
    std::string n("n");
    std::string userGitChoice;

    char userGitNameExit;
    char userChoiceYorN;

    do
    {
        do
        {

            std::cout << "**********************************************************************" << '\n'
                      << '\n';

            std::cout << "Enter your Github username\n"
                      << "If not press enter to continue.\n"
                      << '\n';
            std::cout << "Enter name: " << '\n';
            std::getline(std::cin, userGitName);

            while (userGitName.length() > 32)
            {
                std::cout << "Error; Invalid Github username.\n"
                          << '\n';
                std::cout << "Enter your Github username: ";
                getline(std::cin, userGitName);
            }
            if (userGitName.empty())
            {
                userGitName = userGitNameDefault;
                std::cout << "Your Github name will remain " << userGitName << '\n'
                          << '\n';
            }
            else
            {
                std::cout << "Your Github username is " << userGitName << "?\n"
                          << '\n';
            }

            // User choice [y/n] section

            std::cout << "Confirm Github name?\n"
                      << "[y/n] choice" << '\n';
            std::cout << "User choice: ";
            std::getline(std::cin, userGitChoice);

            if (userGitChoice != "n", userGitChoice != "y" || userGitChoice != n, userGitChoice != y)
            {
                std::cout << "Invalid choice; try again..." << '\n'
                          << '\n';
            }

        } while (userGitChoice != "n", userGitChoice != "y" || userGitChoice != n, userGitChoice != y);

        if (userGitChoice == y || userGitChoice == "y")
        {
            std::cout << "Processing..." << '\n'
                      << '\n';
            for (int c = 0; c <= 100; c += 5)
            {
                if (c == 90)
                {
                    continue;
                }
                else if (c == 98)
                {
                    break;
                }
                std::cout << c << "%"
                          << " Proccessed" << '\n'
                          << '\n';
            }
            std::cout << "Proccess Finished! " << '\n'
                      << '\n';
        }

        std::cout << "Hello! " << userGitName << " welcome to Git status tracker." << '\n'
                  << '\n';

        std::cout << "**********************************************************************" << '\n'
                  << '\n';

    } while (userGitChoice == n || userGitChoice == "n");

    // USER EMAIL CONFIG  WIP



    //  GIT CHOICE SELECTION CONFIG

    do
    {
        std::string userGitStatusDisplay[] = {"Starred", "Viewed", "Shared"};
        int userGitStatusDisplaySize = sizeof(userGitStatusDisplay) / sizeof(userGitStatusDisplay[0]);

        std::cout << "Select your Git Status: " << '\n';
        std::getline(std::cin, userGitChoice);

        index = userGitSelected(userGitStatusDisplay, userGitStatusDisplaySize, userGitChoice);

        if (index != -1)
        {
            std::cout << userGitName << " selected the status [ " << userGitChoice << " ]" << '\n'
                      << '\n';
            std::cout << userGitName << " was successfully given the status " << userGitChoice << '\n'
                      << '\n';

            if (userGitChoice == userGitStatusDisplay[0])
            {
                std::cout << "Thank you for giving support on the repository." << '\n'
                          << '\n';
            }
            else if (userGitChoice == userGitStatusDisplay[1])
            {
                std::cout << "Thank you for Viewing the repository." << '\n'
                          << '\n';
            }

            else if (userGitChoice == userGitStatusDisplay[2])
            {
                std::cout << "Thank you for Sharing the repository." << '\n'
                          << '\n';
            }
            break;
        }

        else if (index == -1)
        {
            std::cout << '\n'
                      << userGitChoice << " is a invalid status, try again." << '\n'
                      << '\n';
            continue;
        }

    } while (userGitChoice != "Starred", userGitChoice != "Viewed", userGitChoice != "Shared");

    //  EXIT PROGRAM CONFIG

    std::string cede("cede");
    std::string userGetRChoice;

    do
    {
        std::cout << "Type in 'cede' to exit the .exe program." << '\n';
        std::getline(std::cin, userGetRChoice);

        if (userGetRChoice == cede || userGetRChoice == "cede")
        {
            std::cout << "Exiting program..." << '\n';
            break;
        }

        else if (userGetRChoice != cede || userGetRChoice != "cede")
        {
            std::cout << "Invalid command, try again." << '\n'
                      << '\n';
            continue;
        }
    } while (userGetRChoice != cede || userGetRChoice != "cede");

    return 0;
}

int userGitSelected(std::string gitdisplay[], int size, std::string gitelement)
{

    for (int g = 0; g < size; g++)
    {
        if (gitdisplay[g] == gitelement)
        {
            return g;
        }
    }
    return -1;
}
