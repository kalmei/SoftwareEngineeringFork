#include <iostream>
#include "Rect.h"
using namespace COMP1000;

Rect r3(5.0f, 6.0f, "r3");

void demo() {
    Rect r0(3.0f, 10.0f,"r0");
    r0.display();
}

int main()
{
    //Using C++ class
    Rect r1(2.0, 3.0, "r1");
    r1.display();

    //Call demo - which creates a temporary Rect
    demo();

    return 0;
}

// T1) The destructor runs for r0 at the end of demo() function at line 10. When stepping into line 10 the destructor runs for r0.
// T2) When stepping into return0; at line 21 the destructor runs for r1.
// Note: The destructor runs again for the third time in main when stepping into line 22. This seems to close the file again. 
// T3) Breakpoint for line 5 is reached first r3 is read properly and values are updated.
// T4) 

// Q1) Whys is the desturctor running for r0 first instead of r1 ??
//string Speculation_Q1 = "based on when the destructors run within the code, the order in which the code is stepping into decides the 
//                         destructor's sequence."
// string Answer_to_Q1;
// if (Speculation_Q1 = true){
//      Answer_to_Q1 = Speculation_Q1;
//      }
// else {
//      cout << Answer_to_Q1 << endl;
//      }
// Running code.....
// Speculation_Q1 is true, Answer_to_Q1 has the same value.

//Q2) For what reason is the file closing again at the end of main shouldnt it only do it twice for r1 and r0??
//Speculation --> is it just a simple outputstream.close(); action that takes place but used as a function? 
//                in FileI/O labs closing the file was performed after the data was read/written/modified, 
//                is it the same thing here since we dont need the file to be opened anymore?