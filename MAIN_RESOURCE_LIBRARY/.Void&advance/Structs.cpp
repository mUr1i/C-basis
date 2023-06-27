#include <iostream>
#include <cstdio>

struct studentInfo{
    std::string name;
    double gpa;
    bool enrolled = true;
};

struct airport1{

    std::string plane;
    std::string location;
    int capacity;

};

struct airport2{

    std::string plane;
    std::string location;
    int capacity;

};

void airportSelectSEA(std::string airportSea);
void airportSelectNA(std::string airportNA);
void SelectAirport(int userSelect, std::string airportSea, std::string airportNA);



int main() 
{

    // struct = A structure thaat group related variables under one name
    //          structs can contaiain many different data types (strings, int, double, bool, etc.)
    //          variables in a struct are known as "members"
    //          members can be access with . "Class Member Access Operator".

        
        studentInfo student1;
        student1.name = "Dave";
        student1.gpa = 3.2;

        studentInfo student2;
        student2.name = "Kyle";
        student2.gpa = 3.2;

        std::cout << student1.name << '\n';
        std::cout << student1.gpa << '\n';
        std::cout << student1.enrolled << '\n';

        std::cout << student2.name << '\n';
        std::cout << student2.gpa << '\n';
        std::cout << student2.enrolled << '\n';
        


            std::string airportSea;
            std::string airportNA;
            int userSelect;   

                std::cout << "Select a airline: " << '\n';
                std::cin >> userSelect;

                    SelectAirport(userSelect, airportSea, airportNA);
        


        
        
    return 0;
}


void airportSelectSEA(std::string airportSea)
{
    airport1 planeSEA;
                planeSEA. plane = "AsiaAir";
                planeSEA. location = "Malaysia";
                planeSEA. capacity = 853;

    std::cout << "Airline: " <<  planeSEA. plane << '\n';
    std::cout << "Location: " << planeSEA. location << '\n';
    std::cout << "Plane capacity: " << planeSEA. capacity << '\n';
}
void airportSelectNA(std::string airportNA)
{
    airport2 planeNA;
        planeNA. plane = "American Airlines";
        planeNA. location = "North America";
        planeNA. capacity = 278;

    std::cout << "Airline: " <<  planeNA. plane << '\n';
    std::cout << "Location: " << planeNA. location << '\n';
    std::cout << "Plane capacity: " << planeNA. capacity << '\n';

}
void SelectAirport(int userSelect, std::string airportSea, std::string airportNA)
{

    

    switch(userSelect){
        case 1:         if(userSelect == 1){
                        std::cout << "Selected the South East Asia Airlines\n" << '\n';
                        airportSelectSEA(airportSea);
                        }
        break;

        case 2:     
                        if(userSelect == 2){
                        std::cout << "Selected the North America Airlines\n" << '\n';
                        airportSelectNA(airportNA);
                        }
        break;
        
        default:    std::cout << "Invalid airline" << '\n';
    }
}
