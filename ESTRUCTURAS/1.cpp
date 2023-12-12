#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Prototipos de funciones
void agregarEstudiante(struct Estudiante lista[], int *numEstudiantes);
void verEstudiantes(struct Estudiante lista[], int numEstudiantes);
void eliminarEstudiante(struct Estudiante lista[], int *numEstudiantes);
void buscarEstudiante(struct Estudiante lista[], int numEstudiantes);

int main() {
    // Crear una lista de estudiantes
    struct Estudiante listaEstudiantes[50];
    int numEstudiantes = 0;
    int opcion;
