#include <iostream>

 using std::cout;
 using std::cin;
 using text_t = std::string;


int main(){

 int userAge;
 bool userAgeconfirm = true;
 char userScore;
 text_t userName;
 

 cout << "What is  your username?: ";
  cin >> userName;
   cout << "Hello " << userName << " Pls enter your age\n";

  cout << "Enter your Age: ";
   cin >> userAge;

  if(userAge < 18 || userAge >= 100){
    cout << "This account needs parental acceptance\n";
 }
  else{
    cout << "Your accepted, thank you for joining the game\n";
  }
if(!userAgeconfirm){
    cout << "We sended a email to you, pls confirm it\n";
  } 
  else{
    cout << "Pls press continue to start game\n";
  }

 cout << "Enter the score you got(A-F): ";
    cin >> userScore; 

   if (userScore == 'A' || userScore == 'a' ){
 cout << "You Succesfully fully completed the level...\n ";
  }
   else if(userScore == 'B' || userScore == 'b' ){
 cout << "You Succesfully completed the level...\n ";
  }
  else if(userScore == 'C' || userScore == 'c' ){
 cout << "You did great at the level...\n ";
  }
  else if(userScore == 'D' || userScore == 'd' ){
 cout << "You completed the level...\n ";
  }
  else if(userScore == 'F' || userScore == 'f' ){
 cout << "You failed the level...\n ";
  }
  else{
    cout << " Not a valid number, Choose only from (A-F)  ";
  }

   
 return 0;
}