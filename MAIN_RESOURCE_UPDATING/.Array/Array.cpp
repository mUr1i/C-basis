#include <iostream>
#include <algorithm>
#include <cstdio>

    using text_t = std::string;
    using std::cin;
    using std::cout;

        void userPurchaseReturn(int userStoreCompli, double userStorePrices, text_t userStoreObbj);
int main()
{

        std::cin.clear();
        fflush(stdin);

        text_t userStoreObbj[] ={"Health potion", "Stamina potion", "Strength potion", "Energy potion"};
        text_t userStoreSelect;
        text_t Confirm("confirm");
        text_t Back("Back");
        int userStoreCompli;
        

    /* Array 
     data structure that can hold multiple values
     values are accessed by an index number
     "kind of like a variable that hold multiple values"
    */

    /*  First way to declare an array
            std::string cars[] = {"Toyota", "Honda", "Tesla"};
                    // arrays should the same date type

            cars[0] = "Samsung";

                std::cout << cars[0] << '\n'; 
                    // Toyota
                std::cout << cars[1] << '\n';
                    // Honda
                std::cout << cars[2] << '\n';
                    // Tesla

    */
    /*  Second way to declare an array
                    std::string cars[3];
                        // You can declare an array and declare it later.

                    cars[0] = "Samsung";
                    cars[1] = "Oppo";
                    cars[2] = "Sonny";

                            std::cout << cars[0] << '\n';
                            std::cout << cars[1] << '\n';
                            std::cout << cars[2] << '\n';
    */    
                
                double userStorePrices[4]; 

                        userStorePrices[0] = 5.84;
                        userStorePrices[1] = 5.58;
                        userStorePrices[2] = 6.43;
                        userStorePrices[3] = 7.54;

                                
                                std::cout << "[1]" << ' ' << userStoreObbj[0] << '\n';
                                std::cout << "[2]" << ' ' << userStoreObbj[1] << '\n';
                                std::cout << "[3]" << ' ' << userStoreObbj[2] << '\n';
                                std::cout << "[4]" << ' ' << userStoreObbj[3] << '\n';
                        
                    
                                std::cout << "[user] Item Price " << "Select a item between between [1-4]\n";
                                std::cout << userStoreObbj[0] << "[ " << userStorePrices[2] << "$" << " ]" << '\n';
                                std::cout << userStoreObbj[1] << "[ " << userStorePrices[0] << "$" << " ]" << '\n';
                                std::cout << userStoreObbj[2] << "[ " << userStorePrices[1] << "$" << " ]" << '\n';
                                std::cout << userStoreObbj[3] << "[ " << userStorePrices[3] << "$" << " ]" << '\n';

                                                do{  
                                                cout << "[user] select the item you wish to buy\n";
                                                cout << "Input choice: ";
                                                cin >> userStoreCompli;
                                                break;
                        }while(userStoreCompli > 4 || userStoreCompli <= 0);
                                
                
                    switch(userStoreCompli){
                            do{
                                case 1:             cout << "[user] selected the option [1] to purchase " << userStoreObbj[0] << '\n';
                                                        std::getline(cin, userStoreSelect);
                                                cout << "type 'confirm' if you wish to purchase " << userStoreObbj[0] << " for " << userStorePrices[2] << '\n';
                                                cout << "Input Answer: ";
                                                        getline(cin, userStoreSelect);
                                                        
                                                        while(userStoreSelect.empty()){
                                                                cout << "Not a valid option, try again\n";
                                                                cout << "Input Answer: ";
                                                                getline(cin, userStoreSelect);
                                                        }

                                                        while(userStoreSelect != Confirm || userStoreSelect != "confirm"){
                                                                cout << "Not a valid option, try again\n";
                                                                cout << "Input Answer: ";
                                                                getline(cin, userStoreSelect);
                                                        }

                                                            if(userStoreSelect == Confirm || userStoreSelect == "confirm"){
                                                                    cout << "[user] Purchasing the item " << userStoreObbj[0] << '\n';
                                                                    for(int i = 100; i >= 0; i-=5){
                                                                        if(i == 25){
                                                                        continue;
                                                                        }
                                                                        else if(i == 0){
                                                                        continue;
                                                                        }
                                                                         std::cout << i  << "%" << '\n';
                                                                        }
                                                                    cout << "[user] Successfully purchased the item " << userStoreObbj[0] << " for " << "[ " << userStorePrices[2] << "$" << " ]" << '\n';
                                                                    
                                                            }
                            break;
                                case 2:             cout << "[user] selected the option [2] to purchase " << userStoreObbj[1] << '\n';
                                                        std::getline(cin, userStoreSelect);
                                                cout << "type 'confirm' if you wish to purchase " << userStoreObbj[1] << " for " << userStorePrices[0] << "?" << '\n';
                                                cout << "Input Answer: ";
                                                        getline(cin, userStoreSelect);
                                                        
                                                        while(userStoreSelect.empty()){
                                                                cout << "Not a valid option, try again\n";
                                                                cout << "Input Answer: ";
                                                                getline(cin, userStoreSelect);
                                                        }

                                                        while(userStoreSelect != Confirm || userStoreSelect != "confirm"){
                                                                cout << "Not a valid option, try again\n";
                                                                cout << "Input Answer: ";
                                                                getline(cin, userStoreSelect);
                                                        }

                                                            if(userStoreSelect == Confirm || userStoreSelect == "confirm"){
                                                                    cout << "[user] Purchasing the item " << userStoreObbj[1] << '\n';
                                                                     for(int i = 50; i >= 0; i-=5){
                                                                        if(i == 25){
                                                                        continue;
                                                                        }
                                                                        else if(i == 0){
                                                                        continue;
                                                                        }
                                                                         std::cout << i  << "%" << '\n';
                                                                        }
                                                                    cout << "[user] Successfully purchased the item " << userStoreObbj[1] << " for " << "[ " << userStorePrices[0] << "$" << " ]" << '\n';
                                                                    
                                                            }
                            break;
                                case 3:             cout << "[user] selected the option [3] to purchase " << userStoreObbj[2] << '\n';
                                                        std::getline(cin, userStoreSelect);
                                                cout << "type 'confirm' if you wish to purchase " << userStoreObbj[2] << " for " << userStorePrices[1] << "?" << '\n';
                                                cout << "Input Answer: ";
                                                        getline(cin, userStoreSelect);
                                                        
                                                        while(userStoreSelect.empty()){
                                                                cout << "Not a valid option, try again\n";
                                                                cout << "Input Answer: ";
                                                                getline(cin, userStoreSelect);
                                                        }

                                                        while(userStoreSelect != Confirm || userStoreSelect != "confirm"){
                                                                cout << "Not a valid option, try again\n";
                                                                cout << "Input Answer: ";
                                                                getline(cin, userStoreSelect);
                                                        }

                                                            if(userStoreSelect == Confirm || userStoreSelect == "confirm"){
                                                                    cout << "[user] Purchasing the item " << userStoreObbj[2] << '\n';
                                                                     for(int i = 50; i >= 0; i-=5){
                                                                        if(i == 25){
                                                                        continue;
                                                                        }
                                                                        else if(i == 0){
                                                                        continue;
                                                                        }
                                                                         std::cout << i  << "%" << '\n';
                                                                        }
                                                                    cout << "[user] Successfully purchased the item " << userStoreObbj[2] << " for " << "[ " << userStorePrices[1] << "$" << " ]" << '\n';
                                                                    
                                                            }     
                            break;
                                case 4:             cout << "[user] selected the option [4] to purchase " << userStoreObbj[3] << '\n';
                                                        std::getline(cin, userStoreSelect);
                                                cout << "type 'Confirm' if you wish to purchase " << userStoreObbj[3] << " for " << userStorePrices[3] << "?" << '\n';
                                                cout << "Input Answer: ";
                                                        getline(cin, userStoreSelect);
                                                        
                                                        while(userStoreSelect.empty()){
                                                                cout << "Not a valid option, try again\n";
                                                                cout << "Input Answer: ";
                                                                getline(cin, userStoreSelect);
                                                        }

                                                        while(userStoreSelect != Confirm || userStoreSelect != "confirm"){
                                                                cout << "Not a valid option, try again\n";
                                                                cout << "Input Answer: ";
                                                                getline(cin, userStoreSelect);
                                                        }

                                                            if(userStoreSelect == Confirm || userStoreSelect == "confirm"){
                                                                    cout << "[user] Purchasing the item " << userStoreObbj[3] << '\n';
                                                                     for(int i = 50; i >= 0; i-=5){
                                                                        if(i == 25){
                                                                        continue;
                                                                        }
                                                                        else if(i == 0){
                                                                        continue;
                                                                        }
                                                                         std::cout << i  << "%" << '\n';
                                                                        }
                                                                    cout << "[user] Successfully purchased the item " << userStoreObbj[3] << " for " << "[ " << userStorePrices[3] << "$" << " ]" << '\n';
                                                                    
                                                            }
                            break;
                                default: 
                                                cout << "Not a valid choice, try again\n";
                                                
                                              
                            }while(userStoreCompli > 4 || userStoreCompli <= 0 );
                    }

                


    return 0;
}

void userPurchaseReturn(int userStoreCompli, double userStorePrices, text_t userStoreObbj){

                        
                                
        
}