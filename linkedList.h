/*  Tim Sonnen        Lab #5
 *  9/24/2015
 *
 *  linkedList.h
 *  Class that holds a linked list
 */

#ifndef LINK_H
#define LINK_H

#include <iostream>
class LinkedList{
private:
    struct Node{
        int info;
        struct Node *next;
    };
    typedef struct Node* NodePtr;

    NodePtr head;

    int count;

public:
    // Constructor
    LinkedList(){
        head = NULL;
        count = 0;
    }

    // Destructor
    ~LinkedList(){
        NodePtr p = head;
        NodePtr n;

        while (p != NULL){
            n = p;
            p = p->next;
            delete n;
        }
    }                                                                                                                      
    // Add a node onto the front of the linked list.
    void AddNode(int x);
    
    // Delete the first node in the lisr.
    void DeleteNode();
 
    // Return the first node found in the list
    int FirstNode();
 
    // Output the values in the nodes, one integer per line. 
    void PrintNode();
 
    //Returns a value if the list is empty
    int IsEmpty();
 
    // Return a count of the number of nodes in the list.
    int Size();
};
#endif
