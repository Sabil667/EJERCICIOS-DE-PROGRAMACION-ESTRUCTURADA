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
