#include <iostream>
#include <cstring>

using namespace std;

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
    cout << "Ingrese el nombre del estudiante: ";
    cin.getline(estudianteOriginal.nombre, 50);
    cout << "Ingrese la edad del estudiante: ";
    cin >> estudianteOriginal.edad;
    cout << "Ingrese el promedio del estudiante: ";
    cin >> estudianteOriginal.promedio;

    // Copiar la estructura Estudiante
    Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);

    // Mostrar la información original y copiada
    cout << "\nInformacion del estudiante original:\n";
    cout << "Nombre: " << estudianteOriginal.nombre << "\nEdad: " << estudianteOriginal.edad
         << "\nPromedio: " << estudianteOriginal.promedio << endl;

    cout << "\nInformacion del estudiante copiado:\n";
    cout << "Nombre: " << estudianteCopia.nombre << "\nEdad: " << estudianteCopia.edad
         << "\nPromedio: " << estudianteCopia.promedio << endl;

    return 0;
}
