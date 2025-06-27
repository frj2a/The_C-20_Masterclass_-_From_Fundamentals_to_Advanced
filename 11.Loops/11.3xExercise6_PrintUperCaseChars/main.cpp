#include <iostream>

int main(){
    for( unsigned char i{0}; i< 255 ; ++i){
            
        //Don't modify anything above thie line
        //Your code goes below this line

        if (i >= 'A' && i < 'Z') {
            std::cout << i << " ";
        } else if (i == 'Z') {
            std::cout << i;
        }

        //Your code goes above this line
        //Don't modify anything after this line
    }
    return 0;
}