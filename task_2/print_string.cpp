#include "print_string.h"
#include <iostream>
#include <string>

void print_String(std::string str) {
    int size = str.length();
    for (int i = 0, i <= size, ++i) {
        std::cout << str[i] << std::endl;
    }
}