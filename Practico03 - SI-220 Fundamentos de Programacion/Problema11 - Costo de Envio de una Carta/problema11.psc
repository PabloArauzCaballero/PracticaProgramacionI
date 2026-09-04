// PRACTICO N 3 - SI-220 - PROBLEMA 11 - COSTO DE ENVIO DE UNA CARTA
// Solicita el peso en gramos de una carta y calcula su costo de envio
// segun el tramo de la tabla al que pertenece.
Proceso CostoDeEnvioDeUnaCarta
	Definir peso, costo Como Real;

	Escribir "Ingrese el peso de la carta en gramos: ";
	Leer peso;

	Si peso <= 0 Entonces
		Escribir "Peso invalido: debe ingresar un valor mayor a 0 gramos.";
	SiNo
		Si peso <= 50 Entonces
			costo <- 1.50;
			Escribir "El costo de envio es: Bs. ", costo;
		SiNo
			Si peso <= 100 Entonces
				costo <- 4.00;
				Escribir "El costo de envio es: Bs. ", costo;
			SiNo
				Si peso <= 200 Entonces
					costo <- 6.00;
					Escribir "El costo de envio es: Bs. ", costo;
				SiNo
					Si peso <= 350 Entonces
						costo <- 10.50;
						Escribir "El costo de envio es: Bs. ", costo;
					SiNo
						Si peso <= 500 Entonces
							costo <- 15.00;
							Escribir "El costo de envio es: Bs. ", costo;
						SiNo
							Escribir "NO PUEDE ENVIAR COMO CARTA";
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinProceso
