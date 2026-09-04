// PRACTICO N.3 (SI-220) - PROBLEMA 13
// ECUACION CUADRATICA - TODOS LOS CASOS POSIBLES (Condicion)
Proceso EcuacionCuadratica
	Definir a, b, c Como Real;
	Definir discriminante, x1, x2, x, parteReal, parteImaginaria Como Real;

	Escribir "Ingrese el coeficiente a (de x^2): ";
	Leer a;

	Escribir "Ingrese el coeficiente b (de x): ";
	Leer b;

	Escribir "Ingrese el coeficiente c (termino independiente): ";
	Leer c;

	Si a = 0 Y b = 0 Y c = 0 Entonces
		Escribir "La ecuacion tiene INFINITAS SOLUCIONES (0 = 0 para cualquier x).";
	SiNo
		Si a = 0 Y b = 0 Y c <> 0 Entonces
			Escribir "La ecuacion NO TIENE SOLUCION (queda ", c, " = 0, lo cual es falso).";
		SiNo
			Si a = 0 Y b <> 0 Entonces
				x <- -c / b;
				Escribir "No es una ecuacion cuadratica (a = 0): se resuelve como ecuacion LINEAL.";
				Escribir "La solucion es: x = ", x;
			SiNo
				discriminante <- b * b - 4 * a * c;

				Si discriminante > 0 Entonces
					x1 <- (-b + RaizCuadrada(discriminante)) / (2 * a);
					x2 <- (-b - RaizCuadrada(discriminante)) / (2 * a);
					Escribir "Discriminante = ", discriminante, " (positivo) -> DOS raices reales distintas.";
					Escribir "x1 = ", x1;
					Escribir "x2 = ", x2;
				SiNo
					Si discriminante = 0 Entonces
						x <- -b / (2 * a);
						Escribir "Discriminante = 0 -> UNA raiz real doble.";
						Escribir "x = ", x;
					SiNo
						parteReal <- -b / (2 * a);
						parteImaginaria <- RaizCuadrada(-discriminante) / (2 * a);
						Escribir "Discriminante = ", discriminante, " (negativo) -> DOS raices complejas conjugadas.";
						Escribir "x1 = ", parteReal, " + ", parteImaginaria, "i";
						Escribir "x2 = ", parteReal, " - ", parteImaginaria, "i";
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinProceso
