#include <iostream>  // Para usar std::cout y std::cin

using namespace std;

int main() {
    int a, b;

    // Solicitar al usuario los valores
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;

    // Realizar las operaciones
    cout << "\n--- Operaciones básicas ---\n";
    cout << "Suma: " << a << " + " << b << " = " << (a + b) << endl;
    cout << "Resta: " << a << " - " << b << " = " << (a - b) << endl;
    cout << "Multiplicación: " << a << " * " << b << " = " << (a * b) << endl;

    if (b != 0) {  // Verificar que no se divida entre 0
        cout << "División: " << a << " / " << b << " = " << (a / b) << endl;
        cout << "Módulo: " << a << " % " << b << " = " << (a % b) << endl;
    } else {
        cout << "No se puede dividir entre 0 o calcular el módulo." << endl;
    }

    return 0;
}
