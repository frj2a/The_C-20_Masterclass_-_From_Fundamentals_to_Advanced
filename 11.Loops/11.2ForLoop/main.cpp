#include <iostream>

#define TEST_1 false
#define TEST_2 false
#define TEST_3 false
#define TEST_4 false    // needs TEST_3 as true
#define TEST_5 false  
#define TEST_6 false
#define TEST_7 false
#define TEST_8 true

int main(){

#if TEST_1
	//Print I love C++ 10 times : The bad way
    
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;

#endif

#if TEST_2
    //for loop : the good way
    for( unsigned int i{0} ; i < 10000 ;++i){
        //Whatever we want the loop to run
        std::cout << i <<  " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
#endif

#if TEST_3
    //Use size_t : a representation of some unsigned int for positive numbers [sizes]
    for(size_t i{0} ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
#if TEST_4
    //sizeof(size_t)
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
#endif
#endif

#if TEST_5
    //Scope of the iterator
    for(size_t i{0} ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    // std::cout << "i : " << i << std::endl;Compiler error : i is not in scope
#endif

#if TEST_6
    //Iterator declared outside the loop
    size_t i{0}; // Iterator defined outside

    for(i ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
#endif

#if TEST_7
    //Leave out the iterator declaration part
    size_t i{0}; // Iterator defined outside

    for(  ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
#endif

#if TEST_8
    //Don't hard code values : BAD!
    const size_t COUNT{100};

    for(size_t i{0} ; i < COUNT ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
#endif

    return 0;
}