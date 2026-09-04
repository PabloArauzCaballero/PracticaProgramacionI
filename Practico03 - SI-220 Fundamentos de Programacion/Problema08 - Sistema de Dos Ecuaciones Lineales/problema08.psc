// PRACTICO N 3 - SI-220 - PROBLEMA 8 - SISTEMA DE DOS ECUACIONES LINEALES
// Ax + By = C
// Dx + Ey = F
// Resuelve por el metodo de Cramer, contemplando solucion unica,
// infinitas soluciones y sin solucion.
Proceso SistemaDeDosEcuacionesLineales
	Definir A, B, C, D, E, F Como Real;
	Definir det, numX, numY, x, y Como Real;

	Escribir "--- Ecuacion 1: A*x + B*y = C ---";
	Escribir "Ingrese el coeficiente A (de Ax + By = C): ";
	Leer A;
	Escribir "Ingrese el coeficiente B (de Ax + By = C): ";
	Leer B;
	Escribir "Ingrese el termino independiente C (de Ax + By = C): ";
	Leer C;

	Escribir "--- Ecuacion 2: D*x + E*y = F ---";
	Escribir "Ingrese el coeficiente D (de Dx + Ey = F): ";
	Leer D;
	Escribir "Ingrese el coeficiente E (de Dx + Ey = F): ";
	Leer E;
	Escribir "Ingrese el termino independiente F (de Dx + Ey = F): ";
	Leer F;

	det <- (A * E) - (B * D);

	Si det <> 0 Entonces
		x <- ((C * E) - (B * F)) / det;
		y <- ((A * F) - (C * D)) / det;
		Escribir "";
		Escribir "El sistema tiene SOLUCION UNICA.";
		Escribir "x = ", x;
		Escribir "y = ", y;
	SiNo
		numX <- (C * E) - (B * F);
		numY <- (A * F) - (C * D);

		Si numX = 0 Y numY = 0 Entonces
			Escribir "";
			Escribir "El sistema tiene INFINITAS SOLUCIONES (las dos ecuaciones representan la misma recta).";
		SiNo
			Escribir "";
			Escribir "El sistema NO TIENE SOLUCION (las rectas son paralelas y no se cruzan).";
		FinSi
	FinSi
FinProceso
