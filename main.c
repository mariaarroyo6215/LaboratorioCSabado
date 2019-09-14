#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
*Autor: Maria Guadalupe Peña Arroyo
*Fecha: 14/09/2019
*Grupo: 008
*Horario: Sabados 9-11 am
*Matricula: 1868704
*/


int main(int argc, char *argv[]) {
	
//**************ACTIVIDAD1*****************
char ver;
int num, sum=0; /* declaracion de variables*/
    do
    {
	printf("\n Ingrese un numero entero:  ");
    scanf("%d", &num);
    sum=sum+num;       /* se va haciendo la sumatoria inmediatamente se ingresa el numero*/
    fflush(stdin);    /* esto evita se repita la siguiente linia de comando */
       do
       {
        printf("\n Desea introducir otro (s/n)?");
        scanf("%c", &ver);
        fflush(stdin);      /* esto evita se repita la siguiente linia de comando */
        }while (ver!='n' && ver!='s' );
    }while(ver=='s');       /* sale del ciclo hasta que se ingrese la n*/
    
	printf("\n\n La suma de los numeros introducidos es:  %d", sum); /* se imprime sumatoria de numeros deseados*/
	
	printf("\n\n\n\n\n\n\n");
	system("pause");
	system("cls");    /* se limpia pantalla */
	
//**************ACTIVIDAD2*****************

float n;
    do
    {
    printf("\n\n Ingrese un numero: ");  /* se pide un numero por teclado*/
    scanf("%f", &n);
    printf("\n\n\t\t\t\t %.2f", n);    /* se va imprimiendo conforme se van ingresando*/  
    }while (n<100);     /* el ciclo va a continuar hasta que se ingrese un numero mayor a 100*/

    printf("\n\n\n\n\n\n\n");
	system("pause");
	system("cls");      /* se limpia pantalla */
	return 0;
}
