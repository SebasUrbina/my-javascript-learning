#include <iostream>
#include <vector>

void f(std::vector<int> v){
    std::cout << "Modificando vector original" << std::endl;
    v.push_back(99);
}

int prueba_funcion(){
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
// void funcion_con_constante(const std::vector<int>& v){
//     v.push_back(99); // Error
// }



int sumar(int a, int b){
    return a + b;
}

int pow(int x){
    return x * x;
}

std::string is_even(int x){
    if (x % 2 == 0){
        return "El numero " + std::to_string(x) + " es par";
    } else {
        return "El numero " + std::to_string(x) + " es impar";
    }
}

int main(){
    int a; // -2,147,483,648  a  2,147,483,647
    int b;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;

    int resultado = sumar(a, b);
    std::cout << "La suma es: " << resultado << std::endl;

    int resultado2 = pow(a);
    std::cout << "El cuadrado es: " << resultado2 << std::endl;

    std::cout << is_even(a) << std::endl;
    return 0;
}
    