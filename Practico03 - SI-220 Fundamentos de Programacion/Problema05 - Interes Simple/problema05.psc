// PRACTICO N 3 - SI-220 - PROBLEMA 5 - INTERES SIMPLE (Secuencial)
// Calcula el interes simple ganado por un capital C, a una tasa T (%)
// anual, durante N anios, y el monto final acumulado.
Proceso InteresSimple
	Definir capital, tasaInteres, anios, interesGanado, montoFinal Como Real;

	Escribir "Ingrese el capital inicial (en Bs): ";
	Leer capital;

	Escribir "Ingrese la tasa de interes anual (en %, ej. 5 para 5%): ";
	Leer tasaInteres;

	Escribir "Ingrese el numero de anios que dura la inversion: ";
	Leer anios;

	interesGanado <- capital * (tasaInteres / 100) * anios;
	montoFinal <- capital + interesGanado;

	Escribir "El interes ganado es: ", interesGanado, " Bs";
	Escribir "El monto final (capital + interes) es: ", montoFinal, " Bs";
FinProceso
