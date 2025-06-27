#include "exercise.h"

unsigned int sum_up_to_99(){
    unsigned int sum{};
    
    for (int count = 0 ; count <= 99 ; count++) {
        sum += count;
    }

     return sum;
}