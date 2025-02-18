#include <iostream>  // Para std::cout

using namespace std;

int main() {
    int valor = 10;

    cout << "--- Operaciones secuenciales sobre una variable ---\n";
    cout << "Valor inicial: " << valor << endl;

    // Aumentar en 5
    valor += 5;
    cout << "Aumentar en 5: " << valor << endl;

    // Reducir en 3
    valor -= 3;
    cout << "Reducir en 3: " << valor << endl;

    // Multiplicar por 2
    valor *= 2;
    cout << "Multiplicar por 2: " << valor << endl;

    // Dividir entre 4
    valor /= 4;
    cout << "Dividir entre 4: " << valor << endl;

    return 0;
}
