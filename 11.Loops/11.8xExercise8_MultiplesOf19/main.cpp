#include <iostream>

int main() {

    const int LowerLimit{100};
    const int UpperLimit{1000};
    int counter{LowerLimit};
    while (counter <= UpperLimit) {
        if ((counter % 19 == 0)) {
            std::cout << counter << " ";
        }
        ++counter;
    }

    return 0;
}

/*

// provided solution

#include <iostream>
#include "exercise.h"

void multiples_of_19(){
    
    //Don't modify anything above this line
    //Your code will go below this line
   unsigned int count{100};
   do{
       if((count % 19)== 0){
           std::cout << count << " ";
       }
       ++ count;

   }while(count < 1001);
   //Your code will go above this line
   //Don't modify anything below this line
}

*/