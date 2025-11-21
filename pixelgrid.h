#ifndef TERMINAL_UTILS_H
#define TERMINAL_UTILS_H
#include <string>
using namespace std;
enum colors{ black=30, red, green, yellow, blue, magenta, cyan, white, bright_black=90, bright_red, bright_green, bright_yellow, bright_blue, bright_magenta, bright_cyan, bright_white};
void printAt(int x, int y, const string& text, colors colorName = white);
void clearScreen();
void sleep(int );
#endif
