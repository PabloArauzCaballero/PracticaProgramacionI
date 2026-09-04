/*
    PROBLEMA 2 - ESFERA: CIRCUNFERENCIA, AREA Y VOLUMEN (Secuencial)
    Practico N3 - SI-220 Fundamentos de Programacion

    Enunciado:
    Calcular la circunferencia, el area y el volumen de una esfera, si se
    conoce como dato el diametro D.

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : diametro (D), el diametro de la esfera.
    PROCESO : radio = diametro / 2
              circunferencia = 2 * PI * radio
              area           = 4 * PI * radio^2
              volumen        = (4/3) * PI * radio^3
    SALIDA  : circunferencia, area y volumen de la esfera.

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre          | Tipo   | Descripcion
    ----------------|--------|-----------------------------------------------
    PI              | double | Constante matematica (3.14159265359)
    diametro        | double | Diametro de la esfera, dato de entrada
    radio           | double | Mitad del diametro (diametro / 2)
    circunferencia  | double | Perimetro del circulo maximo de la esfera
    area            | double | Area de la superficie de la esfera
    volumen         | double | Volumen (espacio interior) de la esfera
*/

#include <iostream>
#include <iomanip>  // Para std::fixed y std::setprecision (formato de decimales)

using namespace std;

int main()
{
    // Declaramos la constante PI. La marcamos como "const" porque su valor
    // NUNCA debe cambiar durante la ejecucion del programa: es una regla
    // matematica fija, no un dato que dependa del usuario.
    const double PI = 3.14159265359;

    // Variables que vamos a usar segun la tabla de objetos. Todas son
    // "double" (numeros con decimales) porque tanto el diametro como los
    // resultados geometricos casi siempre tienen parte decimal.
    double diametro, radio, circunferencia, area, volumen;

    // ---------------------------------------------------------------
    // ENTRADA: pedimos el UNICO dato que necesitamos, el diametro.
    // El flujo es: el usuario escribe un numero por teclado -> "cin" lo
    // lee -> ese numero queda guardado dentro de la variable "diametro".
    // ---------------------------------------------------------------
    cout << "Ingrese el diametro de la esfera (en las unidades que desee, ej. cm): ";
    cin >> diametro;

    // ---------------------------------------------------------------
    // PROCESO: a partir del diametro (el UNICO dato leido), calculamos
    // TODO lo demas mediante formulas. Observa como el dato "fluye":
    // primero se transforma en "radio", y luego "radio" se reutiliza en
    // las tres formulas siguientes (circunferencia, area y volumen).
    // ---------------------------------------------------------------

    // El radio es la mitad del diametro.
    radio = diametro / 2.0;

    // Circunferencia (perimetro del circulo maximo): 2 * PI * radio.
    circunferencia = 2.0 * PI * radio;

    // Area de la superficie de la esfera: 4 * PI * radio al cuadrado.
    // "radio * radio" es lo mismo que radio^2 (no hace falta pow() para
    // una potencia tan simple, y asi evitamos incluir <cmath>).
    area = 4.0 * PI * radio * radio;

    // Volumen de la esfera: (4/3) * PI * radio al cubo.
    // Usamos "4.0 / 3.0" (division real) en vez de "4 / 3" (que en C++
    // seria division entera y daria 1, un resultado incorrecto).
    volumen = (4.0 / 3.0) * PI * radio * radio * radio;

    // ---------------------------------------------------------------
    // SALIDA: mostramos los tres resultados, cada uno con su etiqueta y
    // con 2 decimales de precision (fixed + setprecision(2)) para que
    // la salida sea clara y facil de leer.
    // ---------------------------------------------------------------
    cout << fixed << setprecision(2);
    cout << "La circunferencia de la esfera es: " << circunferencia << endl;
    cout << "El area de la esfera es: " << area << endl;
    cout << "El volumen de la esfera es: " << volumen << endl;

    return 0;
}
