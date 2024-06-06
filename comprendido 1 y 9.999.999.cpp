#include <iostream>

int main() {
    int number;
    std::cout << "Ingrese un número entre 1 y 9,999,999: ";
    std::cin >> number;

    if (number < 1 || number > 9999999) {
        std::cout << "Número fuera del rango permitido." << std::endl;
        return 1;
    }

    int digits = 0;
    int temp = number;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    std::cout << "El número " << number << " se compone de " << digits << " cifras." << std::endl;

    return 0;
}
