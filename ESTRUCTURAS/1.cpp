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

    do {
        // Menú de opciones
        printf("\n   Menu  \n");
        printf("1. Agregar Estudiante\n");
        printf("2. Ver Estudiantes\n");
        printf("3. Eliminar Estudiante\n");
        printf("4. Buscar Estudiante\n");
        printf("5. Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregarEstudiante(listaEstudiantes, &numEstudiantes);
                break;
            case 2:
                verEstudiantes(listaEstudiantes, numEstudiantes);
                break;
            case 3:
                eliminarEstudiante(listaEstudiantes, &numEstudiantes);
                break;
            case 4:
                buscarEstudiante(listaEstudiantes, numEstudiantes);
                break;
            case 5:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida. Intentelo de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}
