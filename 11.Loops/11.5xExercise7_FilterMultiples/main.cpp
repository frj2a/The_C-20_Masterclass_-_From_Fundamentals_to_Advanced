#include <iostream>
#include <vector>

int main(){

    std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    //Don't modify anything above this line
    //Your code should go below this line
    
    for (auto &element : numbers) {
        if (element % 3 == 0)
            std::cout << element << " ";
    }
    //Your code should go above this line
    //Don't modify anything below this line
    

    return 0;
}


/*
    provided solution

#include <vector>
#include <iostream>
#include "exercise.h"

void print_multiples_of_3(){
    
    
    std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    //Don't modify anything above this line
    //Your code should go below this line
    for(auto& x : numbers ){
        if(x%3 ==0){
            std::cout << x << " ";
        }
    }
    //Your code should go above this line
    //Don't modify anything below this line
    
}
*/