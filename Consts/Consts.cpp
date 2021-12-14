// Consts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
// if const on left of * data is const
// if const on right of * pointer is const
int main()
{
    // Example 1
    //const is compile time constraint that object cannot be modified.
    const int i = 9;
    //int i cannot be changed
    string s = to_string(i);
    cout << "Your constant is: " + s << std::endl;

    //Example 2
    const_cast<int&>(i) = 6;
    const int *p1 = &i; // p1 is not a constant, but data is points to is
    //*p1 = 5; will not compile
    cout << "p1 points to value: " + to_string(*p1) << endl; 

    //Example 3
    int* const p2 = nullptr;
    cout << p2 << endl;

    //Example 4
    const int* const p3 = nullptr; //data and pointer constant

    //Example 5
    const int* p4 = &i;
    
    //Example 6
    int j = 0;
    for (int x = 0; x < 5; x++) {
        j++;
    }
    static_cast<const int&>(j);
    cout << "j is: " + to_string(j) << endl;
}


//
