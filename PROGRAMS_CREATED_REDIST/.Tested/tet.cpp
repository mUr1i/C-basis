#include <iostream>
#include <cstdio>

    int userGitSelected(std::string gitdisplay[], int size, std::string gitelement);
    int main(){

    //  GIT USER SELECTION
            std::cout << "******************* GITHUB REPOSITORY USER TRACKER *******************" << '\n' << '\n';
            
            std::string userGitStatus[][3] =   {{"Starred", "Viewed", "Shared"},
                                                {"Supports the repository", "Viewed the repository", "Shared the repository"}};
            std::string userGitChoice;

                int userGitRows = sizeof(userGitStatus)/sizeof(userGitStatus[0]);
                int userGitColumn = sizeof(userGitStatus[0])/sizeof(userGitStatus[0][0]);
                int index;
            

                    for(int i = 0; i < userGitRows; i++){
                        std::cout << "GIT STATUS & FAQ" << '\n';  
                        for(int j = 0; j < userGitColumn; j++){
                            std::cout <<  "* " << userGitStatus[i][j] << " " << '\n';
                        }      
                                std::cout << '\n';
                    }
            std::cout << "**********************************************************************" << '\n' << '\n';

    //  GIT CHOICE SELECTION
    
                        do{
                        std::string userGitStatusDisplay[] = {"Starred", "Viewed", "Shared"};
                        int userGitStatusDisplaySize = sizeof(userGitStatusDisplay)/sizeof(userGitStatusDisplay[0]);
                        
                        std::cout << "Select your Git Status: " << '\n';
                            std::getline(std::cin, userGitChoice);
                                
                             index = userGitSelected(userGitStatusDisplay, userGitStatusDisplaySize, userGitChoice);
                            
                            if(index != -1){
                                std::cout << "Anonymous selected the status => " <<  userGitChoice << '\n' << '\n';

                                    if(userGitChoice == userGitStatusDisplay[0]){
                                        std::cout << "Thank you for giving support on the repository." << '\n' << '\n';
                                    }

                                    else if(userGitChoice == userGitStatusDisplay[1]){
                                        std::cout << "Thank you for Viewing the repository." << '\n' << '\n';
                                    }

                                    else if(userGitChoice == userGitStatusDisplay[2]){
                                        std::cout << "Thank you for Sharing the repository." << '\n' << '\n';
                                    }
                                    break;
                            } 
                            else if(index == -1){
                                std::cout << '\n' <<  userGitChoice << " Is a invalid status, try again." << '\n' << '\n'; 
                                    continue;
                            }
                            
                        }while(userGitChoice != "Starred", userGitChoice != "Viewed", userGitChoice != "Shared");


    //  Exit program

                                std::string cede("cede");
                                std::string userGetRChoice;

                                    do{
                                    std::cout << "Type in 'cede' to exit the .exe program." << '\n';
                                        std::getline(std::cin, userGetRChoice);

                                            if(userGetRChoice == cede || userGetRChoice == "cede"){
                                                std::cout << "Exiting program..." << '\n';
                                                break;
                                            }

                                            else if(userGetRChoice != cede || userGetRChoice != "cede"){
                                                std::cout << "Invalid command, try again." << '\n' << '\n';
                                                    continue;
                                            }
                                    }while(userGetRChoice != cede || userGetRChoice != "cede");

        return 0;
    }

        
        int userGitSelected(std::string gitdisplay[], int size, std::string gitelement){
                    
            for(int g = 0; g < size; g++){
                if(gitdisplay[g] == gitelement){
                    return g;
                }
            }
            return -1;
        }
        

