#include <iostream>
#include <string>
#include <vector>



int main(){

    /*
    // print data
    std::cout << "Hello C++20" << std::endl;

    int age{21};
    std::cout << "Age : " << age << std::endl;

    std::cerr << "Error message: Something that is not correct is wrong." << std::endl; // error message
    std::clog << "Log message: Something happened." << std::endl;
    */

    /*
    std::string name;
    int age1;
    std::cout << "Plese type your name and age: " << std::endl;
    // std::cin >> name;
    // std::cin >> age1;

    std::cin >> name >> age1;

    std::cout << "Hi " << name << ", you're " << age1 << " years old." << std::endl;
    */

    std::string full_name;
    int age1;
    std::cout << "Plese type your name and age: " << std::endl;
    // std::cin >> name;
    // std::cin >> age1;

    std::getline(std::cin, full_name);
    std::cin >> age1;

    std::cout << "Hi " << full_name << ", you're " << age1 << " years old." << std::endl;

    return 0;
}
