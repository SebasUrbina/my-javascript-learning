#include <iostream>


// Su característica especial, y lo que lo diferencia de todos los demás bucles, es que el código se ejecuta al menos una vez, sin importar si la condición es verdadera o falsa al principio.

// El uso más común es la validación de entradas de usuario o menús interactivos.
int main(){
    int opcion;
    do {
        std::cout << "1. Jugar\n";
        std::cout << "2. Opciones\n";
        std::cout << "3. Salir\n";
        std::cin >> opcion;
    } while (opcion != 3);
    return 0;
}