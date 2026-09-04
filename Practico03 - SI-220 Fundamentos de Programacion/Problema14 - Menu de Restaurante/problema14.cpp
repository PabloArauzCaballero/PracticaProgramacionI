/*
    PRACTICO N.3 - SI-220 Fundamentos de Programacion
    PROBLEMA 14 - MENU DE RESTAURANTE (Secuencial)

    Enunciado:
    El siguiente es el menu de un restaurante de hamburguesas. Disenese un
    algoritmo para calcular el total de la compra.

        ITEM                              CANTIDAD    TOTAL PARCIAL
        Hamburguesas (3Bs)
        Hamburguesas con queso (5Bs)
        Papas fritas (2Bs)
        Soda (2.5Bs)
        TOTAL

    El cliente puede comprar, en una sola visita, una cantidad (incluso 0)
    de CADA uno de los 4 productos del menu (no es "elegir una sola
    opcion" como en un switch, sino "decir cuantas unidades de cada cosa
    quiero").

    ---------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------
    ENTRADA : cantHamburguesas, cantHamburguesasQueso, cantPapas, cantSoda
              (las 4 cantidades que el cliente quiere de cada producto).
    PROCESO : subtotal de cada producto = cantidad * precio unitario.
              total = suma de los 4 subtotales.
    SALIDA  : una tabla con cada item, su cantidad y su total parcial, y
              al final el TOTAL general de la compra.

    ---------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------
    Nombre                   | Tipo   | Descripcion
    -------------------------|--------|------------------------------------
    PRECIO_HAMBURGUESA       | const double | Precio fijo de una hamburguesa simple (3 Bs)
    PRECIO_HAMBURGUESA_QUESO | const double | Precio fijo de una hamburguesa con queso (5 Bs)
    PRECIO_PAPAS             | const double | Precio fijo de una porcion de papas fritas (2 Bs)
    PRECIO_SODA               | const double | Precio fijo de una soda (2.5 Bs)
    cantHamburguesas          | int    | Cantidad de hamburguesas compradas
    cantHamburguesasQueso     | int    | Cantidad de hamburguesas con queso compradas
    cantPapas                 | int    | Cantidad de porciones de papas compradas
    cantSoda                  | int    | Cantidad de sodas compradas
    subtotalHamburguesas      | double | cantHamburguesas * PRECIO_HAMBURGUESA
    subtotalHamburguesasQueso | double | cantHamburguesasQueso * PRECIO_HAMBURGUESA_QUESO
    subtotalPapas             | double | cantPapas * PRECIO_PAPAS
    subtotalSoda              | double | cantSoda * PRECIO_SODA
    total                     | double | Suma de los 4 subtotales
*/

#include <iostream>
#include <iomanip> // Para setw() y setprecision(), que nos permiten
                    // "alinear" la tabla de salida en columnas.
using namespace std;

int main()
{
    // ---------------------------------------------------------------
    // 1) CONSTANTES: los precios del menu NO cambian mientras el
    //    programa corre, por eso los declaramos como "const double".
    //    Usar const evita que por error alguna linea del codigo
    //    modifique un precio, y deja bien claro para quien lee el
    //    programa que estos valores son fijos (reglas del negocio).
    // ---------------------------------------------------------------
    const double PRECIO_HAMBURGUESA       = 3.0;
    const double PRECIO_HAMBURGUESA_QUESO = 5.0;
    const double PRECIO_PAPAS             = 2.0;
    const double PRECIO_SODA              = 2.5;

    // Cantidades que el cliente va a pedir de cada producto.
    int cantHamburguesas, cantHamburguesasQueso, cantPapas, cantSoda;

    // ---------------------------------------------------------------
    // 2) ENTRADA DE DATOS: se pide, uno por uno, cuantas unidades
    //    quiere el cliente de cada producto del menu. El flujo es
    //    siempre el mismo: "pedimos con cout" -> "leemos con cin" ->
    //    "el valor queda guardado en la variable correspondiente".
    // ---------------------------------------------------------------
    cout << "===================== MENU RESTAURANTE =====================" << endl;
    cout << "Hamburguesas (Precio = " << PRECIO_HAMBURGUESA << " Bs.)" << endl;
    cout << "Hamburguesas con queso (Precio = " << PRECIO_HAMBURGUESA_QUESO << " Bs.)" << endl;
    cout << "Papas fritas (Precio = " << PRECIO_PAPAS << " Bs.)" << endl;
    cout << "Soda (Precio = " << PRECIO_SODA << " Bs.)" << endl;
    cout << "==============================================================" << endl;

    cout << "Ingrese la cantidad de Hamburguesas que desea comprar: ";
    cin >> cantHamburguesas;

    cout << "Ingrese la cantidad de Hamburguesas con queso que desea comprar: ";
    cin >> cantHamburguesasQueso;

    cout << "Ingrese la cantidad de Papas fritas que desea comprar: ";
    cin >> cantPapas;

    cout << "Ingrese la cantidad de Sodas que desea comprar: ";
    cin >> cantSoda;

    // ---------------------------------------------------------------
    // 3) PROCESO: por cada producto, tomamos la cantidad que el
    //    cliente pidio y la multiplicamos por su precio unitario.
    //    Esto nos da el "total parcial" de ese producto. Al final,
    //    sumamos los 4 totales parciales para obtener el TOTAL
    //    general de la compra.
    // ---------------------------------------------------------------
    double subtotalHamburguesas      = cantHamburguesas      * PRECIO_HAMBURGUESA;
    double subtotalHamburguesasQueso = cantHamburguesasQueso * PRECIO_HAMBURGUESA_QUESO;
    double subtotalPapas             = cantPapas             * PRECIO_PAPAS;
    double subtotalSoda              = cantSoda               * PRECIO_SODA;

    double total = subtotalHamburguesas + subtotalHamburguesasQueso
                 + subtotalPapas + subtotalSoda;

    // ---------------------------------------------------------------
    // 4) SALIDA: mostramos una tabla ordenada en columnas usando
    //    setw(ancho) (define el ancho de cada columna) y fixed +
    //    setprecision(2) (para mostrar siempre 2 decimales, como se
    //    espera de un monto de dinero).
    // ---------------------------------------------------------------
    cout << fixed << setprecision(2);
    cout << "\n" << left
         << setw(30) << "ITEM"
         << setw(12) << "CANTIDAD"
         << "TOTAL PARCIAL" << endl;
    cout << "--------------------------------------------------------------" << endl;

    cout << left << setw(30) << "Hamburguesas"
         << setw(12) << cantHamburguesas
         << subtotalHamburguesas << " Bs." << endl;

    cout << left << setw(30) << "Hamburguesas con queso"
         << setw(12) << cantHamburguesasQueso
         << subtotalHamburguesasQueso << " Bs." << endl;

    cout << left << setw(30) << "Papas fritas"
         << setw(12) << cantPapas
         << subtotalPapas << " Bs." << endl;

    cout << left << setw(30) << "Soda"
         << setw(12) << cantSoda
         << subtotalSoda << " Bs." << endl;

    cout << "--------------------------------------------------------------" << endl;
    cout << left << setw(42) << "TOTAL" << total << " Bs." << endl;

    return 0;
}
