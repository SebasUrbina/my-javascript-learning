#include <iostream>
#include <map>
#include <unordered_map>


// std::unordered_map
// Inserción: O(1)
// Búsqueda: O(1)
// Eliminación: O(1)
// ⚠️ En el peor caso puede ser O(n), pero es raro.
// 📐 Características
// No mantiene orden
// Mucho más rápido para accesos
// Usa más memoria
// Depende de una función hash
// ✅ Cuándo usarlo
// Solo te importa rapidez
// No necesitas orden
// Uso tipo diccionario/cache

// std::map
// Inserción: O(log n)
// Búsqueda: O(log n)
// Eliminación: O(log n)
// 📐 Características
// Mantiene orden
// Mucho más lento para accesos
// Usa menos memoria
// No depende de una función hash
// ✅ Cuándo usarlo
// Necesitas orden
// Uso tipo diccionario/cache

int main(){

    std::unordered_map<std::string, int> map;
    std::map<std::string, int> map2;

    // std::string text;
    // std::cout << "Ingrese texto: ";
    // std::cin >> text;

    map["hola"] = 1;
    map["adios"] = 2;
    map["hola"] = 3;

    map2["hola"] = 1;
    map2["adios"] = 2;
    map2["hola"] = 3;

    for (auto& [key, value] : map){
        std::cout << key << ": " << value << std::endl;
        map["hola"]++;
    }

    std::cout << "----------------" << std::endl;
    for (auto& [key, value] : map2){
        std::cout << key << ": " << value << std::endl;
        map2["hola"]++;
    }

    return 0;
}