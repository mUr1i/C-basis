#include <iostream>
#include <iomanip>
#include <algorithm>


std::string str_tolower(std::string s)  
{ 
   auto lower = [](unsigned char c){ return std::tolower(c);}; 
 
    std::transform( s.begin(), s.end(),  
                    s.begin(), lower); 
    return s; 
} 
using std::cout;
using std::cin;
using text_t = std::string;

void userPrimeSelect(bool userPrimeFeature, int userPrimeCon);
text_t userPrimeFeature();

int main()
{
  text_t userPrimeFeature;
  bool userPrimeFeatureY = true;
  text_t y("y");
  text_t n("n");
  int userPrimeCon;

do{
 cout << "Do you wanna suscribed for $4.50?: ";
 std::getline(cin, userPrimeFeature);

     while(userPrimeFeature.empty()){
      cout << "No selection inputted\n" << "Do you wanna suscribed for $4.50?: ";
      std::getline(cin, userPrimeFeature);
      continue;
 }
 if(userPrimeFeature == y){
    cout <<  "You have suscribed to be a prime member" << "!" << '\n';
    break;
 }
 else if(userPrimeFeature == n){
    cout <<  "You didn't suscribed to be a prime member" << "!" << '\n';
    break;
 }
 else{
    cout << "Not a valid choice, only input(y/n)\n";
   continue;
 }
}while(userPrimeFeature != y || userPrimeFeature != n);


cout << "Select A map you wish to spawn in: ";
cin >> userPrimeFeature;

cout << "spawnLocationPrime1\n";

    return 0;
}
std::string userSpawnLocationPrimeFinal(std::string userSpawnPrimeName, std::string userSpawnPrimeDisc){
   return userSpawnPrimeName + '\n' + userSpawnPrimeDisc + '\n';
}
void userPrimeSelect(bool userPrimeFeatureY,int userPrimeCon){
    text_t spawnLocationPrime1 = "Celestial Haven";

    text_t spawnLocationPrime1Des = "Celestial Haven is a place where the laws of physics are merely suggestions,\n"
                                    "And the impossible becomes possible. As you enter the world, you will find yourself surrounded by dazzling displays of light and color,\n" 
                                    "And the sounds of ethereal music will fill your ears.\n";
   
   if(userPrimeFeatureY){
    switch(userPrimeCon){

    }
   }
}


// Continue if i learn how to eliminate normal maps and seperate premium maps from the normal ones with using prime status and non prime status

