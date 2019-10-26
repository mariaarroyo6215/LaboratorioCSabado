#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
* Autor: Maria Guadalupe Peña Arroyo
* Fecha: 24/10/2019
* Grupo: 008
* Horario: sabado 9-11am
* Matrícula: 1868704
*/


int main(int argc, char *argv[]) {
	
//**************ACTIVIDAD1*****************

int n, i, j, ao;      /*declaracion de variables*/
float may=0, sum;

struct estudiante          /*declaracion de estructura principal*/
{
	char nombre[30];
	char sexo;
	int edad;
	float nota[5];
	float prom;
};
struct estudiante es[' '];

	do       /*se pregunta por el numero de alumnos*/
	{
		printf("\n Ingrese el numero de estudiantes:  ");
		scanf("%d", &n);
	}while (n<=0);
	
	for(i=1; i<n+1; i++)      /*ciclo para los n alumnos*/
	{
		printf("\n\n Ingrese el nombre:");
		fflush(stdin);           /*se lee el nombre del alumno*/
		gets(es[i].nombre);
	
		do
		{
			printf("\n Ingrese el sexo [f-femenino/m-masculino]:  ");
			fflush(stdin);       /*se pide ingrese el sexo segun el codigo indicado y se valida*/
			scanf("%c", &es[i].sexo);
		}while (es[i].sexo!='f' && es[i].sexo!='F' && es[i].sexo!='m' && es[i].sexo!='M');
		
		do
		{
			printf("\n Ingrese la edad: ");   /*se ingresa la edad y se verifica que no se menor o igual a 0*/
			scanf("%d", &es[i].edad);
		}while(es[i].edad<=0);
		
		sum=0; /*sum se vuelve 0 cada que cambia el ciclo externo, esto para que solo lleve los datos que pertenecen a cada alumno*/
		
		for(j=1; j<6; j++)
		{                        /*ciclo interno para las calificaciones*/
			do
			{
			printf("\n Ingrese la nota numero %d:  ", j);
			scanf("%f", &es[i].nota[j]);
			}while( es[i].nota[j]<0);    /*se verifica que la nota sea mayor que 0*/
			
			sum=sum+es[i].nota[j];               /*sumatoria de todas las notas*/
		}
		
		es[i].prom=sum/5;    /*se saca el promedio del alumno antes de finalizar el ciclo externo*/
	}

	for(i=1; i<n+1; i++)   /*ciclo para comparar cada promedio para saber el mayor*/
	{
		if(es[i].prom>may)
		{
			may=es[i].prom;
			j=i;       /*en otra variable se guarda el numero de alumno que tiene mayor promedio*/
		}
	}

	printf("\n\n\n El alumno con mayor promedio fue %s, con %.2f", es[j].nombre, es[j].prom);     /*se utiliza esa variable para traer los datos necesarios*/
	
	printf("\n\n\n\n\n\n");
	system("pause");
	system("cls");     /*se detiene el programa y se limpia pantalla*/
	
//**************ACTIVIDAD2*****************


	struct pandas     /*declaracion de la estructura principal*/
	{
		char nombre[30];
		float peso;
		int nac;
		char sexo;
	};
	
	struct pandas pan[' '];
	
	do
	{
		printf("\n Ingrese el a%co actual:  ", 164);
		scanf("%d", &j);
	}while (j<2000);    /*se pide el año para tomarlo como referencia mas tarde al sacar la edad del panda; y se valida que el año no sea menor a 2000*/
	
	do
	{
		printf("\n Ingrese el numero de pandas:  ");
		scanf("%d", &n);
	}while (n<=0);       /*se piden datos para nuestro ciclo*/
	
	for(i=1; i<n+1; i++)
	{
		printf("\n\n Ingrese el nombre del panda:");
		fflush(stdin);          /*se ingresa el nombre*/
		gets(pan[i].nombre);
	
		do
		{
			printf("\n Ingrese el sexo [f-femenino/m-masculino]:  ");
			fflush(stdin); /*se ingresa el sexo del panda; validando que este entre las opciones que definimos anteriormente*/
			scanf("%c", &pan[i].sexo);
		}while (pan[i].sexo!='f' && pan[i].sexo!='F' && pan[i].sexo!='m' && pan[i].sexo!='M');
		
		do       /*se pide el año de nacimiento y se valida que sea mayor a 0*/
		{
			printf("\n Ingrese el a%co de nacimiento: ", 164);
			scanf("%d", &pan[i].nac);
		}while(pan[i].nac<0);
		
		do
		{
			printf("\n Ingrese el peso:  ");
			scanf("%f", &pan[i].peso);
		}while(pan[i].peso<=0);
	}
	         /*se imprime reporte de pandas que pueden tener bebes*/
	printf("\n\n\n PANDAS QUE PUEDEN TENER BEBES: ");
	
	for(i=1; i<n+1; i++)
	{
		ao=j-pan[i].nac;        /*en caso de que un panda sea hembra y cumpla los requisitos pedidos, se imprimirá en pantalla su informacion*/
		if(ao>5 && (pan[i].sexo=='f' || pan[i].sexo=='F'))
		{
			printf("\n\n\t Nombre: %s \n\t Peso: %.2f \n\t Fecha de nacimiento: %d", pan[i].nombre, pan[i].peso, pan[i].nac);
		}
	}
	
	printf("\n\n\n\n\n\n");
	system("pause");
	
	return 0;
}
