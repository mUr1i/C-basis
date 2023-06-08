#include <iostream>


int main() {

    std::string userObjectRedit[5];
    std::string tempUIreturn;
            int userObjectSize = sizeof(userObjectRedit)/sizeof(userObjectRedit[0]);

                for(int i = 0; i < userObjectSize; i++){
                    std::cout << "Enter a unit to purchase or 'deturn' to quit {" << i + 1 << "}" << ": ";
                    std::getline(std::cin, tempUIreturn);
                    if(tempUIreturn == "deturn"){
                        break;
                    }
                    else{
                        userObjectRedit[i] = tempUIreturn;
                    }      
                }

                    std::cout << "The following units are choosed to be purchased:\n";

                    for(int i = 0; !userObjectRedit[i].empty(); i++){
                            std::cout << userObjectRedit[i] << '\n';
                    }

                std::string userItemRegist[5];
                std::string userItemSelected;
                int userItemSave = sizeof(userItemRegist)/sizeof(userItemRegist[0]);
        
                for(int i = 0; i < userItemSave; i++){
                    std::cout << "[user] Picked items " << "[" << i + 1 << "]" << ": ";
                    std::getline(std::cin, userItemSelected);
                    if(userItemSelected == "deturn"){
                        break;
                    }
                    else{
                        userItemRegist[i] = userItemSelected;
                    }      
                }
        
            std::cout << "[user] Picked up the following items:\n";

            for(int i = 0; !userItemRegist[i].empty(); i++){
                std::cout << userItemRegist[i] << '\n';
            }

    return 0;
}