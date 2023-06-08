#include <iostream>

using std::cout;
using std::cin;



int main() {

// switch = alternative to using many "else if" statements
// compare one value agaisnt matching cases

/*
int month;
cout << "Enter the month (1-12): ";
cin >> month;
*/
/* When using else if statements.

if(month == 1){
    cout << "January";
}

else if(month == 2){
cout << "Febraury";
}

else if(month == 3){
    cout << "March";
}

else if(month == 4){
    cout << "April";
}

else if(month == 5){
    cout << "May";
}

else{
    cout << "The number you entered is not an available month.";
}
*/

/*
switch(month){
case 1:
cout << "January";
break;
    case 2:
    cout << "February";
    break;
    case 3:
    cout << "March";
    break;
    case 4:
    cout << "April";
    break;
    case 5:
    cout << "May";
    break;
    case 6:
    cout << "June";
    break;
    case 7:
    cout << "July";
    break;
    case 8:
    cout << "August";
    break;
    case 9:
    cout << "September";
    break;
    case 10:
    cout << "October";
    break;
    case 11:
    cout << "November";
    break;
case 12:
cout << "December";
break;

default:
cout << "Plase enter in only numbers (1-12)";
}
*/


char studentGrade;
cout << "What letter grade?:";
cin >> studentGrade;

switch(studentGrade){
    case 'A':
    cout << "Very Good";
    break;
    case 'B':
    cout << "Good";
    break;
    case 'C':
    cout << "Ok";
    break;
    case 'D':
    cout << "Skill issue";
    break;
    case 'F':
    cout << " FAILED";
    break;

default:
cout << "Plese only enter in a letter grade (A-F)";
}













    return 0;
}