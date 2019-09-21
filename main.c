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
float cal, sum=0, prom;   /*declaracion de variables*/

    printf("Ingrese el nombre del alumno: ");
    fflush(stdin);    /*se limpia bufer*/
    gets(nom);
    printf("\nEntrada de calificaciones\n");

    for (i=1;i<=10;i++)     /*ciclo para pedir las 10 calificaciones*/
    {   
        do    /*validacion para que esten en el rango requerido*/
        {
	     printf("\n\t Ingrese la calificacion del examen numero %d:  ", i);
         scanf("%f", &cal);
        }while(cal<0 || cal>10);

         sum=sum+cal;
    }
    printf("\n\n\t\t%s", nom);
    prom=sum/10;                  /* se saca promedio*/
    printf("\n\n\t\tPromedio:  %f", prom);

    if (prom<7)     /*si primedio es menor a 7 imprime reprobado, sino aprobado*/
    { 
    printf("\n\t\tREPROBADO");
    }else{
	printf("\n\t\tAPROBADO");
    }

    printf("\n\n\n\n\n\n\n");
    system("pause");    /*se limpia pantalla*/
    system("cls");

//**************ACTIVIDAD1*****************

int   j, exp;
float bas, res;    /* se declaran variables necesarias*/

    printf("\n\t Ingrese el valor de la base:  ");
    scanf("%f", &bas);
    do
    {
    printf("\n\t Ingrese el valor del exponente(positivo):  ");
    scanf("%d", &exp);                     /*se valida que sea postitivo el exponente*/
    }while(exp<0);

	res=bas;      /* la variable donde se va a dar la respuesta se inicializa en la base dada por el usuario*/
     
    for (j=1;j<exp;j++)      /* ciclo de las veces que se va a multiplicar por si misma la base, guiado por la variable controladora hasta llegar a el numero dado como exponente*/
    {
	  res=res*bas;
    }

    if(exp==0)   /* si se dio exponente 1, la variable de respuesta cambia a 1*/
    {
	res=1;
    }
    printf("\n\n\t %.2f elevado al exponente %d=  %.2f", bas, exp, res);       /* se imprimen resultados*/
                                    
    printf("\n\n\n\n\n\n\n");
    system("pause");                    
	return 0;
}
