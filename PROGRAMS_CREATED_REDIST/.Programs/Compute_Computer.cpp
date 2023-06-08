#include <iostream>

int getComKnowledge(double computerComputeKnowledge[], int computerComputeSize);
int userSelectAttributes(std::string computerAtrributesArray[], int computerFindAtrributes, std::string findElement);
int main() {

        double computerComputeKnowledge[] = {45.78, 32.09, 18.65};
        int computerComputeSize = sizeof(computerComputeKnowledge)/sizeof(computerComputeKnowledge[0]);
        int computerComputeRegist = getComKnowledge(computerComputeKnowledge, computerComputeSize);


        std::string computerAttributesRegist[3];

            computerAttributesRegist[0] = "Metal";
            computerAttributesRegist[1] = "Intelligent";
            computerAttributesRegist[2] = "Man best friend";

        std::cout << "The computer atrributes are: " << '\n';
        
        for(int i = 0; i < sizeof(computerAttributesRegist)/sizeof(computerAttributesRegist[0]); i++){
                    std::cout << computerAttributesRegist[i] << '\n' << " " << '\n';
                }

        std::cout << "The computer has exactly " << computerComputeRegist << " Disk" << '\n';


        int computerFindAtrributes = sizeof(computerAttributesRegist)/sizeof(computerAttributesRegist[0]);
        int computerIndex;
        std::string userComputerPick; 

        std::cout << "Select the computer atrributes: ";
        std::getline(std::cin, userComputerPick);

            computerIndex = userSelectAttributes(computerAttributesRegist, computerFindAtrributes, userComputerPick);

                if(computerIndex != -1){
                    std::cout << "Selected the atrribute " << userComputerPick;
                }
                else{
                    std::cout << userComputerPick << " Not found; invalid atrribute " << '\n';
                }

                
                
        return 0;
}

    int getComKnowledge(double computerComputeKnowledge[], int computerComputeSize){
        
        int computerComputeRegist = 0;

        for(int i = 0; i < computerComputeSize; i++){
            computerComputeRegist = computerComputeRegist + computerComputeKnowledge[i];
        }

        return computerComputeRegist;
    }

    int userSelectAttributes(std::string computerAtrributesArray[], int computerFindAtrributes, std::string findElement){
            
            for(int q = 0; q < computerFindAtrributes; q++){
                    if(computerAtrributesArray[q] == findElement){
                        return q;
                    }
            }

                return -1;
    }
    
  