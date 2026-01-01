#include <iostream>

int edad = 28;

int funcion_ejemplo() {
    if (edad > 18) {
        std::cout << "Eres mayor de edad" << std::endl;
    } else {
        std::cout << "Eres menor de edad" << std::endl; 
    }
    return 0;
}

int main(){
    double numero;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    if (numero > 0) {
        std::cout << "El numero es positivo" << std::endl;
    } else if (numero == 0) {
        std::cout << "El numero es cero" << std::endl;
    } else {
        std::cout << "El numero es negativo" << std::endl;
    }
    return 0;
}