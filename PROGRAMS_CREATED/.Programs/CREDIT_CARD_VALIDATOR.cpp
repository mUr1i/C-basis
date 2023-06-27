#include <iostream>


int getDigitCard(const int number);
int sumOddDigits(const std::string cardNumber);
 int sumEvenDigits(const std::string cardNumber);
int main() {

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid";
    }
    else{
        std::cout << cardNumber << " is not valid a valid credit card";
    }

    return 0;
}

// functions config

int getDigitCard(const int number){
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
            sum += cardNumber[i] - '0';
    } 

    return sum;
}
int sumEvenDigits(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
            sum += getDigitCard((cardNumber[i] - '0') * 2);
    }
    
    return sum;
}