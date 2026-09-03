#include <iostream>
using namespace std;

/*
    
*/

int main()
{
    
    // DECLARACION DE VARIABLES: Ponerles un nombre y un tipo (dato)
    /*
        Tipos de datos PRIMITIVOS:
            - INT: Valores que no tienen decimales
            - DOUBLE: Valores decimales
            - CHAR: Caracter suelto
            - STRING: Cadena de caracteres
            - BOOL: Verdadero o falso
    */
    
    double consumo, tarifa = 0;
    bool esBasica, esMedia, esAlta, esIndustrial, esCasoConsumoCero, esCasoInvalido;

    // LECTURA DE VALORES
    cout<<"Ingresar consumo de energia: ";
    cin>>consumo;

    // Asinacion de casos
    esCasoInvalido = consumo < 0; // false
    esCasoConsumoCero = consumo == 0; // false
    esBasica = consumo > 0 && consumo <= 100;    // true
    esMedia = consumo > 100 && consumo <= 300; // false    
    esAlta = consumo > 300 && consumo <= 600; // false
    esIndustrial = consumo > 600; // false
    
    /* 
        Estructura CONDICIONAL: Si pasa algo entonces ejecutamos algo.
        Lo usamos el if cuando necesita preguntar dos posibilidades que pase algo o que no pase y  cada opcion tiene una consecuencia distinta.
    */
    if(esCasoInvalido){
        cout<<"Los valores ingresados son INCORRECTOS. Debe ingresar numeros mayores o iguales a cero."<<endl;
    }
    
    if(esCasoConsumoCero){
        cout<<"SIN CONSUMO REGISTRADO"<<endl;
    }
    
    if(esBasica){
        tarifa = 0.3 * consumo; 
    }
    
    if(esMedia){
        tarifa = 0.5 * consumo;
    }
    
    if(esAlta){
        tarifa = 0.75 * consumo;
    }

    if(esIndustrial){
        tarifa = 1.10 * consumo;
    }
    
    
    if(!esCasoInvalido && !esCasoConsumoCero){
        cout<<"El monto a pagar es: "<<tarifa<<endl;
    }

    return 0;
}