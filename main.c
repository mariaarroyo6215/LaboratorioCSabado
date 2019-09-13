#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
*Autor: Maria Guadalupe Peña Arroyo
*Fecha: 12/09/2019
*Grupo:008
*Horario: sabado 9-11am
*Matricula: 1868704
*/

int main(int argc, char *argv[]) {


//**************ACTIVIDAD1*****************
float cal;
    printf("Ingrese la nota de la materia(en escala 1-10)=   ");   /* se especifica al usuario la escala para que este enterado del formato correcto*/
    scanf("%f",&cal);
    
    if (cal>=5 && cal<=10)       /* se compara con las variables dadas para saber a qu rango pertenece la calificacio ingresada ya sea apto o no*/
        printf("\n\n\t APTO");
    else if (cal>=0 && cal<5)
        printf("\n\n\t NO APTO");   
        else                                 /* si la calificacion dada no fue en el rango de datos requerido se imprime error para el usuario*/
             printf("\n\n\t ERROR: Nota incorrecta");
    
    printf("\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");               /*se limpia pantalla para proxima actividad*/
//**************ACTIVIDAD2*****************
int num;
    printf("\n\n Ingrese un numero de dia de la semana:  ");  /*se pide un numero al usuario*/
    scanf("%d", &num);
    
    if(num==1){                 /* con ifs anidados se va comparando con los numeros del 1 al 7 para saber que dia de la semana es*/
        printf("\n\n\t LUNES");
    }
    else {
	if(num==2){
             printf("\n\n\t MARTES");
         }
        else {
		if(num==3){
                 printf("\n\n\t MIERCOLES"); 
             }
             else {                             /* se va imprimiendo el dia de la semana correspondiente*/
			 if(num==4){
                     printf("\n\n\t JUEVES");}
                 else {
				 if (num==5){
                         printf("\n\n\t VIRNES");
                     }
                     else {
					 if (num==6){
                           printf("\n\n\t SABADO");
                       }
                          else {
						  if (num==7){
                                 printf("\n\n\t DOMINGO");
                             }                        /* en caso de dar un numero diferente de 1,2,3,4,5,6 y 7 se imprime error para el usuario*/
                                else {
                                    printf("\n\n\t ERROR: DIA INCORRECTO");
                    }
                }
            }
        }
    }
}
}

    printf("\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");      /*se limpia pantalla*/
    
//**************ACTIVIDAD Extra*****************
    
int n;
    do
    {
    printf("\n\n\t\t MENU DE OPCIONES \n\n");
    printf("¿Como se siente usted hoy?\n");   /* se imprime un menu de opciones para que el usuario eliga la que necesite o quiera*/
    printf("\n\t 1.-Alegre \n\t 2.-Triste \n\t 3.-Enojado \n\t 4.-Estresado \n\t 5.-Nervioso \n\t 6.-Cansado\n\n ");
    scanf("%d", &n);
    system("cls");     /* se limpia pantalla para en caso de que la verificacion marque verdadero no se amontone todo en pantalla*/
    }while (n!=1 && n!=2 && n!=3 && n!=4 && n!=5 && n!=6);   /* se verifica que el numero ingresado este entre las ociones*/
    
    if(num==1){
        printf("\n\n Usted escogio la opcion:1 ");
    }             /* con ifs anidados se va comparando el numero ingresado con la opcion*/
    else {
	if(num==2){
             printf("\n\n Usted escogio la opcion:2 ");
         }
        else {
		if(num==3){
                 printf("\n\n Usted escogio la opcion:3 ");
             }                                     /* se imprime lo pedido segun la opcion*/
             else {
			 if(num==4){
                     printf("\n\n Usted escogio la opcion:4 ");}
                 else {
				 if (num==5){
                         printf("\n\n Usted escogio la opcion:5 ");
                     }
                     else {
					     printf("\n\n Usted escogio la opcion:6 ");
					 }
		    	}
     	}
    }
}                       /*fin del programa*/
    printf("\n\n\n\n\n\n\n\n\n\n");
    system("pause");
	return 0;
}
