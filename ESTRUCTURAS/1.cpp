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


// Función para agregar un estudiante a la lista
void agregarEstudiante(struct Estudiante lista[], int *numEstudiantes) {
    if (*numEstudiantes < 50) {
        struct Estudiante nuevoEstudiante;

        printf("Ingrese el nombre del estudiante: ");
        scanf("%s", nuevoEstudiante.nombre);
        printf("Ingrese la edad del estudiante: ");
        scanf("%d", &nuevoEstudiante.edad);
        printf("Ingrese el promedio del estudiante: ");
        scanf("%f", &nuevoEstudiante.promedio);

        lista[*numEstudiantes] = nuevoEstudiante;
        (*numEstudiantes)++;

        printf("Estudiante agregado con éxito.\n");
    } else {
        printf("La lista de estudiantes está llena. No se pueden agregar mas estudiantes.\n");
    }
}

// Función para ver la lista de estudiantes
void verEstudiantes(struct Estudiante lista[], int numEstudiantes) {
    if (numEstudiantes > 0) {
        printf("\n--- Lista de Estudiantes ---\n");
        for (int i = 0; i < numEstudiantes; i++) {
            printf("Estudiante %d:\n", i + 1);
            printf("Nombre: %s\n", lista[i].nombre);
            printf("Edad: %d\n", lista[i].edad);
            printf("Promedio: %.2f\n", lista[i].promedio);
            printf("---------------------------\n");
        }
    } else {
        printf("No hay estudiantes en la lista.\n");
    }
}

// Función para eliminar un estudiante de la lista
void eliminarEstudiante(struct Estudiante lista[], int *numEstudiantes) {
    if (*numEstudiantes > 0) {
        int indice;

        // Mostrar la lista actual de estudiantes
        verEstudiantes(lista, *numEstudiantes);

        // Solicitar al usuario el índice del estudiante a eliminar
        printf("Ingrese el número del estudiante que desea eliminar: ");
        scanf("%d", &indice);

        // Validar el índice ingresado
        if (indice >= 1 && indice <= *numEstudiantes) {
            // Desplazar los elementos a la izquierda para eliminar el estudiante
            for (int i = indice - 1; i < *numEstudiantes - 1; i++) {
                lista[i] = lista[i + 1];
            }

            (*numEstudiantes)--;
            printf("Estudiante eliminado con éxito.\n");
        } else {
            printf("Índice no válido. Inténtelo de nuevo.\n");
        }
    } else {
        printf("No hay estudiantes en la lista. No se puede eliminar.\n");
    }
}


