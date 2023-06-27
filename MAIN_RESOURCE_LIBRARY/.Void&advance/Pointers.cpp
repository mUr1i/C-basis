#include <iostream>
#include <cstdio>

int main()
{

    // Pointers = variable that stores memory address of a another variable
    //...          sometimes it's easier  to work with an address

    // & address-of operator
    // * dereference operator

    std::string userNameExample = "Products";
    std::string userGmailNotes[] = {"@gmail.com", "@hootes.com", "@github.com"};

    std::string *pUserName = &userNameExample;
    std::string *pUserGmail = userGmailNotes;


    std::cout << pUserName << '\n';  // to display the address
    std::cout << pUserGmail << '\n'; 

    std::cout << *pUserName << '\n'; // to display the variable
    std::cout << *pUserGmail << '\n';

        
    return 0;
}