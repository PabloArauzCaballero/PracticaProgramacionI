// PROBLEMA 2 - ESFERA: CIRCUNFERENCIA, AREA Y VOLUMEN (Secuencial)
// Practico N3 - SI-220 Fundamentos de Programacion
// Solicita el diametro de una esfera y calcula su circunferencia,
// area y volumen.
Proceso EsferaCircunferenciaAreaVolumen
	Definir PI Como Real;
	Definir diametro, radio, circunferencia, area, volumen Como Real;

	PI <- 3.14159265359;

	Escribir "Ingrese el diametro de la esfera: ";
	Leer diametro;

	radio <- diametro / 2;

	circunferencia <- 2 * PI * radio;
	area <- 4 * PI * radio^2;
	volumen <- (4/3) * PI * radio^3;

	Escribir "La circunferencia de la esfera es: ", circunferencia;
	Escribir "El area de la esfera es: ", area;
	Escribir "El volumen de la esfera es: ", volumen;
FinProceso
