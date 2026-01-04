#include <iostream>

double compute(double a, double b, char op){
    switch (op) {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b == 0){
            std::cout << "Division by zero" << std::endl;
            return 0;
        }
        return a / b;
    default:
        std::cout << "Invalid operator" << std::endl;
        return 0;
    }
}

int main(){
    double a, b;
    char op;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter operator [+-*/]: ";
    std::cin >> op;
    std::cout << compute(a, b, op) << std::endl;
    return 0;
}
