#include <iostream>


// Stack: Se libera memoria fuera del scope
void foo(){
    int x = 10;
    std::cout << x << std::endl;
}

// Heap: Se libera memoria con delete
void foo2(){
    int* x = new int(10);
    std::cout << x << std::endl;
    delete x;

    // Si no llamas delete → memory leak
}