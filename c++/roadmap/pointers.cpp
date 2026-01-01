#include <iostream>

// Punteros
int main(){
    int x = 125;
    int* p = &x;
    int* q = p;
    *q = 10;
    std::cout << "Donde vive x en memoria: " << &x << std::endl;
    std::cout << "Donde vive p en memoria: " << &p << std::endl;
    std::cout << "Donde vive el valor de p en memoria: " << p << std::endl;
    std::cout << "Valor de x: " << x << std::endl;
    std::cout << "Valor de p: " << p << std::endl;
    std::cout << "Valor de *p: " << *p << std::endl;
    std::cout << "Valor de q: " << q << std::endl;
    std::cout << "Valor de *q: " << *q << std::endl;
    std::cout << "Valor de x: " << x << std::endl;
    return 0;
}