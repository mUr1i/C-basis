#include <iostream>

using std::cout;
using std::cin;

using text_t = std::string;

int main(){


std::string userName;

while(userName.empty()){
 cout << "Enter your username: ";
  std::getline(cin, userName);
}

/*
while(1==1){ // inf loop
 cout << "IM STUCK IN THIS GOD FORSKEN LANGUAGE KNOWN AS C++";

}
*/
 cout << "Hello " << userName;



    return 0;
}