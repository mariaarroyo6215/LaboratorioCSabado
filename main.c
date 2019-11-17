#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*
*Autor: Maria Guadalupe Peña Arroyo
*Fecha: 16/11/2019
*Grupo: 008
*Horario: Sabados 9-11 am
*Matricula: 1868704
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//void lectura(archivo);
void invertir(char cad[100]) {  //funcion para invertir la cadena de texto
	int i,j, longitud;
    char temporal;
	longitud= strlen(cad);    //se saca la longitud de la cadena
    for (i=0,j=longitud-1; i<longitud/2; i++,j--)      
    {
			
			temporal = cad[i];     //se van haciendo los cambios letra por letra
		    cad[i] = cad[j];
		    cad[j] = temporal;
	}
	
}

int main(int argc, char *argv[]) {
	
//**************ACTIVIDAD1*****************
	
	FILE *archivo;     //se declaran los archivos
	FILE *archivoAlReves;
	
	char cad[100], inv[100],  mens[10]="procesado";    
	
	archivo=fopen("archivoOriginal.txt", "w");   //se abre el archivo principal

	if(archivo == NULL)   //se verifica para que no haya problemas
 	{
		exit(1);
	}else{
		
		if(archivo!=NULL)  
		{
			printf("Ingrese una cadena:  ");       //se pide una cadena de texto
			fflush(stdin);
			gets(cad);      //se guarda en una variable
			fprintf(archivo, "%s", cad);    //se guarda el contenido de esa variable en nuestro archivo principal
		} 
		
	}
	
	fclose(archivo);   //se cierra archivo
	invertir(cad);    //se manda llamar a la funcion para invertir la cadena
	
	printf("%s", cad);     //se imprime el texto invertido en el ejecutable 
	archivoAlReves=fopen("archivo_alreves.txt", "w");    //se abre el archivo donde se guardará la cadena invertida
	fprintf(archivoAlReves, "%s", cad);       //se guarda la cadena
	archivo=fopen("archivoOriginal.txt", "w+");   //se vuelve a abrir el archivo principal
	fprintf(archivo, "%s", mens);    //se le asigna la variable con contenido "prosesado"
	
	fclose(archivo);     //se cierran los archivos
	fclose(archivoAlReves);
	printf("\n\n\n");
	system("pause");  
	system("cls");      //se limpia pantalla
	
	
//**************ACTIVIDAD2*****************
	FILE *archivoAB;     //se declaran archivos
	FILE *resultado;
	int a, b, sum;
	
	archivoAB=fopen("leerNumeros.txt", "w");   //se abren ambos archivos
	resultado=fopen("resultado.txt", "w");
	
	if(archivoAB == NULL)    //verificacion de que exista
 	{
		exit(1);
	}else{
		
		if(archivoAB!=NULL)
		{
			printf("Ingrese un numero:  ");	     //se piden dos numeros enteros, a y b
			scanf("%d", &a);
		
			printf("Ingrese otro numero:  ");	
			scanf("%d", &b);
			fprintf(archivoAB, "%d  %d", a, b);   //esos numeros se almacenan en el archivo de inicio
		}
		
	}
	fscanf(archivoAB, "%d    ", &a);
	fscanf(archivoAB, "%d    ", &b);    //se leen las variables de nuevo
	sum=a+b;     //se suman las variables
	printf("la suma de %d y %d es: %d", a, b, sum);    //se imprime en pantalla el resultado
	fprintf(resultado, "la suma de %d y %d es: %d", a, b, sum);    //y se guarda en un archivo diferente la suma

	fclose(archivoAB);
	fclose(resultado); //se cierran ambos archivos

	printf("\n\n\n");
	system("pause");      //fin del programa
	return 0;
}

