// PROBLEMA 7 - RESULTADO ACADEMICO (Condicion)
//
// Enunciado:
// En una plataforma educativa se necesita determinar si un estudiante
// aprobo o reprobo una materia. Desarrollar un algoritmo que solicite
// la nota final de un estudiante. Si la nota es mayor o igual a 51, el
// sistema debe mostrar Aprobado. Caso contrario, debe mostrar Reprobado.
//
// ANALISIS:
//   ENTRADA:  notaFinal (Real) - nota final del estudiante.
//   PROCESO:  comparar notaFinal >= 51.
//   SALIDA:   "Aprobado" o "Reprobado".
//
// Tabla de objetos:
// +------------+--------+--------------------------------------------+
// | Nombre     | Tipo   | Descripcion                                 |
// +------------+--------+--------------------------------------------+
// | notaFinal  | Real   | Nota final del estudiante, leida por teclado|
// +------------+--------+--------------------------------------------+

Proceso ResultadoAcademico
	Definir notaFinal Como Real;

	Escribir "Ingrese la nota final del estudiante: " Sin Saltar;
	Leer notaFinal;

	Si notaFinal >= 51 Entonces
		Escribir "Resultado: Aprobado";
	SiNo
		Escribir "Resultado: Reprobado";
	FinSi

FinProceso
