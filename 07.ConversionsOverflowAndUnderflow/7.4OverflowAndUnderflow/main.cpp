#include <iostream>

int main(){

    //Overflow 

    unsigned char data {250};

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data; 
    std::cout << "data : " << std::hex <<  static_cast<int>(data) << std::endl; // 255

    ++data;  // Overflow
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 256


    data = 1;

    --data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    --data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    std::cout << std::dec ;

   
    return 0;
}