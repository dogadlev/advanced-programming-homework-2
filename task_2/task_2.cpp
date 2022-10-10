// task_2.cpp : Сплошные ошибки.

/*Синтаксическая ошибка.
Цикл for(){} - между инициализатором, условием и итератором должны быть ; а не ,
* 
Семантическая ошибка.
Цикл for(){} - в цикле выводится символ окончания строки.
Чтобы исправить, необходимо зменить условие на i < size.

Ошибка линковки.
print_string.cpp содержит реализацию функции print_string(), а не printString().
*/
#include "print_string.h"
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::string str = "HELLO";
    printString(str);

    return 0;
}
