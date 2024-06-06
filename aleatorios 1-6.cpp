#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int num = std::rand() % 6 + 1;

    std::cout << "The random number is: " << num << std::endl;

    if (num % 2 == 1) {
        std::cout << "Felicidades, ganaste" << std::endl;
    } else {
        std::cout << "Perdiste, sigue intentando" << std::endl;
    }

    return 0;
}
