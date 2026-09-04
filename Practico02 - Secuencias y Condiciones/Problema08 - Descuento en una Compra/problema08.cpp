/*
    PROBLEMA 8 - DESCUENTO EN UNA COMPRA (Condicion)

    Una tienda aplica descuentos a sus clientes. Si el monto total de la
    compra es mayor a 100 Bs, el cliente recibe un 10% de descuento.
    Desarrollar un algoritmo que solicite el monto de compra, determine
    si corresponde el descuento y muestre el total final a pagar.

    ---------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------
    ENTRADA:
        - monto : el monto total de la compra, ingresado por el usuario.

    PROCESO:
        - Se evalua la condicion "monto > 100".
        - CASO VERDADERO (corresponde descuento):
              montoFinal = monto - (monto * 0.10)
              (se calcula el 10% del monto y se resta al monto original)
        - CASO FALSO (no corresponde descuento):
              montoFinal = monto   (el monto no cambia)

    SALIDA:
        - Un mensaje indicando si se aplico o no el descuento.
        - El total final que el cliente debe pagar (montoFinal).

    ---------------------------------------------------------------------
    TABLA DE OBJETOS (Nombre | Tipo | Descripcion)
    ---------------------------------------------------------------------
    monto       | double | Monto total de la compra, ingresado por el
                            usuario, antes de aplicar cualquier descuento.
    montoFinal  | double | Monto que el cliente debe pagar finalmente,
                            con descuento aplicado o igual al monto
                            original, segun corresponda.
*/

#include <iostream>
using namespace std;

int main()
{
    // -------------------------------------------------------------
    // 1) DECLARACION DE VARIABLES
    //    Se usa "double" porque un monto de dinero puede tener
    //    decimales (por ejemplo 99.50 Bs).
    // -------------------------------------------------------------
    double monto, montoFinal;

    // -------------------------------------------------------------
    // 2) ENTRADA DE DATOS
    //    El flujo de datos comienza aqui: el usuario escribe un
    //    numero por teclado, "cin" lo lee y lo guarda en la
    //    variable "monto". A partir de este punto, "monto" es el
    //    dato con el que trabajara el resto del programa.
    // -------------------------------------------------------------
    cout << "Ingrese el monto de la compra en Bs: ";
    cin >> monto;

    // -------------------------------------------------------------
    // 3) PROCESO: decision sobre el monto ingresado
    //    El dato "monto" viaja hacia una condicion (if). Segun el
    //    resultado de esa condicion, el programa toma uno de dos
    //    caminos posibles (rama verdadera o rama falsa), y en cada
    //    camino se calcula "montoFinal" de forma distinta.
    // -------------------------------------------------------------
    if (monto > 100)
    {
        // Rama VERDADERA: el monto supera los 100 Bs, corresponde
        // el 10% de descuento.
        //   Paso 1: "monto * 0.10" calcula el 10% del monto, es
        //           decir, cuanto dinero se va a descontar.
        //   Paso 2: se resta ese valor al monto original para
        //           obtener el total final a pagar.
        //   En una sola expresion:
        //       montoFinal = monto - (monto * 0.10)
        montoFinal = monto - (monto * 0.10);

        cout << "El monto supera los 100 Bs. Se aplica un descuento del 10%." << endl;
    }
    else
    {
        // Rama FALSA: el monto es 100 Bs o menos, no corresponde
        // descuento. El dato "montoFinal" toma el mismo valor que
        // "monto", sin ninguna modificacion.
        montoFinal = monto;

        cout << "El monto no supera los 100 Bs. No corresponde descuento." << endl;
    }

    // -------------------------------------------------------------
    // 4) SALIDA DE DATOS
    //    Sin importar el camino que se haya tomado, el flujo de
    //    datos vuelve a unirse aqui: "montoFinal" ya tiene su valor
    //    definitivo y se muestra en pantalla al usuario.
    // -------------------------------------------------------------
    cout << "Total final a pagar: " << montoFinal << " Bs" << endl;

    return 0;
}
