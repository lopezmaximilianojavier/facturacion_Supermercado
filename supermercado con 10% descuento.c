#include <stdio.h> //Biblioteca
#include <conio.h>

//Variables
int cantidadProducto;
float precioDelProducto, total, totalConDescuento;
char formasDePago = 'e' || 'd'||'c';
float BONIFICACION = 0;
float descuento = 0.90;

//Procedimiento
void interaccionCliente();
void operacion();
void calcularBonificacion();
void precioTotal();
void graciasPorSuCompra();

int main ()
{
	interaccionCliente();
	operacion();
	precioTotal();
	calcularBonificacion();
	graciasPorSuCompra();

	
	getch();
	return 0;
}

//implemantación
void interaccionCliente()
{
	printf("\t -----Supermercado-----\n");
	
	printf("\nIngrese la Cantidad de Productos: ");
	scanf("%d",&cantidadProducto);
	printf("Ingrese el precio del Producto: ");
	scanf("%f",&precioDelProducto);
	printf("Formas de pago disponible: c-Tarjeta de Credito / d-Tarjeta de Debito / e-Efectivo: ");
	scanf("%s",&formasDePago);
}

void operacion()
{
	total = precioDelProducto * cantidadProducto;
}

void calcularBonificacion()
{
	total = cantidadProducto * precioDelProducto;
	if (total >= 5000 && formasDePago == 'e')
	{
		//Bonificacion
		totalConDescuento = (total * descuento );
		BONIFICACION = total - totalConDescuento;
		printf("\t|Con Bonificacion de un 10%%\t\t\t\t\t\t|\n");
		printf("\t|Bonificacion: $ %.2f\t\t\t\t\t\t\t|\n", BONIFICACION);
		printf("\t|Total con descuento $ %.2f\t\t\t\t\t\t|\n",totalConDescuento);
	}
	else
	{
	 
		//Sin Bonificacion
		printf("\t|bonificacion $ %.2f%%\t\t\t\t\t\t\t|\n",BONIFICACION);
	}
}


void precioTotal()
{
	printf("\n\t------------------------------------------------------------------------\n");
	printf("\t|Cant. Unidades: %d - Precio Unit: %.2f \t\t\t\t|\n" ,cantidadProducto,precioDelProducto);
	printf("\t|Total: $ %.2f \t\t\t\t\t\t\t|\n",total);
	fflush(stdin);
	printf("\t|Forma de pago: %c \t\t\t\t\t\t\t|\n", formasDePago);
}

void graciasPorSuCompra()
{
	printf("\t|Gracias por su Compra!\t\t\t\t\t\t\t|\n");
	printf("\t-------------------------------------------------------------------------");	
}

