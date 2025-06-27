/*
    There's a medical treatment that is only applicable if your age is between
    21 and 39 inclusive (21 and 39 are included in the range) . Your task as a
    C++ developer is to write a program that checks whether the user is
    eligible for the treatment.
*/

#include <iostream>

int main(){

    unsigned int age {0};
    std::cout << "Please type in your age:" << std::endl;
    std::cin >> age;
    if (age < 21) {
        std::cout << "You are too young for the treatment." << std::endl;
    } else if (age > 39) {
        std::cout << "You are too old for the treatment." << std::endl;
    } else {
        std::cout << "You are eligible for the treatment." << std::endl;
    }
    return 0;
}
