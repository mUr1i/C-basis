#include <iostream>

using std::cout;
using std::cin;

using text_t = std::string;

int main(){
  // usefull string methods

 text_t userName;


  cout << "Enter your name: ";
  std::getline(cin, userName);


 if(userName.length() > 12){
    cout << "Your name can't be over 12 characters";
}
else{
     cout << "Welcome " << userName;
}



 if(userName.empty()){ // returns a bool value
  cout << "You didn't enter your name";
 } 
 else{
    cout << "Hello " << userName;
 }

  userName.clear();
  cout << "Hello " << userName; 


 userName.append("@gmail.com");
   cout << "Your username is now " << userName; // Joshua@gmail.com

 
   cout << userName.at(1); 
    userName.insert(0, "@"); // insert a string // @Joshua
  
   cout << userName.find(' '); // Joshua Puga = 6

  userName.erase(0, 3); // Joshua = hua
     cout << userName;


 return 0;
}