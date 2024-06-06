#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicializa la semilla de los números aleatorios

    for (int k = 1; k <= 3; k++) {
        cout << "PULSE ENTER para tirar los dados";
        cin.get(); // Espera a que el usuario presione Enter

        int dado1 = rand() % 6 + 1; // Genera un número aleatorio entre 1 y 6
        int dado2 = rand() % 6 + 1; // Genera un número aleatorio entre 1 y 6

        cout << "Dado 1: " << dado1 << endl;
        cout << "Dado 2: " << dado2 << endl;

        if (dado1 == dado2) {
            cout << "MENSAJE DE FELICITACIÓN. GANASTE EN EL INTENTO #" << k << ". Ambos dados sacaron el mismo número!" << endl;
            break; // Abandona el bucle for
        } else if (dado1 + dado2 == 7) {
            cout << "MENSAJE DE FELICITACIÓN. GANASTE EN EL INTENTO #" << k << ". La suma de los dados es 7!" << endl;
            break; // Abandona el bucle for
        } else {
            cout << "No ganaste en el intento #" << k << ". Inténtalo de nuevo." << endl;
        }
    }

    return 0;
}
