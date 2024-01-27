#include <iostream>
#include "functions.h"
#include <limits>

int input_int(){
    int value;
    while (true) {
        if (std::cin >> value) {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;

        } else if (std::cin.eof()) {
            std::cout << "End of file (EOF) reached. The program is completed." << std::endl;
            exit(0);
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Input Error. Please enter an int." << std::endl;
        }
    }
    return value;
}

void print_menu() {
    std::cout  <<"\n1) install package \n";
    std::cout  << "2) delete package \n" ;
    std::cout  << "3) clean \n" ;
    std::cout  << "4) update \n" ;
    std::cout  << "4) exit \n" ;
    std::cout  << "Your option: " ;
}

void install_package(){

}

void delete_package(){

}

void clean(){

}

void update(){

}