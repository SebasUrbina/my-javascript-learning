#include <iostream>
#include <vector>


int main(){

    std::vector<std::string> lista = {"manzana", "banana", "pera"};

    for (const auto& s: lista){
        std::cout << s << std::endl;
    }

    std::cout << "Segunda forma: " << std::endl;

    for (int i=0; i < lista.size(); i++){
        std::cout << lista[i] << std::endl;
    }

    return 0;
}