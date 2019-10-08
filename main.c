#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
* Autor: Maria Guadalupe Peña Arroyo
* Fecha: 08/10/2019
* Grupo: 008
* Horario: sabado 9-11am
* Matrícula: 1868704
*/



int main(int argc, char *argv[]) {
	
//**************ACTIVIDAD1*****************

int ventasEmpleadoOficinaEdificio[6][10][2]={0};
int i, j, k, op;

	for(k=1;k<3;k++)  /*Lo inicializo en un ciclo por que de otra manera me seguia saliendo basura*/
	{	
		for(j=1;j<11;j++)
		{
			for(i=1;i<7;i++)
			{
				ventasEmpleadoOficinaEdificio[i][j][k]=0;
				
			}
		}
	}
	
	do   /*cliclo para ingresar los datos de mas personas */
	{
		do       /*se verifica que este en el rango determinado */
		{
		printf("Ingrese el numero de empleado:  ");
		scanf("%d", &i);
		fflush(stdin);
		}while(i>6 || i<0);
		
		do
		{				/*se verifica que este en el rango determinado */
		printf("Ingrese el numero de oficina:  ");
		scanf("%d", &j);
		fflush(stdin);
		}while(j>10 || j<0);
		
		do				/*se verifica que este en el rango determinado */
		{
		printf("Ingrese el numero de edificio: ");
		scanf("%d", &k);
		fflush(stdin);
		}while(k>2 || k<0);
	
		do					/*se pide el valor de las ventas para la direccion especifia que el usuario eligio */
		{
			printf("Ingrese la venta de el empleado %d de la oficina %d en el edificio %d:  ", i, j, k);
			scanf("%d", &ventasEmpleadoOficinaEdificio[i][j][k]);
			fflush(stdin);
		}while(ventasEmpleadoOficinaEdificio[i][j][k]<0);
		
		
		do     /*se pregunta si quiere ingresar mas datos o terminar de ingresar */
		{    
			printf("Ingrese [1- continuar/ 2- Parar]");
			scanf("%d", &op);
			fflush(stdin);
		}while(op!=1 && op!=2 );
	}while(op==1);
	
	ventasEmpleadoOficinaEdificio[3][7][2]=4234; /* se modifica un valor en especifico*/
	
	for(k=1;k<3;k++)					/*si decide terminar y no llno todos los espacios se imprimiran como 0 aqullos sin datos*/
	{	
		for(j=1;j<11;j++)
		{
			for(i=1;i<7;i++)
			{
				printf("\n A[%d][%d][%d]= %d ", i, j, k,ventasEmpleadoOficinaEdificio[i][j][k] );
				
			}
		}
	}
	
	i=3;      /* se vuelve a imprimir el valor modificado para hacer enfasis*/
	j=7;
	k=2;
	printf("\n\nEl empleado %d de la oficina %d del edificio %d ha vendido %d unidades", i, j, k,ventasEmpleadoOficinaEdificio[i][j][k] );
	
	printf("\n\n\n\n");
	system("pause");   /*se limpia pantalla*/
	system("cls");
	
//**************ACTIVIDAD2*****************
	
	for(k=1;k<3;k++)  /*a todos nuestros datos anteriormente ingresados se le suma 10*/
	{	
		for(j=1;j<11;j++)
		{
			for(i=1;i<7;i++)
			{
				ventasEmpleadoOficinaEdificio[i][j][k]=ventasEmpleadoOficinaEdificio[i][j][k]+10;
				
			}
		}
	}
	
	for(k=1;k<3;k++)   /*se vuelve a imprimir el archivo ya con el cambio anterior*/
	{	
		for(j=1;j<11;j++)
		{
			for(i=1;i<7;i++)
			{
				printf("\n A[%d][%d][%d]= %d ", i, j, k,ventasEmpleadoOficinaEdificio[i][j][k] );
				
			}
		}
	}

	i=3;
	j=7;	/* de nuevo se vuelve a imprimir el valor señalado para hacer enfasis*/
	k=2;
	printf("\n\nEl empleado %d de la oficina %d del edificio %d ha vendido %d unidades", i, j, k,ventasEmpleadoOficinaEdificio[i][j][k] );
	
	printf("\n\n\n\n");
	system("pause");   /*se limpia pantalla*/
	system("cls");
	
							/*¿Cuantos elementos componen el array multidimensional?: 120 elementos */
			/*¿Qué ocurre si intentamos mostrar por pantalla un valor con un índice que no está definido para ese array multidimensional?: imprime numeros aleatoreos muy grandes(basura)*/
	return 0;

}
