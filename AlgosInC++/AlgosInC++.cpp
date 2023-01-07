// AlgosInC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Ch1.h"

int main()
{
    int chapter = -1;
    while (chapter != 0) {
        std::cout << "Enter a chapter number to open the exercise menu, or 0 to exit\n";
        std::cin >> chapter;
        switch (chapter) {
        case 0: 
            exit(0);
            break;
        case 1:
            Ch1();
            break;
        default:
            std::cout << "Enter a valid chapter number \n";
            chapter = -1;
            break;
        }
    }
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
