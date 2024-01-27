#include <iostream>
#include "functions/functions.h"

int main() {
    int menu;
    while (true) {
            print_menu();
            menu = input_int();
            switch (menu) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    return 0;
                default:
                    std::cout << "Input correct value";
            }
    }
}
