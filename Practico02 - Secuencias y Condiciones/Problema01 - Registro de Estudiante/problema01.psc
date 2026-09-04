// PROBLEMA 1 - REGISTRO DE ESTUDIANTE (Algoritmo Secuencial)
//
// Enunciado:
// Una universidad necesita registrar informacion basica de sus estudiantes.
// Desarrollar un algoritmo que permita registrar los siguientes datos de un
// estudiante: Nombre completo, Edad, Carrera, Semestre. El sistema debe
// mostrar en pantalla toda la informacion registrada del estudiante.
//
// ANALISIS:
//   ENTRADA:
//     - Nombre completo del estudiante (texto)
//     - Edad del estudiante (numero entero)
//     - Carrera del estudiante (texto)
//     - Semestre que cursa (numero entero)
//   PROCESO:
//     - Pedir cada dato al usuario y guardarlo en su variable correspondiente.
//   SALIDA:
//     - Mostrar en pantalla, de forma ordenada, los 4 datos registrados.
//
// Tabla de objetos (variables):
//   Nombre     | Tipo     | Descripcion
//   -----------|----------|--------------------------------------------
//   nombre     | Caracter | Nombre completo del estudiante
//   edad       | Entero   | Edad del estudiante en anios
//   carrera    | Caracter | Nombre de la carrera que estudia
//   semestre   | Entero   | Semestre que esta cursando actualmente

Proceso RegistroEstudiante
	Definir nombre, carrera Como Caracter;
	Definir edad, semestre Como Entero;

	Escribir "Nombre completo: ";
	Leer nombre;

	Escribir "Edad: ";
	Leer edad;

	Escribir "Carrera: ";
	Leer carrera;

	Escribir "Semestre: ";
	Leer semestre;

	Escribir "";
	Escribir "--- DATOS REGISTRADOS DEL ESTUDIANTE ---";
	Escribir "Nombre completo: ", nombre;
	Escribir "Edad: ", edad;
	Escribir "Carrera: ", carrera;
	Escribir "Semestre: ", semestre;
FinProceso
