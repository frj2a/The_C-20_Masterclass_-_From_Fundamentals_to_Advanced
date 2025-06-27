/*
    You'll write a C++ program that prompts the user to enter their location
    point (x, y) .The program will check whether the point is within the
    rectangle centered at (0, 0) with width of 20 and height 10.
*/


#include <iostream>

int main(){

    constexpr int rectWidth {20/2};
    constexpr int rectHeigth {10/2};
    int x{}, y{};
    std::cout << "Welcome to territory control. Please type in your x and y positions." << std::endl;
    std::cout << "Type in your x location:" << std::endl;
    std::cin >> x;
    std::cout << "Type in your y location:" << std::endl;
    std::cin >> y;

    if ((x >= -rectWidth && x <= rectWidth) && (y >= -rectHeigth && y <= rectHeigth)) {
        std::cout << "You are completely surrounded. Don't move!" << std::endl;
    } else {
        std::cout << "You're out of reach!" << std::endl;
    }
    return 0;
}
