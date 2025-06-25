#include <iostream>

#define TEST_1 true
#define TEST_2 false
#define TEST_3 false
#define TEST_4 false
#define TEST_5 false


int main(){

	int number1 {75};
    int number2 {60};
    bool result = (number1 < number2);//Expression yielding the condition
    
    #if TEST_1
	
	std::cout << std::boolalpha << "result : " << result << std::endl; 
	
	std::cout << std::endl;
	std::cout << "free standing if statement" << std::endl;
   
    //if(result){
	if(result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    
    //if(!result){
	if(!(result == true)){
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    #endif


    #if TEST_2
    //Using else

	std::cout << std::endl;
	std::cout << "using the else clause : " << std::endl;
	
	if(result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }
    #endif

    #if TEST_3
	//Use expression as condition directly
    
	std::cout << std::endl;
	std::cout << "Using expression as condition : " << std::endl;
	
	if(number1 < number2){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }
    #endif

    #if TEST_4 || TEST_5
	//Nesting if statements
	std::cout << std::endl;
	std::cout << "Nesting if statements" << std::endl;
	
    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_stop{true};

    #endif
    
    #if TEST_4
    /*
     *      If green : go
     *      If red, yellow : stop
     *      If green and police_stop : stop
     * */
    
     if(red){
         std::cout << "Stop" << std::endl;
     }
     if(yellow){
         std::cout << "Slow down" << std::endl;
     }
	 if(green){
		 std::cout << "Go" << std::endl;
	 }
     #endif

    #if TEST_4 || TEST_5
    std::cout << std::endl;
	 std::cout << "Police officer stops(verbose)" << std::endl;
	 if(green){
         if(police_stop){
             std::cout << "Stop" << std::endl;
         }
         else{
             std::cout << "Go" << std::endl;
         }

     }
     #endif


    #if TEST_5
     std::cout << std::endl;
	 std::cout << "Police officer stops(less verbose)" << std::endl;
	 if(green && !police_stop){
         std::cout << "Go" << std::endl;
     }else{
         std::cout << "Stop" << std::endl;
     }

    #endif

    

    return 0;
}