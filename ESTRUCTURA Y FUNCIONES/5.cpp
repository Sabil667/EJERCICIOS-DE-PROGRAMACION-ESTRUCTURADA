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


private:
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    // a. Pasar una estructura por valor como argumento
    Estudiante estudianteA;
    strcpy(estudianteA.nombre, "Juan");
    estudianteA.edad = 20;
    estudianteA.promedio = 8.5;
    imprimirEstudiantePorValor(estudianteA);

    std::cout << "\n";

    // b. Pasar una estructura por referencia como argumento
    Estudiante estudianteB;
    strcpy(estudianteB.nombre, "Ana");
    estudianteB.edad = 22;
    estudianteB.promedio = 9.0;
    imprimirEstudiantePorReferencia(estudianteB);

    std::cout << "\n";

    // c. Pasar una estructura por dirección como argumento
    Estudiante estudianteC;
    strcpy(estudianteC.nombre, "Carlos");
    estudianteC.edad = 21;
    estudianteC.promedio = 8.0;
    imprimirEstudiantePorDireccion(&estudianteC);

    std::cout << "\n";

    // d. De la programación funcional a la programación orientada a objetos
    // Crear una lista de estudiantes usando objetos
    std::vector<EstudianteObjeto> listaEstudiantesObjeto;

    // Agregar estudiantes a la lista
    listaEstudiantesObjeto.emplace_back("Laura", 19, 8.8);
    listaEstudiantesObjeto.emplace_back("Pedro", 20, 7.5);
    listaEstudiantesObjeto.emplace_back("Isabel", 21, 9.2);

    // Imprimir información de cada estudiante usando métodos
    for (const EstudianteObjeto& estudianteObjeto : listaEstudiantesObjeto) {
        estudianteObjeto.imprimirInformacion();
        std::cout << std::endl;
    }

    return 0;
}
