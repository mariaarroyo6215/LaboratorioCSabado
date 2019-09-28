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

int numeroDeCoches[24], r, i;   /*Declaracion de variables*/

    printf("\n\t\t\tINGRESA EL NUMERO DE COCHES POR HORA\n\n");   
    for(i=1;i<=24;i++)    /*ciclo for repitiendo 24 veces para que el usuario ingrese los coches que hay en cada hora del dia*/
    {
	do         /*ciclo do while para asegurar que no ingresen numeros negativos de coches*/
    {
	printf("\nIngresa el numero de coches en la hora %d:  ", i);
    scanf("%d", &numeroDeCoches[i]); 
    }while(numeroDeCoches[i]<0);
    }
    
    r=2;        
    numeroDeCoches[r]=57;     /*para el arreglo numeroDeCoches se le va a cambiar los datos ubicados en la posicion r y se sustituirá por 57*/

    printf("\n\nPara la hora %d hay %d coches", r, numeroDeCoches[r]);  /*se imprimen resultados de el numero de coches en hora r*/
    
    r=21;       /*se modifica el valor de la variable r*/
    numeroDeCoches[r]=57;    /* se modifica el valor asignado a la posicion r, en este caso 21, y se sustituye por el numero 57*/
    printf("\n\nPara la hora %d hay %d coches", r, numeroDeCoches[r]);    /*de nuevo se imprimen resultados*/

    printf("\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");   /*se limpia pantalla*/

//**************ACTIVIDAD2*****************

int a, b;   /*se declaran dos variables mas*/

    a=8,
    b=4;  /*se les asigna un valor a cada una*/
    
    r=a/b;   /*la variable r cambia de 21 a ser el resultado de la divicion de a entre b*/

    printf("\n\n\t\t A=8\t\t B=4\n\n");  /*se imprime para que el usuario sepa el valor de las variables*/
    printf("\t\t      R= A/B= %d", r); /*se imprimen resultados de r*/

    printf("\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");    /*se limpia pantalla al terminar*/

	return 0;
}
