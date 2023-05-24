#include <iostream>
#include <cstdio>
#include <new>

     using std::cout;
     using std::cin;

     int getMapSelection(int userMapSelection[], int userMapSelect);
          
int main() {

     std::string userDisplayObject[6];
     std::string userUnitDeploy;
     std::string userUnitDisplayDescription[6];
     std::string userUnitSelectRegist;
     std::string confirm("confirm");
     std::string deturn("deturn");
     std::string userUnitExpiences[6];
     std::string cancel("cancel");
     std::string ok("ok");

     int userDisplayUnitSelectNum[6];
     int userDisplayCapUnit[6];
     int userUnitDeploySelection;
          
          userDisplayObject[0] = "Riflemen";
          userDisplayObject[1] = "Gas Mask Troopers";
          userDisplayObject[2] = "Field Gunners";
          userDisplayObject[3] = "Flamethrowers";
          userDisplayObject[4] = "Engineers";
          userDisplayObject[5] = "Field ambulance";

          userDisplayCapUnit[0] = 50;
          userDisplayCapUnit[1] = 45;
          userDisplayCapUnit[2] = 48;
          userDisplayCapUnit[3] = 24;
          userDisplayCapUnit[4] = 18;
          userDisplayCapUnit[5] = 13;

          userDisplayUnitSelectNum[0] = 1;
          userDisplayUnitSelectNum[1] = 2;
          userDisplayUnitSelectNum[2] = 3;
          userDisplayUnitSelectNum[3] = 4;
          userDisplayUnitSelectNum[4] = 5;
          userDisplayUnitSelectNum[5] = 6;

          userUnitDisplayDescription[0] =    "Versatile infantry equipped with bolt-action rifles,\n"
                                             "capable of engaging enemies at medium to long range.\n";

          userUnitDisplayDescription[1] =    "Soldiers equipped with protective gear to counter the threat of chemical warfare,\n"
                                             "trained to operate and fight in a contaminated environment.\n";

          userUnitDisplayDescription[2] =    "Artillery units equipped with smaller, mobile cannons or howitzers,\n"
                                             "offering a balance between firepower and maneuverability.\n";

          userUnitDisplayDescription[3] =    "Specialized units armed with portable flamethrowers,\n"
                                             "used to clear enemy trenches or structures with devastating and demoralizing effects.\n";

          userUnitDisplayDescription[4] =    "Skilled soldiers trained in construction, fortification, and demolition,\n"
                                             "responsible for building and maintaining field defenses and infrastructure.\n";

          userUnitDisplayDescription[5] =    "Mobile medical units responsible for providing advanced medical care, stabilization,\n"
                                             "and evacuation of wounded soldiers from the battlefield.\n";



                         do{
                              do{
                         cout << "------- UNIT SELECTION -------" << '\n' << '\n';
                              for(int i = 0; i < sizeof(userDisplayObject)/sizeof(std::string); i++){
                                   cout << "[" << userDisplayUnitSelectNum[i] << "]" << userDisplayObject[i] << " " << "{" << userDisplayCapUnit[i] << " units}" << '\n' << '\n';
                              }
  
                                        do{
                                             std::cin.clear();
                                             fflush(stdin);

                                        cout << "Select units to purchase & deploy in the trenches" << '\n' << '\n';
                              
                                        cout << "Input choice: ";
                                             cin >> userUnitDeploySelection;

                                                  if(userUnitDeploySelection > 6 || userUnitDeploySelection <= 0){
                                                       cout << "Not a valid choice, try again." << '\n' << '\n';
                                                       continue;
                                                  }

                                        }while(userUnitDeploySelection > 6 || userUnitDeploySelection <= 0);

                                   switch(userUnitDeploySelection){
                                        case 1:   if(userUnitDeploySelection == 1){
                                                            for(int c = 100; c >= 0; c-=9){
                                                                 if(c == 19){
                                                                        continue;
                                                                        }
                                                                        else if(c == 9){
                                                                           
                                                                        break;
                                                                        }
                                                                           cout << c << "%"  << " Loading" << '\n';       
                                                            }

                                                       cout << "Loading Finished!" << '\n' << '\n';
                                                       cout << "You selected to purchase the unit " << userDisplayObject[0] << '\n' << '\n' << "Unit Description:\n" << userUnitDisplayDescription[0] << '\n';
                                                       cout << "[user] Selection choices" << '\n' << '\n';
                                                       cout << "Type 'confirm' if you want to purchase the unit\nType 'deturn' to go back" << '\n' << '\n';
                                                            std::getline(cin, userUnitSelectRegist);

                                                            do{

                                                                 std::cin.clear();
                                                                 fflush(stdin);

                                                            cout << "Input Answer: ";
                                                            std::getline(cin, userUnitSelectRegist);

                                                                 if(userUnitSelectRegist == confirm || userUnitSelectRegist == "confirm"){

                                                                           cout << "[user] selected the option 'confirm' continue purchase?" << '\n';
                                                                           cout << "ok |" << " cancel\n";
                                                                           cout << "Pick choice: ";
                                                                           getline(cin, userUnitSelectRegist);

                                                                                if(userUnitSelectRegist == ok || userUnitSelectRegist == "ok"){
                                                                                     cout << "[user] purchasing the unit " << userDisplayObject[0] << '\n' << '\n';
                                                                                     for(int c = 100; c >= 0; c-=9){
                                                                                          if(c == 19){
                                                                                          continue;
                                                                                          }
                                                                                          else if(c == 9){
                                                                           
                                                                                          break;
                                                                                          }
                                                                                          cout << c << "%"  << " Loading" << '\n';       
                                                                                     }
                                                                                
                                                                                     cout << "[user] succesfully purchased the unit " << userDisplayObject[0] << '\n' << '\n';
                                                                                     break;
                                                                                }

                                                                                else if(userUnitSelectRegist == cancel || userUnitSelectRegist == "cancel"){
                                                                                     cout << "[user] cancelled the purchase for the unit " << userDisplayObject[0] << '\n' << '\n';
                                                                                     break;
                                                                                }
                                                                 }

                                                                 else if(userUnitSelectRegist == deturn || userUnitSelectRegist == "deturn"){
                                                                           cout << "Cancelling purchase...\n";   
                                                                           break;
                                                                 }        

                                                                 else if(userUnitSelectRegist != confirm || userUnitSelectRegist != deturn){
                                                                           cout << "Non valid choice, try again." << '\n';
                                                                           continue;
                                                                 }
                                                                 else if(userUnitSelectRegist.empty()){
                                                                           cout << "#Error; [user] Empty inputted, try again" << '\n';
                                                                           cout << "Input choice: ";
                                                                           getline(cin, userUnitSelectRegist);
                                                                           continue;
                                                                 }

                                                            
                                                                 
                                                                                
                                                            }while(userUnitSelectRegist != confirm || userUnitSelectRegist != deturn);
                                                  }
                                        break;

                                        case 2:   if(userUnitDeploySelection == 2){
                                                            for(int c = 100; c >= 0; c-=9){
                                                                 if(c == 19){
                                                                        continue;
                                                                        }
                                                                        else if(c == 9){
                                                                        break;
                                                                        }
                                                                           cout << c << "%"  << " Loading" << '\n';             
                                                            }

                                                       cout << "Loading Finished!" << '\n' << '\n';
                                                       cout << "You selected to purchase the unit " << userDisplayObject[1] << '\n' << "Unit Description:\n" << userUnitDisplayDescription[1] << '\n';
                                                       cout << "[user] Selection choices" << '\n' << '\n';
                                                       cout << "Type 'confirm' if you want to purchase the unit\nType 'deturn' to go back\n";
                                                            std::getline(cin, userUnitSelectRegist);
                                                            do{

                                                                 std::cin.clear();
                                                                 fflush(stdin);

                                                            cout << "Input Answer: ";
                                                            std::getline(cin, userUnitSelectRegist);

                                                                 if(userUnitSelectRegist == confirm || userUnitSelectRegist == "confirm"){
                         
                                                                      cout << "[user] selected the option 'confirm' continue purchase?" << '\n';
                                                                           cout << "ok |" << " cancel\n";
                                                                           cout << "Pick choice: ";
                                                                           getline(cin, userUnitSelectRegist);

                                                                                if(userUnitSelectRegist == ok || userUnitSelectRegist == "ok"){
                                                                                     cout << "[user] purchasing the unit " << userDisplayObject[1] << '\n' << '\n';
                                                                                     for(int c = 100; c >= 0; c-=9){
                                                                                          if(c == 19){
                                                                                          continue;
                                                                                          }
                                                                                          else if(c == 9){
                                                                           
                                                                                          break;
                                                                                          }
                                                                                          cout << c << "%"  << " Loading" << '\n';       
                                                                                     }
                                                                                
                                                                                     cout << "[user] succesfully purchased the unit " << userDisplayObject[1] << '\n' << '\n';
                                                                                     break;
                                                                                }

                                                                                else if(userUnitSelectRegist == cancel || userUnitSelectRegist == "cancel"){
                                                                                     cout << "[user] cancelled the purchase for the unit " << userDisplayObject[1] << '\n' << '\n';
                                                                                     break;
                                                                                }
                                                                 }

                                                                 else if(userUnitSelectRegist == deturn || userUnitSelectRegist == "deturn"){
                                                                           cout << "Cancelling purchase...\n";   
                                                                           break;
                                                                 }

                                                                 else if(userUnitSelectRegist != confirm || userUnitSelectRegist != deturn){
                                                                           cout << "Non valid choice, try again." << '\n';
                                                                           continue;
                                                                 }
                                                                 else if(userUnitSelectRegist.empty()){
                                                                           cout << "#Error; [user] Empty inputted, try again" << '\n';
                                                                           cout << "Input choice: ";
                                                                           getline(cin, userUnitSelectRegist);
                                                                 }



                                                            }while(userUnitSelectRegist != confirm || userUnitSelectRegist != deturn);         
                                                  }
                                        break;

                                        case 3:   if(userUnitDeploySelection == 3){
                                                            for(int c = 100; c >= 0; c-=9){
                                                                 if(c == 19){
                                                                        continue;
                                                                        }
                                                                        else if(c == 9){
                                                                        break;
                                                                        }
                                                                           cout << c << "%"  << " Loading" << '\n';
                                                            }

                                                       cout << "Loading Finished!" << '\n' << '\n';
                                                       cout << "You selected to purchase the unit " << userDisplayObject[2] << '\n' << "Unit Description:\n" << userUnitDisplayDescription[2] << '\n';
                                                       cout << "[user] Selection choices" << '\n' << '\n';
                                                       cout << "Type 'confirm' if you want to purchase the unit\nType 'deturn' to cancel the purchase\n";
                                                            std::getline(cin, userUnitSelectRegist);
                                                            do{

                                                                 std::cin.clear();
                                                                 fflush(stdin);

                                                            cout << "Input Answer: ";
                                                            std::getline(cin, userUnitSelectRegist);

                                                                 if(userUnitSelectRegist == confirm || userUnitSelectRegist == "confirm"){

                                                                           cout << "Succesfully purchased the unit " << userDisplayObject[2] << '\n';
                                                                           cout << "[user] selected the option 'confirm' continue purchase?" << '\n';
                                                                           cout << "ok |" << " cancel\n";
                                                                           cout << "Pick choice: ";
                                                                           getline(cin, userUnitSelectRegist);

                                                                                if(userUnitSelectRegist == ok || userUnitSelectRegist == "ok"){
                                                                                     cout << "[user] purchasing the unit " << userDisplayObject[2] << '\n' << '\n';
                                                                                     for(int c = 100; c >= 0; c-=9){
                                                                                          if(c == 19){
                                                                                          continue;
                                                                                          }
                                                                                          else if(c == 9){
                                                                           
                                                                                          break;
                                                                                          }
                                                                                          cout << c << "%"  << " Loading" << '\n';       
                                                                                     }
                                                                                
                                                                                     cout << "[user] succesfully purchased the unit " << userDisplayObject[1] << '\n' << '\n';
                                                                                     break;
                                                                                }

                                                                                else if(userUnitSelectRegist == cancel || userUnitSelectRegist == "cancel"){
                                                                                     cout << "[user] cancelled the purchase for the unit " << userDisplayObject[2] << '\n' << '\n';
                                                                                     break;
                                                                                }

                                                                 }
                                                                 else if(userUnitSelectRegist == deturn || userUnitSelectRegist == "deturn"){
                                                                           cout << "Cancelling purchase...\n";   
                                                                           break;
                                                                 }

                                                                 else if(userUnitSelectRegist != confirm || userUnitSelectRegist != deturn){
                                                                           cout << "Non valid choice, try again." << '\n';
                                                                           continue;
                                                                 }
                                                                 else if(userUnitSelectRegist.empty()){
                                                                           cout << "#Error; [user] Empty inputted, try again" << '\n';
                                                                           cout << "Input choice: ";
                                                                           getline(cin, userUnitSelectRegist);
                                                                 }        

                                                            }while(userUnitSelectRegist != confirm || userUnitSelectRegist != deturn);
                                                  }
                                        break;
                                        
                                        case 4:   if(userUnitDeploySelection == 4){
                                                            for(int c = 100; c >= 0; c-=9){
                                                                 if(c == 19){
                                                                        continue;
                                                                        }
                                                                        else if(c == 9){
                                                                        break;
                                                                        }
                                                                           cout << c << "%"  << " Loading" << '\n';    
                                                            }

                                                       cout << "Loading Finished!" << '\n' << '\n';
                                                       cout << "You selected to purchase the unit " << userDisplayObject[3] << '\n' << "Unit Description:\n" << userUnitDisplayDescription[3] << '\n';
                                                       cout << "[user] Selection choices" << '\n' << '\n';
                                                       cout << "Type 'confirm' if you want to purchase the unit\nType 'deturn' to go back\n";
                                                            std::getline(cin, userUnitSelectRegist);
                                                            do{

                                                                 std::cin.clear();
                                                                 fflush(stdin);

                                                            cout << "Input Answer: ";
                                                            std::getline(cin, userUnitSelectRegist);

                                                                 if(userUnitSelectRegist == confirm || userUnitSelectRegist == "confirm"){

                                                                           cout << "Succesfully purchased the unit " << userDisplayObject[3] << '\n';
                                                                           cout << "[user] selected the option 'confirm' continue purchase?" << '\n';
                                                                           cout << "ok |" << " cancel\n";
                                                                           cout << "Pick choice: ";
                                                                           getline(cin, userUnitSelectRegist);

                                                                                if(userUnitSelectRegist == ok || userUnitSelectRegist == "ok"){
                                                                                     cout << "[user] purchasing the unit " << userDisplayObject[3] << '\n' << '\n';
                                                                                     for(int c = 100; c >= 0; c-=9){
                                                                                          if(c == 19){
                                                                                          continue;
                                                                                          }
                                                                                          else if(c == 9){
                                                                           
                                                                                          break;
                                                                                          }
                                                                                          cout << c << "%"  << " Loading" << '\n';       
                                                                                     }
                                                                                
                                                                                     cout << "[user] succesfully purchased the unit " << userDisplayObject[3] << '\n' << '\n';
                                                                                     break;
                                                                                }

                                                                                else if(userUnitSelectRegist == cancel || userUnitSelectRegist == "cancel"){
                                                                                     cout << "[user] cancelled the purchase for the unit " << userDisplayObject[3] << '\n' << '\n';
                                                                                     break;
                                                                                }

                                                                 }
                                                                 else if(userUnitSelectRegist == deturn || userUnitSelectRegist == "deturn"){
                                                                           cout << "Cancelling purchase...\n";   
                                                                           break;
                                                                 }

                                                                 else if(userUnitSelectRegist != confirm || userUnitSelectRegist != deturn){
                                                                           cout << "Non valid choice, try again." << '\n';
                                                                           continue;
                                                                 }
                                                                 else if(userUnitSelectRegist.empty()){
                                                                           cout << "#Error; [user] Empty inputted, try again" << '\n';
                                                                           cout << "Input choice: ";
                                                                           getline(cin, userUnitSelectRegist);
                                                                 }        

                                                            }while(userUnitSelectRegist != confirm || userUnitSelectRegist != deturn);
                                                  }
                                        break;

                                        case 5:   if(userUnitDeploySelection == 5){
                                                            for(int c = 100; c >= 0; c-=9){
                                                                 if(c == 19){
                                                                        continue;
                                                                        }
                                                                        else if(c == 9){ 
                                                                        break;
                                                                        }
                                                                           cout << c << "%"  << " Loading" << '\n';             
                                                            }
                                                        cout << "Loading Finished!" << '\n' << '\n';
                                                       cout << "You selected to purchase the unit " << userDisplayObject[4] << '\n' << "Unit Description:\n" << userUnitDisplayDescription[4] << '\n';
                                                       cout << "[user] Selection choices" << '\n' << '\n';
                                                       cout << "Type 'confirm' if you want to purchase the unit\nType 'deturn' to go back\n";
                                                            std::getline(cin, userUnitSelectRegist);
                                                            do{

                                                                 std::cin.clear();
                                                                 fflush(stdin);

                                                            cout << "Input Answer: ";
                                                            std::getline(cin, userUnitSelectRegist);

                                                                 if(userUnitSelectRegist == confirm || userUnitSelectRegist == "confirm"){

                                                                           cout << "Succesfully purchased the unit " << userDisplayObject[4] << '\n';
                                                                           cout << "[user] selected the option 'confirm' continue purchase?" << '\n';
                                                                           cout << "ok |" << " cancel\n";
                                                                           cout << "Pick choice: ";
                                                                           getline(cin, userUnitSelectRegist);

                                                                                if(userUnitSelectRegist == ok || userUnitSelectRegist == "ok"){
                                                                                     cout << "[user] purchasing the unit " << userDisplayObject[4] << '\n' << '\n';
                                                                                     for(int c = 100; c >= 0; c-=9){
                                                                                          if(c == 19){
                                                                                          continue;
                                                                                          }
                                                                                          else if(c == 9){
                                                                           
                                                                                          break;
                                                                                          }
                                                                                          cout << c << "%"  << " Loading" << '\n';       
                                                                                     }
                                                                                
                                                                                     cout << "[user] succesfully purchased the unit " << userDisplayObject[4] << '\n' << '\n';
                                                                                     break;
                                                                                }

                                                                                else if(userUnitSelectRegist == cancel || userUnitSelectRegist == "cancel"){
                                                                                     cout << "[user] cancelled the purchase for the unit " << userDisplayObject[4] << '\n' << '\n';
                                                                                     break;
                                                                                }

                                                                 }
                                                                 else if(userUnitSelectRegist == deturn || userUnitSelectRegist == "deturn"){
                                                                           cout << "Cancelling purchase...\n";   
                                                                           break;
                                                                 } 

                                                                 else if(userUnitSelectRegist != confirm || userUnitSelectRegist != deturn){
                                                                           cout << "Non valid choice, try again." << '\n';
                                                                           continue;
                                                                 }
                                                                 else if(userUnitSelectRegist.empty()){
                                                                           cout << "#Error; [user] Empty inputted, try again" << '\n';
                                                                           cout << "Input choice: ";
                                                                           getline(cin, userUnitSelectRegist);
                                                                 }       

                                                            }while(userUnitSelectRegist != confirm || userUnitSelectRegist != deturn);
                                                  }
                                        break;

                                        case 6:   if(userUnitDeploySelection == 6){
                                                            for(int c = 100; c >= 0; c-=9){
                                                                 if(c == 19){
                                                                        continue;
                                                                        }
                                                                        else if(c == 9){   
                                                                        break;
                                                                        }
                                                                           cout << c << "%"  << " Loading" << '\n';    
                                                            }
                                                       cout << "Loading Finished!" << '\n' << '\n';
                                                       cout << "You selected to purchase the unit " << userDisplayObject[5] << '\n' << "Unit Description:\n" << userUnitDisplayDescription[5] << '\n';
                                                       cout << "[user] Selection choices" << '\n' << '\n';
                                                       cout << "Type 'confirm' if you want to purchase the unit\nType 'deturn' to go back\n";
                                                            std::getline(cin, userUnitSelectRegist);
                                                            do{

                                                                 std::cin.clear();
                                                                 fflush(stdin);

                                                            cout << "Input Answer: ";
                                                            std::getline(cin, userUnitSelectRegist);

                                                                 if(userUnitSelectRegist == confirm || userUnitSelectRegist == "confirm"){

                                                                           cout << "Succesfully purchased the unit " << userDisplayObject[5] << '\n';
                                                                           cout << "[user] selected the option 'confirm' continue purchase?" << '\n';
                                                                           cout << "ok |" << " cancel\n";
                                                                           cout << "Pick choice: ";
                                                                           getline(cin, userUnitSelectRegist);

                                                                                if(userUnitSelectRegist == ok || userUnitSelectRegist == "ok"){
                                                                                     cout << "[user] purchasing the unit " << userDisplayObject[5] << '\n' << '\n';
                                                                                     for(int c = 100; c >= 0; c-=9){
                                                                                          if(c == 19){
                                                                                          continue;
                                                                                          }
                                                                                          else if(c == 9){
                                                                           
                                                                                          break;
                                                                                          }
                                                                                          cout << c << "%"  << " Loading" << '\n';       
                                                                                     }
                                                                                
                                                                                     cout << "[user] succesfully purchased the unit " << userDisplayObject[5] << '\n' << '\n';
                                                                                     break;
                                                                                }

                                                                                else if(userUnitSelectRegist == cancel || userUnitSelectRegist == "cancel"){
                                                                                     cout << "[user] cancelled the purchase for the unit " << userDisplayObject[5] << '\n' << '\n';
                                                                                     break;
                                                                                }
                                                                 }
                                                                 else if(userUnitSelectRegist == deturn || userUnitSelectRegist == "deturn"){
                                                                           cout << "Cancelling purchase...\n";   
                                                                           break;
                                                                 }

                                                                 else if(userUnitSelectRegist != confirm || userUnitSelectRegist != deturn){
                                                                           cout << "Non valid choice, try again." << '\n';
                                                                           continue;
                                                                 }
                                                                 else if(userUnitSelectRegist.empty()){
                                                                           cout << "#Error; [user] Empty inputted, try again" << '\n';
                                                                           cout << "Input choice: ";
                                                                           getline(cin, userUnitSelectRegist);
                                                                 }        

                                                            }while(userUnitSelectRegist != confirm || userUnitSelectRegist != deturn);
                                                  }
                                        break;

                                   }
                         }while(userUnitSelectRegist == cancel || userUnitSelectRegist == "cancel"); 
                         }while(userUnitSelectRegist == deturn || userUnitSelectRegist == "deturn");
               

                              // MAP SELECTION - UPDATING               

                         std::cout << "MAP SELECTION" << '\n' << '\n';

               std::string userMapSelectionRegist[] = {"Forests and Woodlands", "Villages and Towns", "Hilltops and Ridges"};
               std::string userMapSelectionDescrip[3];
               std::string userSelectProcess;
               std::string serverListRegist[] = {"HK{EA#1}", "HK{EU#1}"};

               int userMapSelectNum[] = {1, 2, 3};
               int userMapProcess;
               int userMapSelectionNumSelect[] = {1, 2, 3};
               int userMapSelect = sizeof(userMapSelectionNumSelect)/sizeof(userMapSelectionNumSelect[0]);
               int userMapSelectConfig = getMapSelection(userMapSelectionNumSelect, userMapSelect);

            

                userMapSelectionDescrip[0] = "Dense patches of woodland offer cover for scouting and flanking maneuvers,\nbut also present challenges due to limited visibility and potential for ambushes.\n";
                userMapSelectionDescrip[1] = "Scattered throughout the map are villages and towns that have suffered heavy damage due to artillery barrages.\nThey may offer strategic positions or act as chokepoints for controlling movement.\n";
                userMapSelectionDescrip[2] = "Elevated areas provide vantage points for observation and artillery spotting.\nThey can serve as defensive positions or be used to launch attacks on enemy forces below.\n";

        
            do{
            for(int u = 0; u < sizeof(userMapSelectionRegist)/sizeof(userMapSelectionRegist[0]); u++){
            std::cout << "[" << userMapSelectNum[u] << "]" << " " << userMapSelectionRegist[u] << '\n';
            }

            do{

            std::cout << "Select an map: " << '\n';
            std::cin >> userMapProcess;

                if(userMapProcess > 3 || userMapProcess <= 0){
                    std::cout << "Invalid map pick; try again [user].\n";
                        continue;
                }
                else if(userMapProcess < 3 || userMapProcess > 0){
                    std::cout << "proceding [user]\n" << '\n';
                        break;
                }

            }while(userMapProcess > 3 || userMapProcess <= 0);


                switch(userMapProcess){
                    case 1:     if(userMapProcess == 1){

                                    std::cout << "Selected the map " << userMapSelectionRegist[0] << '\n';
                                    std::cout << "[ ok <" << "> cancel ]" << '\n';
                                    std::getline(std::cin, userSelectProcess);

                                    std::cout << "Choice: ";
                                    std::getline(std::cin, userSelectProcess);


                                    if(userSelectProcess == ok || userSelectProcess == "ok"){
                                        
                                        std::cout <<  "Selected to use the map " << userMapSelectionRegist[0] << '\n' << '\n';
                                        std::cout << userMapSelectionRegist[0] << '\n' << "Map details:\n" << userMapSelectionDescrip[0] << '\n';

                                            do{
                                            std::cout << "Select server: " << '\n' << '\n';
                                            std::cout << "[1]" << serverListRegist[0] << '\n' << '\n' << "[2]" << serverListRegist[1] << '\n' << '\n';

                                            std::cout << "Choice: ";
                                            std::cin >> userMapProcess;

                                                if(userMapProcess > 2 || userMapProcess <= 0){
                                                    std::cout << "Invalid Server; try again.\n";
                                                    continue;
                                                }
                                                
                                            }while(userMapProcess > 2 || userMapProcess <= 0);


                                                if(userMapProcess == 1){
                                                        std::cout << "Server selected " << serverListRegist[0] <<'\n';
                                                        std::getline(std::cin, userSelectProcess);
                                                            break;
                                                }

                                                else if(userMapProcess == 2){
                                                        std::cout << "Server selected " << serverListRegist[1] <<'\n';
                                                        std::getline(std::cin, userSelectProcess);
                                                            break;
                                                }
                                        }

                                    if(userSelectProcess == cancel || userSelectProcess == "cancel"){

                                        std::cout << "Returning\n" << '\n';
                                        break;

                                    } 
                                }
                    break;
                    
                    case 2:     if(userMapProcess == 2){

                                    std::cout << "Selected the map " << userMapSelectionRegist[1] << '\n';
                                    std::cout << "[ ok <" << "> cancel ]" << '\n';
                                    std::getline(std::cin, userSelectProcess);

                                    std::cout << "Choice: ";
                                    std::getline(std::cin, userSelectProcess);


                                    if(userSelectProcess == ok || userSelectProcess == "ok"){
                                        
                                        std::cout <<  "Selected to use the map " << userMapSelectionRegist[1] << '\n' << '\n';
                                        std::cout << userMapSelectionRegist[1] << '\n' << "Map details:\n" << userMapSelectionDescrip[1] << '\n';

                                            do{
                                            std::cout << "Select server: " << '\n' << '\n';
                                            std::cout << "[1]" << serverListRegist[0] << '\n' << '\n' << "[2]" << serverListRegist[1] << '\n' << '\n';

                                            std::cout << "Choice: ";
                                            std::cin >> userMapProcess;

                                                if(userMapProcess > 2 || userMapProcess <= 0){
                                                    std::cout << "Invalid Server; try again.\n";
                                                    continue;
                                                }
                                                
                                            }while(userMapProcess > 2 || userMapProcess <= 0);


                                                if(userMapProcess == 1){
                                                        std::cout << "Server selected " << serverListRegist[0] <<'\n';
                                                        std::getline(std::cin, userSelectProcess);
                                                            break;
                                                }

                                                else if(userMapProcess == 2){
                                                        std::cout << "Server selected " << serverListRegist[1] <<'\n';
                                                        std::getline(std::cin, userSelectProcess);
                                                            break;
                                                }
                                        }

                                    if(userSelectProcess == cancel || userSelectProcess == "cancel"){

                                        std::cout << "Returning\n" << '\n';
                                        break;

                                    }
                                }
                    break;

                    case 3:     if(userMapProcess == 3){

                                    std::cout << "Selected the map " << userMapSelectionRegist[2] << '\n';
                                    std::cout << "[ ok <" << "> cancel ]" << '\n';
                                    std::getline(std::cin, userSelectProcess);

                                    std::cout << "Choice: ";
                                    std::getline(std::cin, userSelectProcess);


                                    if(userSelectProcess == ok || userSelectProcess == "ok"){
                                        
                                        std::cout <<  "Selected to use the map " << userMapSelectionRegist[2] << '\n' << '\n';
                                        std::cout << userMapSelectionRegist[2] << '\n' << "Map details:\n" << userMapSelectionDescrip[2] << '\n';

                                            do{
                                            std::cout << "Select server: " << '\n' << '\n';
                                            std::cout << "[1]" << serverListRegist[0] << '\n' << '\n' << "[2]" << serverListRegist[1] << '\n' << '\n';

                                            std::cout << "Choice: ";
                                            std::cin >> userMapProcess;

                                                if(userMapProcess > 2 || userMapProcess <= 0){
                                                    std::cout << "Invalid Server; try again.\n";
                                                    continue;
                                                }
                                                
                                            }while(userMapProcess > 2 || userMapProcess <= 0);


                                                if(userMapProcess == 1){
                                                        std::cout << "Server selected " << serverListRegist[0] <<'\n';
                                                        std::getline(std::cin, userSelectProcess);
                                                            break;
                                                }

                                                else if(userMapProcess == 2){
                                                        std::cout << "Server selected " << serverListRegist[1] <<'\n';
                                                        std::getline(std::cin, userSelectProcess);
                                                            break;
                                                }
                                        }

                                    if(userSelectProcess == cancel || userSelectProcess == "cancel"){

                                        std::cout << "Returning\n" << '\n';
                                        break;

                                    }
                                }
                    break;
                }

            }while(userSelectProcess == cancel || userSelectProcess == "cancel");
                                       

     return 0;
}

          int getMapSelection(int userMapSelectionNumSelect[], int userMapSelect){

                     srand(time(NULL));
                
                    int userMapSelectConfig = (rand() % 1000);

                    for(int i = 0; i < userMapSelect; i++){
                        userMapSelectConfig = userMapSelectConfig / userMapSelectionNumSelect[i];
                    }
            
                        return userMapSelectConfig;
                }
