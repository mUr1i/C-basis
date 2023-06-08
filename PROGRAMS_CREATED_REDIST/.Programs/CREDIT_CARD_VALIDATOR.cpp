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

    return 0;
}


int getDigitCard(const int number){
    return 0;
}
int sumOddDigits(const std::string cardNumber){
    return 0;
}
int sumEvenDigits(const std::string cardNumber){
    return 0;
}