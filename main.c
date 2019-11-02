#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
*Autor: Maria Guadalupe Peña Arroyo
*Fecha: 2/11/2019
*Grupo: 008
*Horario: sabado 9-11am
*Matricula: 1868704
*/

int main(int argc, char *argv[]) {
	
//**************ACTIVIDAD1*****************

char cad[' '];
char *ap;      /*declaracion de variables*/
int voc=0;

	printf("Ingrese una cadena: ");    /*se lee la cadena*/
	fflush(stdin);
	gets(cad);

	ap=cad;       /*se le asigna la cadena 'cad' a el apuntador ap*/
	
	while(*ap!='\0') /*ciclo para recorrer caracter por caracter para comparar con las vocales*/
	{
		if(*ap=='a' || *ap=='e' || *ap=='i' || *ap=='o' || *ap=='u' || *ap=='A' || *ap=='E' || *ap=='I' || *ap=='O' || *ap=='U')
		{
			voc++;   /*si el caracter a comparar se encuentra entre los parametros establecidos se va a aumentar en uno la variable encargada de contar las vocales que hay*/
		}
		ap++;  /*independientemente si el caracter sea vocal o no, se va a aumentar el apuntador para que se mueva al siguiente caracter de la cadena*/
	}

	printf("\n\n El numero de vocales es de:  %d", voc);   /*se imprimen el numero de vocales */

	printf("\n\n\n\n\n\n");  
	system("pause");
	system("cls");    /*se limpia pantalla*/
	
//**************ACTIVIDAD2*****************
	
int n, m, sum;              /*declaracion de variables*/
int *ap1, *ap2, *suma;

	ap1= &n;     /*se le asigna la variable n al apuntador ap1*/
	printf("\nIngrese el primer numero:  ");
	scanf("%d", ap1);  /* se lee con el apuntador*/

	ap2= &m;		/*se le asigna la variable m al apuntador ap2*/
	printf("\nIngrese el segundo numero:  ");
	scanf("%d", ap2);		/* se lee con el apuntador*/

	suma= &sum;     /*se le asigna la variable sum al apuntador suma*/
	*suma=*ap1+*ap2;  /*al contenido del apuntador 'suma' se le va a dar el valor de la suma de los contenidos de los apuntadores ap1 y ap2 que representan n y m*/

	printf("\n\n La suma de %d y %d es de:  %d", *ap1, *ap2, *suma);   /*se imprimen los resultados con los 3 apuntadores */

	printf("\n\n\n\n\n\n");
	system("pause");   
	system("cls");     /*se limpia pantalla y fin del programa */
	return 0;
}
