#include <iostream>
#include <chrono> // Para medir el tiempo
#include <vector>

int numeros[6] = {1,2,3,4,5,6};


std::string vocals = "aeiouAEIOU";


int count_vocals(std::string word){
    int count = 0;

    for (int i=0; i<word.length(); i++){
        std::cout << word[i] << std::endl;
        std::cout << vocals.find(word[i]) << std::endl;
        if (vocals.find(word[i]) != std::string::npos){
            count ++;
        }
    }
    return count;
}



int main2(){
    auto start = std::chrono::high_resolution_clock::now();
    int a;
    std::cout << "Tamaño de a en bytes: " << sizeof(a) << std::endl;

    std::string word;
    std::cout << "Ingrese una palabra: ";
    std::cin >> word;
    std::cout << "La cantidad de vocales es: " << count_vocals(word) << std::endl;

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Tiempo de ejecucion: " << elapsed.count() << " segundos" << std::endl;


    std::cout << "Donde vive a en memoria: " << &a << std::endl;
    std::cout << "Donde vive word en memoria: " << &word << std::endl;

    int* puntero = &a;
    std::cout << "Donde vive puntero en memoria: " << &puntero << std::endl;
    std::cout << "Donde vive el valor de puntero en memoria: " << puntero << std::endl;
    std::cout << "Valor de puntero: " << *puntero << std::endl;
    return 0;
}

