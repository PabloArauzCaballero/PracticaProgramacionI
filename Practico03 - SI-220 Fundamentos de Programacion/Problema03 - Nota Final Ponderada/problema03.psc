// PRACTICO N.3 - SI-220 Fundamentos de Programacion
// PROBLEMA 3 - NOTA FINAL PONDERADA (Secuencial)
// Suma tres parciales (hasta 40 puntos), el examen final (hasta 40)
// y el proyecto (hasta 20) para obtener la nota final sobre 100.
Proceso NotaFinalPonderada
	Definir notaParcial1, notaParcial2, notaParcial3 Como Real;
	Definir examenFinal, proyecto, notaFinal Como Real;

	Escribir "Ingrese la nota del primer examen parcial (sobre 13.33): ";
	Leer notaParcial1;

	Escribir "Ingrese la nota del segundo examen parcial (sobre 13.33): ";
	Leer notaParcial2;

	Escribir "Ingrese la nota del tercer examen parcial (sobre 13.33): ";
	Leer notaParcial3;

	Escribir "Ingrese la nota del examen final (sobre 40): ";
	Leer examenFinal;

	Escribir "Ingrese la nota del proyecto final (sobre 20): ";
	Leer proyecto;

	notaFinal <- (notaParcial1 + notaParcial2 + notaParcial3) + examenFinal + proyecto;

	Escribir "La nota final del alumno es: ", notaFinal, " sobre 100";
FinProceso
