#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int num = std::rand() % 6 + 1;

    switch (num) {
        case 1:
            std::cout << "*" << std::endl;
            break;
        case 2:
            std::cout << "- -" << std::endl;
            break;
        case 3:
            std::cout << "+ + +" << std::endl;
            break;
        case 4:
            std::cout << "@ @ @ @" << std::endl;
            break;
        case 5:
            std::cout << "| | | | |" << std::endl;
            break;
        case 6:
            std::cout << ":-) :-) :-) :-) :-) :-)" << std::endl;
            std::cout << "El usuario ha ganado." << std::endl;
            break;
    }

    return 0;
}
