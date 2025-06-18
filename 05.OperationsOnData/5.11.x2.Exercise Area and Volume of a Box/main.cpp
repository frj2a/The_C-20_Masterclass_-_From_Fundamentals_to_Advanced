#include <iostream>

int main(){

    double length{1.0};
    double width{1.0};
    double height{1.0};
    std::cout << "length : ";
    std::cin >> length;
    std::cout << "width : ";
    std::cin >> width;
    std::cout << "height : ";
    std::cin >> height;

    std::cout << "The base area is : " << length * width << std::endl;
    std::cout << "The volume is : " << length * width * height << std::endl;
    return 0;
}
