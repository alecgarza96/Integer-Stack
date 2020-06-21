/*
 Name: Alec Garza
 Assignment: Coding 02
 Description: This module is the Stack interface file and contains data members and function prototypes for the Stack class
 
 */

#ifndef CLASSES_STACK_H
#define CLASSES_STACK_H

//Stack class interface
class Stack
{
private:
    
    int top;
    static const int SIZE = 10;
    int a[SIZE];
    
public:
    
    Stack();
    // declaring all the function
    bool push(int);
    int pop();
    bool isEmpty();
    int peak();
};

#endif
