#include <iostream>

int userPassCheckConfig(std::string array[], int userSizeCal, std::string password);

int main() { 

    std::string userPasswordRegist[] = {"Godisnotreal12", "a09165727641", "Guy"};
    int userPassIndex;
    int userSizeCal = sizeof(userPasswordRegist)/sizeof(userPasswordRegist[0]);
    std::string userInteferanceChoice;

        std::cout << "Enter password to long in for the account:" << '\n';
        std::getline(std::cin, userInteferanceChoice);

        userPassIndex = userPassCheckConfig(userPasswordRegist, userSizeCal, userInteferanceChoice);

        if(userPassIndex != -1){
            std::cout << "[user] successfully selected a correct password to the account\n";
            std::cout << userInteferanceChoice << " saved at " << userPassIndex << " marked";
        }
        else{
            std::cout << userInteferanceChoice << " incorrect; wrong password try again.";
        }
    return 0;
}

        int userPassCheckConfig(std::string array[], int userSizeCal, std::string password){
            for(int i = 0; i < userSizeCal; i++){
                if(array[i] == password){
                    return i;
                } 
            }
            return -1;
        }