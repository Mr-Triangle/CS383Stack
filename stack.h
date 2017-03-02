/* Tim Sonnen       Lab #5
 * 9/25/2015
 *
 * stack.h
 *
 */

#include <iostream>

#include "linkedList.h"

class Stack{
public:
    Stack(){
        //Nothing
    }

    void Push( char n );
    int Pop();
    int Peek();
    int IsEmpty();
    void Print();

private:
    LinkedList topPtr;    
};
