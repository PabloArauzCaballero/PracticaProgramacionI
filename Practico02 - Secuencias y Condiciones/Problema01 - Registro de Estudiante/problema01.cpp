/*
 * PROBLEMA 1 - REGISTRO DE ESTUDIANTE (Algoritmo Secuencial)
 *
 * Enunciado:
 * Una universidad necesita registrar informacion basica de sus estudiantes.
 * Desarrollar un algoritmo que permita registrar los siguientes datos de un
 * estudiante: Nombre completo, Edad, Carrera, Semestre. El sistema debe
 * mostrar en pantalla toda la informacion registrada del estudiante.
 *
 * ANALISIS:
 *   ENTRADA:
 *     - Nombre completo del estudiante (texto, puede tener espacios)
 *     - Edad del estudiante (numero entero)
 *     - Carrera del estudiante (texto, puede tener espacios)
 *     - Semestre que cursa (numero entero)
 *   PROCESO:
 *     - Pedir cada dato al usuario y guardarlo en su variable correspondiente.
 *     - No hay calculos ni decisiones: solo se leen y se guardan los datos.
 *   SALIDA:
 *     - Mostrar en pantalla, de forma ordenada, los 4 datos registrados.
 *
 * Tabla de objetos (variables):
 *   Nombre     | Tipo   | Descripcion
 *   -----------|--------|--------------------------------------------
 *   nombre     | string | Nombre completo del estudiante
 *   edad       | int    | Edad del estudiante en anios
 *   carrera    | string | Nombre de la carrera que estudia
 *   semestre   | int    | Semestre que esta cursando actualmente
 */

#include <iostream> // Para cout, cin (entrada y salida por consola)
#include <string>   // Para poder usar el tipo string (texto)

using namespace std;

int main() {
    // Declaramos las variables que vamos a usar, segun la tabla de objetos.
    string nombre;
    int edad;
    string carrera;
    int semestre;

    // ---------------------------------------------------------------
    // PUNTO PEDAGOGICO IMPORTANTE (muy comun para quienes recien
    // empiezan a programar en C++):
    //
    // Para leer texto que puede tener espacios (como "Juan Perez Lopez"
    // o "Ingenieria de Sistemas") NO se debe usar "cin >> variable",
    // porque "cin >>" solo lee hasta el primer espacio en blanco y
    // corta el resto del texto. Ejemplo: si el usuario escribe
    // "Juan Perez", cin >> nombre solo guardaria "Juan".
    //
    // La solucion es usar "getline(cin, variable)", que lee TODA la
    // linea completa (incluyendo espacios) hasta que el usuario
    // presiona Enter.
    //
    // Ademas, hay otro detalle importante: cuando usamos "cin >> numero"
    // para leer un numero entero, el usuario escribe el numero y luego
    // presiona Enter. Ese "Enter" (salto de linea, '\n') se queda
    // esperando dentro del buffer de entrada. Si despues llamamos a
    // "getline(cin, variable)", esta funcion va a leer inmediatamente
    // ese salto de linea que quedo pendiente y va a pensar que el
    // usuario escribio una linea vacia, saltandose la lectura real.
    //
    // Por eso, cada vez que despues de un "cin >> algo" viene un
    // "getline(...)", debemos "limpiar" ese salto de linea pendiente
    // usando "cin.ignore();" antes de llamar a getline.
    // ---------------------------------------------------------------

    // 1) Pedimos el nombre completo (puede tener espacios -> getline)
    cout << "Nombre completo: ";
    getline(cin, nombre);

    // 2) Pedimos la edad (es un numero -> cin >> sirve perfectamente)
    cout << "Edad: ";
    cin >> edad;

    // Como despues de "cin >> edad" viene un getline (para la carrera),
    // limpiamos el salto de linea pendiente en el buffer antes de leerlo.
    cin.ignore();

    // 3) Pedimos la carrera (puede tener espacios -> getline)
    cout << "Carrera: ";
    getline(cin, carrera);

    // 4) Pedimos el semestre (es un numero -> cin >> sirve perfectamente)
    cout << "Semestre: ";
    cin >> semestre;

    // Mostramos en pantalla toda la informacion registrada del estudiante,
    // cada dato con su etiqueta correspondiente, de forma ordenada.
    cout << "\n--- DATOS REGISTRADOS DEL ESTUDIANTE ---" << endl;
    cout << "Nombre completo: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Carrera: " << carrera << endl;
    cout << "Semestre: " << semestre << endl;

    return 0;
}
