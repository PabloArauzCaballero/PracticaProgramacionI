/*
    PROBLEMA 5 - TOTAL DE COMPRA (Secuencial)

    Una tienda de utiles escolares vende cuadernos a 12 Bs cada uno.
    Desarrollar un algoritmo que solicite al usuario la cantidad de
    cuadernos que desea comprar, calcule el total a pagar y muestre
    el resultado de la compra.

    ------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ------------------------------------------------------------
    ENTRADA:
        - cantidad: numero de cuadernos que el usuario desea comprar.
          Es el UNICO dato que se pide por teclado, porque el precio
          del cuaderno ya es conocido de antemano (dato fijo del
          negocio, no algo que el usuario deba escribir).

    PROCESO:
        - total = cantidad * PRECIO_CUADERNO
          Simple multiplicacion: unidades compradas por el precio de
          cada unidad.

    SALIDA:
        - total: monto en bolivianos (Bs) que el cliente debe pagar.

    ------------------------------------------------------------
    TABLA DE OBJETOS
    ------------------------------------------------------------
    Nombre            | Tipo   | Descripcion
    ------------------|--------|-----------------------------------------
    PRECIO_CUADERNO   | double | Constante: precio fijo de un cuaderno
                       |        | (12 Bs). Se declara "const" porque su
                       |        | valor NUNCA cambia durante la ejecucion
                       |        | del programa.
    cantidad          | int    | Dato de ENTRADA: cantidad de cuadernos
                       |        | que el usuario desea comprar. Es entero
                       |        | porque no se venden fracciones de
                       |        | cuaderno.
    total             | double | Dato de SALIDA: resultado del PROCESO,
                       |        | el monto final en Bs que se muestra al
                       |        | usuario.
*/

#include <iostream>
using namespace std;

int main()
{
    // ---------- 1) CONSTANTES Y DECLARACION DE VARIABLES ----------
    // El precio del cuaderno es un dato conocido del negocio (no lo pide
    // el programa). Conviene usar una CONSTANTE con nombre en vez de
    // escribir "12" directo en la formula: si el precio cambia en el
    // futuro, se corrige en un solo lugar, y el nombre PRECIO_CUADERNO
    // deja el codigo mas claro que un numero suelto (12) sin contexto.
    const double PRECIO_CUADERNO = 12.0; // precio en Bs de cada cuaderno

    int cantidad;   // aqui se guardara lo que el usuario escriba (entrada)
    double total;   // aqui se guardara el resultado del calculo (salida)

    // ---------- 2) ENTRADA DE DATOS ----------
    // cout muestra el mensaje en pantalla y cin espera a que el usuario
    // escriba un numero y presione Enter. Ese numero viaja desde el
    // teclado hacia la variable "cantidad".
    cout << "Ingrese la cantidad de cuadernos que desea comprar: ";
    cin >> cantidad;

    // ---------- 3) PROCESO (flujo de datos) ----------
    // La variable "cantidad" (que llego por teclado) se multiplica por
    // la constante "PRECIO_CUADERNO" (que ya estaba fija en el
    // programa). El resultado de esa operacion se guarda en "total",
    // que es la variable que luego mostraremos al usuario.
    total = cantidad * PRECIO_CUADERNO;

    // ---------- 4) SALIDA DE DATOS ----------
    // El valor final calculado sale del programa hacia la pantalla
    // mediante cout, con una etiqueta clara y la unidad monetaria (Bs).
    cout << "Total a pagar: " << total << " Bs" << endl;

    return 0;
}
