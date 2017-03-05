/* Tim Sonnen         Lab #5
 * 9/24/2015
 *
 * testStack.cpp
 *
 * This program creates a stack.
 */

#include <iostream>

using namespace std;

#include "stack.h"

void reverseStack(int arr[], Stack <int> &St);              // Should pass iStack by refrence, and reverse by refrence.

main()
{
   int reverse[5];                                         // Array to hold reverse string of intigers
   
   Stack iStack;

   cout << "Pushing integers onto iStack" << endl;

   for( int i = 0 ; i < 5 ; i++ ) {
      iStack.Push(i);       // push items onto the stack
      cout << i << ' ';
   }
   cout << endl;
   
   cout << "Contents of iStack" << endl;
   iStack.Print();          // output the stack contents


   cout << endl << "Popping integers from iStack" << endl;

   while( !iStack.IsEmpty() )
      //cout << iStack.Pop() << ' ';
      reverseStack (&reverse, &iStack);
      //for (j = 0; j < 5; j++)
      //{
         //reverse[j] = iStack.Pop();
         //cout << reverse[j] << ' ';
      //}                                            // reverse should now hold the stack in reverse order. Can print if needed.
   //cout << endl;
   iStack.Print();          // output the stack contents


   if( iStack.IsEmpty() )
       cout << "The stack is empty" << endl;
   else
       cout << "The stack is not empty" << endl;

   return 0;
}

void reverseStack (int arr[], Stack <int> &St)
{
   for (j = 0; j < 5; j++)
   {
      arr[j] = St.Pop();
      cout << arr[j] << ' ';
   }
   cout << endl;
}
