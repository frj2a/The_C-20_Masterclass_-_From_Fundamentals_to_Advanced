#include <iostream>

int data[] {1,2,4,5,1,8,2,3,6,1,4,2};
const int collection_size{12};

void unique_numbers( int numbers[], unsigned int collection_size){
    
   //Don't modify anthing above this line
   //Your code should go below this line
    
    int clean_numbers[collection_size]{0};
    int clean_numbers_size {1};
    clean_numbers[0] = numbers[0];
    for (int i{1}; i < collection_size ; i++) {
        bool duplicate = false;
        for (int j{0}; j < clean_numbers_size ; j++) {
            if (numbers[i] == clean_numbers[j]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            clean_numbers[clean_numbers_size] = numbers[i];
            clean_numbers_size++;
        }
    }
    std::cout << "The collection contains " << clean_numbers_size + 1 << " unique numbers, they are : ";
    for (int i{0} ; i <clean_numbers_size ; i++) {
        std::cout << clean_numbers[i] << " " ;
    }
   
  
  //Your code should go above this line
  //Don't modify anything below this line
    
    
    
    
}

int main(){

    unique_numbers(data, collection_size);

    return 0;
}



/*

Solution provided by the instructor:


void unique_numbers( int numbers[], unsigned int collection_size) {
    
    //Don't modify anthing above this line
    //Your code should go below this line

    //The array that is going to store unique data  
    int unique_data [20];


    unsigned int unique_counter{};//Initialized to zero. Counts the elements we have in 
                                //the unique_data array

    for(unsigned int i{}; i < collection_size; ++i) {

            bool already_in{false};

            //See if  the element is not already in our unique_data
            for(unsigned int j{};j < unique_counter; ++j) {
                
                //If we find that the element is already in our unique_data array,
                //we say that the element at current iteration is a duplicate and
                //break out of the loop
                if(unique_data[j] == numbers[i]){
                    already_in = true;
                    break;
                }
            }

            //If the element isn't already in, we put it in and increment the counter
            //Please understand the use of the postfix operator here.
            if(!already_in){
            unique_data[unique_counter++] = numbers[i];
        }
    
    }

    std::cout << "The collection contains " << unique_counter << " unique numbers, they are : ";

    for(unsigned int i{};i < unique_counter ; ++i){
        std::cout << unique_data[i] << " ";
    }    
  
  //Your code should go above this line
  //Don't modify anything below this line
    
    
}

*/