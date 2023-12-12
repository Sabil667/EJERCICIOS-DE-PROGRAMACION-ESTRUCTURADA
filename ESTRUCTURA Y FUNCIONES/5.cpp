#include <iostream>
#include <vector>
#include <cstring>

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Función que toma una estructura por valor
void imprimirEstudiantePorValor(Estudiante est) {
    std::cout << "Nombre: " << est.nombre << "\nEdad: " << est.edad << "\nPromedio: " << est.promedio << std::endl;
}
