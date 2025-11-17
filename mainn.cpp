#include <iostream>
#include <thread>
#include <chrono>
#include "pixelgrid.h"

using namespace std;

int main() 
{
    //printAt(5, 3, "We love Eng. Mina", "bright_magenta");
    printAt(5, 3, "We love Eng. Mina", magenta);
    sleep(1);
    //printAt(20, 6, "We love ITI", "bright_cyan");
    printAt(20, 6, "We love ITI", bright_magenta);
    sleep(1);


    //printAt(10, 10, "We love Linux", "magenta");
    printAt(10, 10, "We love Linux", magenta);
    sleep(1);

    clearScreen();

    //printAt(5, 5, "Have a great day!", "bright_yellow");
    printAt(5, 5, "Have a great day!", cyan);
    
    cout << endl;
}


//g++ -Wall -Wextra -g3 mainn.cpp pixelgrid.cpp -o mainn
//./mainn 
//cd /Users/shahd37/Documents/codeblocks/