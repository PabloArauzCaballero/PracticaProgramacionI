// PROBLEMA 3 - PROMEDIO DE NOTAS (Secuencial)
Proceso PromedioDeNotas
	Definir nota1, nota2, nota3, promedio Como Real;

	Escribir "Ingrese la primera nota: ";
	Leer nota1;

	Escribir "Ingrese la segunda nota: ";
	Leer nota2;

	Escribir "Ingrese la tercera nota: ";
	Leer nota3;

	promedio <- (nota1 + nota2 + nota3) / 3.0;

	Escribir "El promedio de las tres notas es: ", promedio;
FinProceso
