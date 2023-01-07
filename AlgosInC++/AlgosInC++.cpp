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
