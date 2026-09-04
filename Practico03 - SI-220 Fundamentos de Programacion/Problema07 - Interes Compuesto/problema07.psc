// PROBLEMA 7 - INTERES COMPUESTO (Practico N.3, SI-220)
// Calcula el interes compuesto I y el monto final que gana un capital C
// en N anios, con una tasa de interes anual T (%).
Proceso InteresCompuesto
	Definir capital, tasaInteres, anios, montoFinal, interesCompuesto Como Real;

	Escribir "Ingrese el capital inicial C (en Bs): ";
	Leer capital;

	Escribir "Ingrese la tasa de interes anual T (en %): ";
	Leer tasaInteres;

	Escribir "Ingrese la cantidad de anios N del periodo: ";
	Leer anios;

	montoFinal <- capital * (1 + tasaInteres / 100) ^ anios;
	interesCompuesto <- montoFinal - capital;

	Escribir "El interes compuesto ganado es: ", interesCompuesto, " Bs";
	Escribir "El monto final acumulado es: ", montoFinal, " Bs";
FinProceso
