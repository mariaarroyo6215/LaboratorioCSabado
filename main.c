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
char nom[30];
int i;
float cal, sum=0, prom;

    printf("Ingrese el nombre del alumno: ");
    fflush(stdin);
    gets(nom);
    printf("\nEntrada de calificaciones\n");

    for (i=1;i<=10;i++)
    {   
        do
        {
	     printf("\n\t Ingrese la calificacion del examen numero %d:  ", i);
         scanf("%f", &cal);
        }while(cal<0 || cal>10);

         sum=sum+cal;
    }
    printf("\n\n\t\t%s", nom);
    prom=sum/10;
    printf("\n\n\t\tPromedio:  %f", prom);

    if (prom<7)
    { 
    printf("\n\t\tREPROBADO");
    }else{
	printf("\n\t\tAPROBADO");
    }

    printf("\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

//**************ACTIVIDAD1*****************

int   j, exp;
float bas, res;

    printf("\n\t Ingrese el valor de la base:  ");
    scanf("%f", &bas);
    do
    {
    printf("\n\t Ingrese el valor del exponente(positivo):  ");
    scanf("%d", &exp);
    }while(exp<0);

	res=bas;
     
    for (j=1;j<exp;j++)
    {
	  res=res*bas;
    }

    if(exp==0)
    {
	res=1;
    }
    printf("\n\n\t %.2f elevado al exponente %d=  %.2f", bas, exp, res);

    printf("\n\n\n\n\n\n\n");
    system("pause");
	return 0;
}
