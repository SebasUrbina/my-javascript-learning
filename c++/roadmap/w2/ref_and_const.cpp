#include <iostream>
#include <vector>


// NO RECOMENDADO
void print_vector_by_value(std::vector<int> v){
    for (int v : v){
        std::cout << v << " ";
    }
    std::cout << std::endl;
}

void print_vector_by_reference(const std::vector<int>& v){
    for (int v : v){
        std::cout << v << " ";
    }
    std::cout << std::endl;
}