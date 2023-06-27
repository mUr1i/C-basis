#include <iostream>
#include <cstdio>

int main() {

    // fill() = Fills a range of elements with a specified value
    //          fill(begin, end, value)
        
        const int size = 60;    
        std::string userItemRegist[size];

        fill(userItemRegist, userItemRegist + (size/3), "Apple\n" "Red fruit");
            // splits into one ...
        fill(userItemRegist + (size/3), userItemRegist + (size/3)*2, "Banana\n" "Yellow fruit");
            // splits into two ...
        fill(userItemRegist + (size/3)*2, userItemRegist + size, "Grapen\n" "Purple fruit");
            // splits into three ...

        for(std::string userItemRegistSaved : userItemRegist){
                std::cout <<userItemRegistSaved << '\n';
            }
        
        const int userSize = 6;
        std::string userPoints[userSize];
        
        fill(userPoints, userPoints + (userSize/3), "A");
        fill(userPoints + (userSize/3), userPoints + (userSize/3)*2, "B");
        fill(userPoints + (userSize/3)*2, userPoints + userSize, "C");
        
        for(std::string userPointsRegist : userPoints){
            std::cout << userPointsRegist << '\n';
            }

         





    return 0;
}

