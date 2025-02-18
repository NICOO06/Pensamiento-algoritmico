#include <iostream>  // Para std::cout y std::cin

using namespace std;

int main() {
    float precioOriginal;
    const float descuento = 0.15f;  // Descuento del 15%

    cout << "Ingrese el precio del artículo: ";
    cin >> precioOriginal;

    // Calcular el precio final después del descuento
    float precioFinal = precioOriginal - (precioOriginal * descuento);
    cout << "El precio final después de aplicar el 15% de descuento es: " << precioFinal << endl;

    return 0;
}
