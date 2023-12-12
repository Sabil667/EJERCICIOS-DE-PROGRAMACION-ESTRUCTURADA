#include <iostream>
#include <cstring>

using namespace std;

// Definición de la unión Dato
union Dato {
    int entero;
    float flotante;
    char cadena[50]; // Utilizamos un arreglo de caracteres para la cadena
};

int main() {
    // Crear una variable de la unión Dato
    Dato miDato;

    // Asignar un entero
    miDato.entero = 25;
    cout << "Valor entero: " << miDato.entero << endl;

    // Asignar un flotante
    miDato.flotante = 3.14f;
    cout << "Valor flotante: " << miDato.flotante << endl;

    // Asignar una cadena de caracteres
    strcpy(miDato.cadena, "Hola, mundo!");
    cout << "Valor cadena: " << miDato.cadena << endl;

    return 0;
}
