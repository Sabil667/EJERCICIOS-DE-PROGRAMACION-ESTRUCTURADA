#include <iostream>
#include <cstring>

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Crear un alias para la estructura Estudiante usando typedef
typedef Estudiante MiEstudiante;

MiEstudiante copiarEstudiante(const MiEstudiante& est) {
    MiEstudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}

int main() {
    // Crear una instancia de la estructura Estudiante
    MiEstudiante estudianteOriginal;
    std::cout << "Ingrese el nombre del estudiante: ";
    std::cin.getline(estudianteOriginal.nombre, 50);
    std::cout << "Ingrese la edad del estudiante: ";
    std::cin >> estudianteOriginal.edad;
    std::cout << "Ingrese el promedio del estudiante: ";
    std::cin >> estudianteOriginal.promedio;

    // Copiar la estructura Estudiante
    MiEstudiante estudianteCopia = copiarEstudiante(estudianteOriginal);

    // Mostrar la información original y copiada
    std::cout << "\nInformacion del estudiante original:\n";
    std::cout << "Nombre: " << estudianteOriginal.nombre << "\nEdad: " << estudianteOriginal.edad
              << "\nPromedio: " << estudianteOriginal.promedio << std::endl;

    std::cout << "\nInformacion del estudiante copiado:\n";
    std::cout << "Nombre: " << estudianteCopia.nombre << "\nEdad: " << estudianteCopia.edad
              << "\nPromedio: " << estudianteCopia.promedio << std::endl;

    return 0;
}
