//
//  main.cpp
//  structure
//
//  Created by Varun Varia on 1/31/20.
//  Copyright © 2020 Varun Varia. All rights reserved.
//
// Comment added for github testing
#include <iostream>
using namespace std;
struct Rectangle
{
    int length, breadth;
};
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    struct Rectangle r1 = {10,15};
    cout<<"Length of Rectangle is "<<r1.length<<" and breadth is "<<r1.breadth<<endl;
    r1.length = 5;
    cout<<"Length of Rectangle is "<<r1.length<<" and breadth is "<<r1.breadth<<endl;
    return 0;
}
