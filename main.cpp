
/*
 Name: Alec Garza
 Assignment: Coding 02
 Description: main.cpp file that includes code for testing stack implementation.
 The code generates an array of random numbers and then pushes every number onto the stack until an overflow has occurred. It then removes every item until an underflow has been generated. The peak and isEmpty functions are tested throughout the program.
 
 
 */

#include "main.h"

// main function
int main(){
    
    bool pushStatus = true; //flag to control push test loop
    int testNums[100]; //integer array to hold random numbers
    Stack s1;
    
    //adding random numbers to int array
    for(int i = 0; i <= 100; i++){
        testNums[i] = rand() % 1000 + 1;
    }
    
    //push function test
    while(pushStatus == true){
        for(int i = 0; i <= 100; i++){
            //if push is false then exit while loop due to overflow
            if(s1.push(testNums[i]) == false){
                pushStatus = false;
                std::cout << "Overflow" << std::endl;
            }
            else{
                //if push is true signal item was added to top of stack
                std::cout << "Item added to top of stack" << std::endl;
                //try/catch to display top value
                try
                {
                    std::cout << "Top value: " << s1.peak() << std::endl;
                }
                catch(int){
                    std::cout << "An exception occurred" << std::endl;
                }
            }
        }
    }
    
    
    
    //pop until underflow created
    //test that array is empty every iteration
    while(s1.isEmpty() == false){
        try{
            s1.pop(); //pop top value of stack
            std::cout << s1.peak() << std::endl; //display new top value
        }
        catch(int){
            std::cout << "Underflow has occurred" << std::endl;
        }
    }
    
    
    
    return 0;
}
