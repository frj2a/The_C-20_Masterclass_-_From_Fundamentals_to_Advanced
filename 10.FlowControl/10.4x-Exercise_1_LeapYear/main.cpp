#include <iostream>

bool is_leap_year( unsigned int year){
    
    bool is_leap{};
    
    //Don't modify anything above this line
    //Your code goes below this line

    // is_leap = ((year % 4) == 0) && ( ((year % 100) != 0) || ((year % 400) == 0) );

    if ((year % 4) == 0) {
        if ((year % 100) == 0) {
            if ((year % 400) == 0) {
                is_leap = true;
            } else {
                is_leap = false;
            }
        } else {
            is_leap = true;
        }
    } else {
        is_leap = false;
    }

       
    //Your code goes above this line
    //Don't modify anything below this line
    
    return is_leap;
}

int main(){

    std::cout << "2020 - " << std::boolalpha << is_leap_year(2020) << std::endl;
    std::cout << "2021 - " << std::boolalpha << is_leap_year(2021) << std::endl;
    std::cout << "2000 - " << std::boolalpha << is_leap_year(2000) << std::endl;
    std::cout << "2100 - " << std::boolalpha << is_leap_year(2100) << std::endl;
    std::cout << "2200 - " << std::boolalpha << is_leap_year(2200) << std::endl;
    std::cout << "2300 - " << std::boolalpha << is_leap_year(2300) << std::endl;

    return 0;
}
