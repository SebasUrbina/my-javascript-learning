#include <iostream>
#include <vector>

void f(std::vector<int> v){
    std::cout << "Modificando vector original" << std::endl;
    v.push_back(99);
}

int main(){
    std::vector<int> v = {1,2,3};
    f(v);
    std::cout << "Size: " << v.size() << std::endl;
    return 0;
}

// Hay que agregar & para que modifique el vector original
void funcion_con_referencia(std::vector<int>& v){
    v.push_back(99);
}

int main2(){
    std::vector<int> v = {1,2,3};
    funcion_con_referencia(v);
    std::cout << "Size: " << v.size() << std::endl;
    return 0;
}

// Sin & → COPIA
// Con & → REFERENCIA

// Uso de "const"
// “Esta función promete NO modificar esto”
void funcion_con_constante(const std::vector<int>& v){
    v.push_back(99); // Error
}