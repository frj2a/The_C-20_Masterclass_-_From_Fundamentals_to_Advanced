/*
  You'll write a C++ console program that lets the user type in a day 
  [1 : Monday,..., 7 : Sunday]. If the day is valid (between 1 and 7)
  we say which day it is, otherwise we print an error message saying
  the day is invalid and terminate the program.
*/



#include <iostream>

int main(){

    int day;
    std::cout << "Enter a day in the range [1 : Monday,..., 7 : Sunday] :" << std::endl;
    std::cin >> day;
    switch(day) {
        case 1:
            std::cout << "Today is Monday. Let's have some fun.";
        break;
        case 2:
            std::cout << "Today is Tuesday. Let's have some fun.";
        break;
        case 3:
            std::cout << "Today is Wednesday. Let's have some fun.";
        break;
        case 4:
            std::cout << "Today is Thursday. Let's have some fun.";
        break;
        case 5:
            std::cout << "Today is Friday. Let's have some fun.";
        break;
        case 6:
            std::cout << "Today is Saturday. Let's have some fun.";
        break;
        case 7:
            std::cout << "Today is Sunday. Let's have some fun.";
        break;
        default:
            std::cout << day << " is not a valid day. Bye!";
    }
    std::cout << std::endl;
    return 0;
}
