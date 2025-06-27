/*
 * Please write a program that prompts the user to type in an integral value
 * and checks whether the value is even or odd
 *
*/


#include <iostream>

int main(){

    int value {0};
    std::cout << "Please, ender an integral value :" << std::endl;
    std::cin >> value;
    std::cout << value << " is ";
    if (value % 2 == 0) {
        std::cout << "even";
    } else {
        std::cout << "odd";
    }
    std::cout << std::endl;

    return 0;
}
