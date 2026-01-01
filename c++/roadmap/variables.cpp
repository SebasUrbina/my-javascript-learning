// Variables y tipos

#include <iostream>

int edad = 25;
double pi = 3.14159;
bool activo = true;
char letra = 'h'; // In C++, single quotes ' ' are used for single characters only (e.g., 'a', 'Z', '5')
std::string nombre = "Sebastian";
std::string texto = "hola mi nombre es seba"; // In C++, double quotes " " are used for strings

auto nombre = "Sebastian";

int main() {
    std::cout << "Hola, mundo!\nMi edad es " << edad << std::endl;
    std::cout << "Pi: " << pi << std::endl;
    std::cout << "Activo: " << activo << std::endl;
    std::cout << "Letra: " << letra << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Texto: " << texto << std::endl;
    return 0;
}

// Esto es solo compatible de c++20
// #include <format>
// int main_with_better_print() {
//     std::cout << std::format("Hola {}, tienes {} años", nombre, edad) << "\n";
//     return 0;
// }

// Se puede utilisar using namespace std; que sería un análogo en python para decir from std import *
// Sin embargo, no es recomendado por choque de nombres


// Cosas importantes
// 1. Se compila: g++ mi_script.cpp -o mi_script
// 2. Se ejecuta: ./mi_script

// Tipo de datos (SON OBLIGATORIOS). Nada es dinámico por defecto.
// int, double, bool, char. auto se encarga de inferir el tipo

// en python: lst = [1,2,3] (es muy similar a un vector de cpp)
// en cpp: vector<int> lst = {1,2,3};
// Contiguo en memoria, tamaño dinámico
