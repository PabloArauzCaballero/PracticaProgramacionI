// PRACTICO N.3 - SI-220 - PROBLEMA 14 - MENU DE RESTAURANTE
// Calcula el total de una compra de hamburguesas, hamburguesas con queso,
// papas fritas y soda, segun las cantidades que pida el cliente.
Proceso MenuDeRestaurante
	Constante PRECIO_HAMBURGUESA <- 3;
	Constante PRECIO_HAMBURGUESA_QUESO <- 5;
	Constante PRECIO_PAPAS <- 2;
	Constante PRECIO_SODA <- 2.5;

	Definir cantHamburguesas, cantHamburguesasQueso, cantPapas, cantSoda Como Entero;
	Definir subtotalHamburguesas, subtotalHamburguesasQueso, subtotalPapas, subtotalSoda, total Como Real;

	Escribir "===================== MENU RESTAURANTE =====================";
	Escribir "Hamburguesas (Precio = ", PRECIO_HAMBURGUESA, " Bs.)";
	Escribir "Hamburguesas con queso (Precio = ", PRECIO_HAMBURGUESA_QUESO, " Bs.)";
	Escribir "Papas fritas (Precio = ", PRECIO_PAPAS, " Bs.)";
	Escribir "Soda (Precio = ", PRECIO_SODA, " Bs.)";
	Escribir "==============================================================";

	Escribir "Ingrese la cantidad de Hamburguesas que desea comprar: ";
	Leer cantHamburguesas;

	Escribir "Ingrese la cantidad de Hamburguesas con queso que desea comprar: ";
	Leer cantHamburguesasQueso;

	Escribir "Ingrese la cantidad de Papas fritas que desea comprar: ";
	Leer cantPapas;

	Escribir "Ingrese la cantidad de Sodas que desea comprar: ";
	Leer cantSoda;

	subtotalHamburguesas <- cantHamburguesas * PRECIO_HAMBURGUESA;
	subtotalHamburguesasQueso <- cantHamburguesasQueso * PRECIO_HAMBURGUESA_QUESO;
	subtotalPapas <- cantPapas * PRECIO_PAPAS;
	subtotalSoda <- cantSoda * PRECIO_SODA;

	total <- subtotalHamburguesas + subtotalHamburguesasQueso + subtotalPapas + subtotalSoda;

	Escribir "";
	Escribir "ITEM", "	", "CANTIDAD", "	", "TOTAL PARCIAL";
	Escribir "Hamburguesas", "	", cantHamburguesas, "	", subtotalHamburguesas, " Bs.";
	Escribir "Hamburguesas con queso", "	", cantHamburguesasQueso, "	", subtotalHamburguesasQueso, " Bs.";
	Escribir "Papas fritas", "	", cantPapas, "	", subtotalPapas, " Bs.";
	Escribir "Soda", "	", cantSoda, "	", subtotalSoda, " Bs.";
	Escribir "TOTAL: ", total, " Bs.";
FinProceso
