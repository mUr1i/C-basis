#include <iostream>


int main() {
    
    
    std::string userItemShow[][3] =  {{"Wood", "Rock", "Stick"},
                                    {"Bow", "Crossbow", "DIY"},
                                    {"Axe", "Pickaxe", "Sword"}};


        
        std::cout << userItemShow[0][2] << " ";
        std::cout <<  userItemShow[0][0] << " ";
        

       int userItemrows = sizeof(userItemShow)/sizeof(userItemShow[0]);
       int userItemcolumn = sizeof(userItemShow[0])/sizeof(userItemShow[0][0]);

        for(int i = 0; i < userItemrows; i++){
            for(int j = 0; j < userItemcolumn; j++){
                std::cout << userItemShow[i][j] << " ";
            }        
            std::cout << '\n';
        }
    

    std::string computerEntities[][3] =     {{"Human",  "Animal",   "Objects"},
                                            {"Hostile", "Friendly", "Unknown"}};

        int computerRow = sizeof(computerEntities)/sizeof(computerEntities[0]);
        int computerColumn = sizeof(computerEntities[0])/sizeof(computerEntities[0][0]);

            std::cout << "Computer Index\n" << '\n';

            for(int i = 0; i < computerRow; i++){
                for(int j = 0; j < computerColumn; j++){
                    std::cout << computerEntities[i][j] << '\n';
                }
                    std::cout << '\n';
            }

        
    return 0;
}