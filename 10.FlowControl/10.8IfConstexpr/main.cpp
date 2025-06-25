#include <iostream>


int main(){
   
   constexpr bool condition {false};

   if constexpr (condition){
       std::cout << "Condition is true" << std::endl; // this will not even be compiled in the binary
   }else{
       std::cout << "Condition is false" << std::endl;
   }
    return 0;
}