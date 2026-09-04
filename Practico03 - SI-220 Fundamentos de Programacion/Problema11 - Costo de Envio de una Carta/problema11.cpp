/*
    PRACTICO N 3 - SI-220 Fundamentos de Programacion
    PROBLEMA 11 - COSTO DE ENVIO DE UNA CARTA (Condicion)

    Enunciado:
    Dado el peso P en gramos de una carta, hacer un programa para calcular
    el costo de enviarla, de acuerdo a la siguiente tabla:
        Si   0  < P <= 50       entonces costo Bs. 1.50
        Si   50 < P <= 100      entonces costo Bs. 4.00
        Si   100 < P <= 200     entonces costo Bs. 6.00
        Si   200 < P <= 350     entonces costo Bs. 10.50
        Si   350 < P <= 500     entonces costo Bs. 15.00
        Si   P > 500            entonces mensaje "NO PUEDE ENVIAR COMO CARTA"

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : peso (peso de la carta, en gramos).
    PROCESO : comparar "peso" contra los limites superiores de cada tramo de
              la tabla (50, 100, 200, 350, 500) para decidir a que tramo
              pertenece, y asignarle el costo correspondiente. Si el peso es
              menor o igual a 0 no es un peso valido, y si supera 500 gramos
              no puede enviarse como carta.
    SALIDA  : el costo en bolivianos, o el mensaje que corresponda cuando el
              envio no es posible o el peso ingresado no es valido.

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre  | Tipo   | Descripcion
    --------|--------|---------------------------------------------------
    peso    | double | Peso de la carta en gramos, ingresado por el usuario
    costo   | double | Costo de envio en Bs, calculado segun el tramo
*/

#include <iostream>
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES.
    // Usamos "double" para el peso porque el usuario podria ingresar valores
    // con decimales (ej. 49.5 gramos), y "costo" tambien es double porque
    // los precios de la tabla tienen decimales (1.50, 10.50, etc.).
    double peso, costo;

    // 2) ENTRADA DE DATOS.
    cout << "Ingrese el peso de la carta en gramos: ";
    cin >> peso;

    // 3) PROCESO: para clasificar el peso en uno de los tramos de la tabla
    // usamos una CASCADA de "else if". La idea clave de una cascada es que
    // cada condicion solo se evalua si TODAS las anteriores fueron falsas,
    // asi que dentro de cada bloque ya sabemos que el peso es MAYOR que el
    // limite del bloque anterior.
    //
    // IMPORTANTE (nota de diseno): el enunciado original tiene un pequeno
    // vacio en la tabla, porque no deja claro que pasa exactamente cuando
    // el peso es igual a 50, 100, 200 o 350 (un tramo dice "< 50" y el
    // siguiente "50 < P"). Para que NINGUN peso positivo quede sin
    // clasificar, en este programa cada tramo se prueba con su LIMITE
    // SUPERIOR usando "<=" (por ejemplo "peso <= 50" cubre TODO el primer
    // tramo, incluyendo el valor exacto 50). Asi la cascada queda completa
    // y sin huecos, sin cambiar el costo de ningun caso claramente definido
    // en el enunciado.
    if (peso <= 0)
    {
        // Un peso cero o negativo no tiene sentido fisico: no es un dato
        // valido, asi que avisamos al usuario en vez de calcular un costo.
        cout << "Peso invalido: debe ingresar un valor mayor a 0 gramos." << endl;
    }
    else if (peso <= 50)
    {
        costo = 1.50;
        cout << "El costo de envio es: Bs. " << costo << endl;
    }
    else if (peso <= 100)
    {
        costo = 4.00;
        cout << "El costo de envio es: Bs. " << costo << endl;
    }
    else if (peso <= 200)
    {
        costo = 6.00;
        cout << "El costo de envio es: Bs. " << costo << endl;
    }
    else if (peso <= 350)
    {
        costo = 10.50;
        cout << "El costo de envio es: Bs. " << costo << endl;
    }
    else if (peso <= 500)
    {
        costo = 15.00;
        cout << "El costo de envio es: Bs. " << costo << endl;
    }
    else
    {
        // peso > 500: segun el enunciado, ya no puede enviarse como carta.
        cout << "NO PUEDE ENVIAR COMO CARTA" << endl;
    }

    return 0;
}
