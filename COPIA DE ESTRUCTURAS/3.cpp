#include <iostream>
#include <cstring>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

Estudiante copiarEstudiante(const Estudiante& est) {
    Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}

int main() {
    // Crear una estructura Estudiante
    Estudiante estudianteOriginal;
    std::cout << "Ingrese el nombre del estudiante: ";
    std::cin.getline(estudianteOriginal.nombre, 50);
    std::cout << "Ingrese la edad del estudiante: ";
    std::cin >> estudianteOriginal.edad;
    std::cout << "Ingrese el promedio del estudiante: ";
    std::cin >> estudianteOriginal.promedio;
