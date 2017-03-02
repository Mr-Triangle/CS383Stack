/* Tim Sonnen        Lab #5
 * 9/25/2015
 *
 * stack.cpp
 *
 */

#include <iostream>

#include "stack.h"

/*Adds a node to the start of the list*/
void Stack::Push( char n ){
    topPtr.AddNode(n);
}

/*Deletes the first node of the list*/
int Stack::Pop(){
    int n;

    n = topPtr.FirstNode();
    topPtr.DeleteNode();

    return n;
}

/*Returns the first node in the list*/
int Stack::Peek(){
    return topPtr.FirstNode();
}

/*Returns if the stack is empty or not*/
int Stack::IsEmpty(){
    return topPtr.IsEmpty();
}

void Stack::Print(){
    topPtr.PrintNode();
}
