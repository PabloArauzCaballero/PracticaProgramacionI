// PROBLEMA 5 - TOTAL DE COMPRA (Secuencial)
// Una tienda de utiles escolares vende cuadernos a 12 Bs cada uno.
// Solicitar al usuario la cantidad de cuadernos que desea comprar,
// calcular el total a pagar y mostrar el resultado de la compra.

Proceso TotalDeCompra
	Definir cantidad Como Entero;
	Definir precioCuaderno, total Como Real;

	precioCuaderno <- 12;

	Escribir "Ingrese la cantidad de cuadernos que desea comprar: ";
	Leer cantidad;

	total <- cantidad * precioCuaderno;

	Escribir "Total a pagar: ", total, " Bs";
FinProceso
