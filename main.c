#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
*Autor: Maria Guadalupe Peña Arroyo
*Fecha: 12/10/2019
*Grupo: 008
*Horario: sabado 9-11am
*Matricula: 1868704
*/

int main(int argc, char *argv[]) {
	
//**************ACTIVIDAD1*****************
	
char cad[' '], cad2[' '] ,b=' ';   /*Declaracion de variables, la de entrada, una para copiar la de entrada*/
int i, j=0, x, a=0, u=0, p;
	printf("\n Ingrese una cadena de texto:  ");
	fflush(stdin);	 /* se pide texto*/
	gets(cad);
	
	p=strlen(cad); /*se calcula la longitud de la cadena ingresada*/
	
	for (i=0;i<=p;i++) /* con esa longitud se hace un ciclo*/
    {
      if (cad[i]==b)    /*si nuestro caracter es igual a espacio en blanco*/
      {
     	i++;			/* i va a aumentar, por lo tanto tambien en nuestra segunda cadena tambien habra un espacio*/
      }
      cad2[j]=cad[i];      /*en nuestra segunda cadena se va a hacer igual a la cadena principal*/
      j++;
    }
     
    x=0;
    p=strlen(cad2); 
  
    for (x=p-1;x>=0;x--)
    {
     if (cad2[x]==cad2[a]) /*si mi ultimo caracter es igual al primero se le va a aumentar 1 a un contador*/
     {
         u++;
     }
    	 a++;  /* se van comparando cada caracter de inicio a final*/
    }
    
    if (u==p)   /*si nuestro contador de letras iguales es el mismo valor de la longitud es palindrome*/
    {	
		printf("\n\n La palabra es palindrome");
	}
    else      /*de otra forma no lo es*/
    {
    	printf("\n\n La palabra no es palindrome");
	}
  
	printf("\n\n\n\n\n\n");
    system("pause"); 
	system("cls");
	
//**************ACTIVIDAD2*****************

char cade[' '];   /*declaracion de variables*/
int l, dif=0, k, caracter[256];

	printf ("\n Ingrese un texto: ");
	fflush(stdin);    /* se pide un texto*/
	gets(cade);
	
	k=strlen(cade);  /* se saca longitud de la cadena ingresada*/
	
	for (l=0 ; l<k ; l++)   /*ciclo del tamaño de nuestra cadena*/
	{
	 if (cade[l]<0)  
	  cade[l]=(l*-1); 
	}
	
	for (l=0 ; l<256 ; l++)    /* se inicializa */
	 caracter[l]=0;
	 
	for (l=0 ; cade[l] != '\0' ; l++)   /* se cuentan los caracteres repetidos*/
	 caracter[cade[l]]++;
	 
	printf("\n\n\n");
	
	for (l = 0 ; l < 256; l++)			/*se imprime el numero de caracteres repetidos en la cadena ingresada*/
	 if (caracter[l] > 0)
	  printf ("Caracter %c = %i\n", l, caracter[l]);
     
     
     

	printf("\n\n\n\n\n\n");
    system("pause");
	return 0;
}
