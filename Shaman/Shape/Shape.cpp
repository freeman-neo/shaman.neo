// Shape.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Line.h"

int main()
{
    g_color_blue = 2 ;
    DrawLineBlue(0, 0, 10, 10) ;
    g_color_red = 1 ;
    DrawLineRed(0, 0, 10, 0) ;

    Line lineBlue ;         //  color = 2 
    lineBlue.Draw(0, 0, 10, 10) ;

    Line lineRed(LINE_COLOR_RED) ;          //  color = 1
    lineRed.Draw(0, 0, 10, 10) ;

    Line lineThickRed(4, LINE_COLOR_RED) ;
    lineThickRed.Draw(0, 0, 10, 10) ;
    lineThickRed.SetSize(2) ;
    lineThickRed.Draw(0, 0, 10, 10) ;
    lineThickRed.SetSize(20) ;
    lineThickRed.Draw(0, 0, 10, 10) ;
    //...

    int size = lineThickRed.GetSize() ;
    return 0 ;
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
