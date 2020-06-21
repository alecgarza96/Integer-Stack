/*
 Name: Alec Garza
 Assignment: Coding 02
 Description: Implementation file for Stack class. Contains function declaration code.

 
 */

#include "Stack.h"

//class constructor function
Stack::Stack()
{
    top = -1;
}

// function to insert data into stack
bool Stack::push(int x)
{
    bool status;
    
    if(top > SIZE-1)
    {
        status = false;
    }
    else
    {
        a[++top] = x;
        status = true;
    }
    return status;
}

// function to remove data from the top of the stack
int Stack::pop()
{
    if(top < 0)
    {
        throw -1;
    }
    else
    {
        int d = a[top--];
        return d;
    }
}

// function to check if stack is empty
bool Stack::isEmpty()
{
    bool status;
    
    if(top < 0)
    {
        status = true;
    }
    else
    {
        status = false;
    }
    
    return status;
}

//peak function to view top of stack
int Stack::peak(){
    
    if(top < 0)
    {
        throw -1;
    }
    else
    {
        int d = a[top];
        return d;
    }
    
}

