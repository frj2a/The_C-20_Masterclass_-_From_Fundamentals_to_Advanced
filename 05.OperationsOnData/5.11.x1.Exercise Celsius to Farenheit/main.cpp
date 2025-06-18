#include <iostream>

int main(){

    double celsius{0};
    double farenheit{0};
    std::cout << "Enter a temperature in degrees Celsius: ";
    std::cin >> celsius ;
    farenheit = celsius * 9.0 / 5.0 + 32.0;
    std::cout << "The temperature in degrees Farenheit is : " << farenheit << std::endl;

    return 0;
}
