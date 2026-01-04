#include <iostream>
#include <string>


class Person{
public:
    Person(const std::string& name, int age): name(name), age(age) {
        std::cout << "Se creo a " << name << std::endl;
    }

    void greet() const {
        std::cout << "Hola, mi nombre es " << name << " y tengo " << age << " años." << std::endl;
    }

    bool isAdult() const {
        return age >= 18;
    }
private:
    std::string name;
    int age;
};


class Contador{
public:
    Contador(int inicio = 0) : valor(inicio) {}

    void incrementar(){
        valor++;
    }

    int obtener() const {
        return valor;
    }

private:
    int valor;
};

int main(){
    Person p("Ana", 25);
    p.greet();
    std::cout << "Es mayor de edad: " << p.isAdult() << std::endl;

    Contador c;
    c.incrementar();
    std::cout << "Valor: " << c.obtener() << std::endl;
    return 0;
}