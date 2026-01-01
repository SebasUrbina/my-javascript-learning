#include <iostream>

int main(){
    int numero;

    std::cout << "Ingrese un numero para iterar: ";
    std::cin >> numero;

    for (int i=0; i < numero; i++){
        std::cout << i << std::endl;
    }
    // Wait 1 second
    return 0;
}

int while_loop(){
    int i = 0;
    while (i < 10){
        std::cout << i << std::endl;
        i++;
    }
    return 0;
}