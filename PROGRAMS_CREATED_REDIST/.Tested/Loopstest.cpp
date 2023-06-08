#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using text_t = std::string;

std::string str_tolower(std::string s)  
 { 
   //lambda function for transform 
   auto lower = [](unsigned char c){ return std::tolower(c);}; 
 
    std::transform( s.begin(), s.end(),  
                    s.begin(), lower); 
    return s; 
} 
 
int main(){

text_t userName;
int userAge;
text_t endSeq;
text_t userCookie;
const text_t y("y");
const text_t n("n");

text_t userGender;
text_t male = "Male";
text_t female = "Female";

cout << "Enter your username: ";
std::getline(cin, userName);

  if(userName.length() > 30 || userName.length() >= 30){
    cout << "Your username can't be over 30 characters long\n"; 
}
  else{
    cout << "Hello " << userName << '\n';
}

  if(userName.empty()){
    cout << "You didn't enter your username\n";
}

cout << "Enter your Age: ";
cin >> userAge;

  if(userAge <= 18 || userAge >= 101){
 cout << "You are not old enough to play the game ";
  cout << userName << " You are " << userAge << '\n'; 
}
  else{
    cout << "You are old enough to play the game ";
     cout << userName << " You are " << userAge << '\n';
}
 
  cout << "Pls select your gender(Male/Female): ";
   cin >> userGender;

  if(userGender == male){
    cout << "You selected to be a male.\n";
}
  else if(userGender == female){
    cout << "You selected to be a female.\n";
}
  else{
    cout << "Pls enter only (Male/Female) option.\n";
}

  cout << "ENABLE COOKIES(y/n)?: ";
   cin >> userCookie;

userCookie = str_tolower(userCookie); 
  if(userCookie == y){
  cout << "If I take 1 hour to cook a batch of cookies and the\n"
  "cookie monster has 15 ovens working 24 hours a day every day\n "
  "for 5 years, how long does it take the cookie monster to make\n "
  "6000000 batches of cookies? Ok, ok, ok. Lets just say he makes\n "
  "one batch of cookies in one hour with one oven, just like you do.\n "
  "He needs 24 hours to make 24 batches. So, he needs 6 million hours\n "
  "to make 6 million batches. But hes got 15 ovens, so we can divide\n "
  "and find out how many hours it takes 15 ovens to do this deed.\n "
  "Thats 400,000 hours. To make that into days, we have 16,666 2/3 days.\n "
  "Divided by 365 days in a year, and youll get an answer that will be\n "
  "wrong. You didnt account for leap years. However, I guarantee you hes\n "
  "going to need a lot more years than 5 to make 6,000,000 batches of\n "
  "cookies.\n";
}
  else if(userCookie == n){
    cout << "Ok....\n";
 }
  else{
    cout << "Invalid character, Pls only choose (y/n): ";
  }

    
 do{
    cout << "You're finished thank you for taking the survey\n";
}while(!endSeq.empty());

    cout << "Redirecting you to the game...\n";
    for(int i = 10; i >= 0; i--){
     cout << i << '\n';
}
cout << "You've succesfully redirected in to the game.";

return 0;
}