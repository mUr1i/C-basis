#include <iostream>
#include <cstdio>

    using text_t = std::string;
    using std::cout;
    using std::cin;

int main()
{
        std::string userArrayInputOne[4];

            userArrayInputOne[0] = "First";
            userArrayInputOne[1] = "Second";
            userArrayInputOne[2] = "Third";
            userArrayInputOne[3] = "Fourth";

                /* One way to avoid copypasta when outputting array.
                for(int i = 0; i < 3; i++){
                    cout << userArrayInputOne[i] << '\n';
                } 
                    // can't output array objs if you add
                */

                /* Second way for forloop to count automatically an array.
                for(int i = 0; i < sizeof(userArrayInputOne)/sizeof(std::string); i++){
                    cout << userArrayInputOne[i] << '\n';
                }
                */




        char userPointsAccum[] = {'S', 'A', 'B', 'C', 'F'};

                for(int j = 0; j < sizeof(userPointsAccum)/sizeof(char); j++){
                    cout << userPointsAccum[j] << " Points" << '\n';
                }
                
        return 0;
}



