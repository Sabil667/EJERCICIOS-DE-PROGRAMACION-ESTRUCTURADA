#include <iostream>
#include <cstring>

// Definición de la unión Dato
union Dato {
    int entero;
    float flotante;
    char cadena[50]; // Utilizamos un arreglo de caracteres para la cadena
};

int main() {
    // Crear una variable de la unión Dato
    Dato miDato;

    // Asignar un entero
    miDato.entero = 42;
    std::cout << "Valor entero: " << miDato.entero << std::endl;

    // Asignar un flotante
    miDato.flotante = 3.14f;
    std::cout << "Valor flotante: " << miDato.flotante << std::endl;

    // Asignar una cadena de caracteres
    std::strcpy(miDato.cadena, "Hola, mundo!");
    std::cout << "Valor cadena: " << miDato.cadena << std::endl;

    return 0;
}
