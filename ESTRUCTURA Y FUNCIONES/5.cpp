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

// Función que toma una estructura por referencia
void imprimirEstudiantePorReferencia(const Estudiante& est) {
    std::cout << "Nombre: " << est.nombre << "\nEdad: " << est.edad << "\nPromedio: " << est.promedio << std::endl;
}

// Función que toma una dirección a una estructura
void imprimirEstudiantePorDireccion(const Estudiante* est) {
    std::cout << "Nombre: " << est->nombre << "\nEdad: " << est->edad << "\nPromedio: " << est->promedio << std::endl;
}

// Clase Estudiante para la programación orientada a objetos
class EstudianteObjeto {
public:
    // Constructor
    EstudianteObjeto(const char* nombre, int edad, float promedio) {
        strcpy(this->nombre, nombre);
        this->edad = edad;
        this->promedio = promedio;
    }

    // Método para imprimir la información del estudiante
    void imprimirInformacion() const {
        std::cout << "Nombre: " << nombre << "\nEdad: " << edad << "\nPromedio: " << promedio << std::endl;
    }