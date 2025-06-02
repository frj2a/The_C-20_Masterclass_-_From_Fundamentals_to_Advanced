#include <iostream>

int addNumbers(int first_param, int second_param) {
    int sum = first_param + second_param;
    return sum;
}

int main(int argc, char **argv) {
    int firstNumber {12};
    int secondNumber {9};

    int sum = firstNumber + secondNumber;

    std::cout << "The sum of " << firstNumber << " and "   << secondNumber << " is: " << sum << std::endl;

    sum = addNumbers(firstNumber, secondNumber);

    sum = addNumbers(34, 7);
    std::cout << "The sum of the two numbers is: " << sum << std::endl;
    std::cout << "The sum of the two numbers is: " << addNumbers(23,8) << std::endl;

    return 0;
}