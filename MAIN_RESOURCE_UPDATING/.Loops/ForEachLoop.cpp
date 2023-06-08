#include <iostream>
#include <cstdio>

int main(){

     // foreach loop = loop that eases the traversal over an
     //                iterable data set

          std::string userNameRegist[] = {"Nomad", "Friend", "Huns", "Rick"};

               /*
               for(int j = 0; j < sizeof(userNameRegist)/sizeof(userNameRegist[0]); j++){
                    std::cout << userNameRegist[j] << '\n';
               }
               */
               
               for(std::string userNameSaveRegist : userNameRegist){
                    std::cout << userNameSaveRegist << '\n';
               }

               int userPointsNumAccum[] = {100, 75, 45, 50, 10, 5, 0};

               for(int userPointsNumAccumSave: userPointsNumAccum){
                    std::cout << userPointsNumAccumSave << "%" << " Points" << '\n';
               }


     return 0;
}