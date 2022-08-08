// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Circle.h"
#include"point.h"

int main()
{
   // Point p(30, 50);
   // cout << p;

    Point* PointPtr = 0, p(30, 50);
    Circle* circlePtr = 0, c(2.7, 120, 89);
    cout << "\npoint p : " << p << "\nCircle c : " << c << "\n";

    PointPtr = &c;
    cout << "\nCircle c (via *pointer) : " << *PointPtr << "\n";
    circlePtr = static_cast<Circle*>(PointPtr);
    cout << "\nCircle c (via *circlePtr) : " << *circlePtr\
        << "\nArea of c (via circlePtr) :" << circlePtr->calcArea() << "\n";

    PointPtr = &p;
    circlePtr = static_cast<Circle*>(PointPtr);  //if we try 
    cout << "\npoint p (via *circlePtr) : " << *circlePtr
        << "\nArea of object circlePtr ppoints to : " << circlePtr->calcArea() << endl;


    //Point* circlePtr = &p; //we cannot point childclass ptr to hold base class obj
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
