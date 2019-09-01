#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* 
*Autor: Maria Guadalupe Peña Arroyo
*Fecha: 31/08/2019
*Grupo: 008
*Horario: Sabados 9am-11am
*Matricula: 1868704
*/


int main(int argc, char *argv[]) {
	//*** ACT1
	float num1, num2;
	printf("Introduse un valor:  ");
	scanf("%f", &num1);
	printf("Introduce otro valor:  ");
	scanf("%f", &num2);
	/* Se piden los datos a comparar*/
	if(num1>num2){ printf("el numero %.2f es mayor", num1);
	}else{ 
	printf("el numero %.2f es mayor", num2);
	}
	/* Se hace la comparacion con un if/else para sacar el mayor y se imprime*/
	printf("\n\n\n\n\n\n\n");
    system("pause");
	
	//*** ACT2
	
	int a=5, b=3, c=-12, ver1, ver2, ver3, ver4, ver5 ;
	/* declaracion de las variables a,b y c; y las variables para hacer operaciones con las anteriores mencionadas*/
	printf("A>3\n");
	if(a>3){
	printf("Verdadero");} else{
		printf("Falso");
    }  
	printf("\n\n A>C \n");
	if(a>c){
	printf("Verdadero");} else{
		printf("Falso");
	}
	/* En cada uno se muestra al usuario lo que se esta comparando para despues mostrar si la sentencia anterior es verdadera o falsa*/
	printf("\n\n B!=C \n");
	if(b!=c){
	printf("Verdadero");} else{
		printf("Falso");
	}
	
	printf("\n\n A=3 \n");
	if(a==3){
	printf("Verdadero");} else{
		printf("Falso");
	}
	/* se usa una variable distinta a c, b y a  para poder hacer operaciones con estas, cosa que no se puede dentro de la comparaion de nuestro if */
	ver1=a*b;
	printf("\n\n A*B=15 \n");
	if(ver1==15){
	printf("Verdadero");} else{
		printf("Falso");
	}
	
	ver2=c/b;
	printf("\n\n C/B<A \n");
	if(ver2<a){
	printf("Verdadero");} else{
		printf("Falso");
    }
	printf("\n\n C/B=-10 \n");
	if(ver2==-10){
	printf("Verdadero");} else{
		printf("Falso");
    }
	ver3= a+b+c;
	printf("\n\n A+B+C=5 \n");
	if(ver3==5){
	printf("Verdadero");} else{
		printf("Falso");	
	}
	/*se usan mas variables para verificar y hacer operaciones cuyo resultado despues de va a comparar con un valor establecido */
	ver4= a+b;
	ver5= a-b;
	printf("\n\n (A+B = 8) && (A-B = 2) \n");
	if(ver4==8 && ver5==2){
	printf("Verdadero");} else{
		printf("Falso");	
	}
	
	printf("\n\n (A+B = 8) || (A-B = 6) \n");
	if(ver4==8 || ver5==6){
	printf("Verdadero");} else{
		printf("Falso");	
	}
	
	printf("\n\n A>3 && B>3 && C>3 \n");
	if(a>3 && b>3 && c>3){
	printf("Verdadero");} else{
		printf("Falso");	
	}
	/*se hace un paro de sistema y se limpia pantalla para mayor comodidad al usuario*/
	printf("\n\n\n\n\n\n\n");
    system("pause");
    system("cls");
    
	//*** ACTEXTRA
	
	/*se pide ingresar valores para a, b y c; se intercala con un fflush ya que sin este el programa no te dejaria ingresar los valores de dichas variables, saltando por completo esta parte del codigo*/
    int a2, b2, c2;
    fflush(stdin);
	printf("Ingrese un valor entero para A: \n");
	scanf("d%", &a2);
	fflush(stdin);  
	printf("Ingrese un valor entero para B: \n");
	scanf("d%", &b2);
	fflush(stdin);
	printf("Ingrese un valor entero para C: \n");
	scanf("d%", &c2);    
	fflush(stdin);
	
	/*se empiza de nuevo con las comparaciones pero ahora con valores pedidos al usuario*/
	printf("A>3\n");
	if(a2>3){
	printf("Verdadero");} else{
		printf("Falso");
    }  
	printf("\n\n A>C \n");
	if(a2>c2){
	printf("Verdadero");} else{
		printf("Falso");
	}
	
	printf("\n\n B!=C \n");
	if(b2!=c2){
	printf("Verdadero");} else{
		printf("Falso");
	}
	
	printf("\n\n A=3 \n");
	if(a2==3){
	printf("Verdadero");} else{
		printf("Falso");
	}
	
	ver1=a2*b2;
	printf("\n\n A*B=15 \n");
	if(ver1==15){
	printf("Verdadero");} else{
		printf("Falso");
	}
	
	ver2=c2/b2;
	printf("\n\n C/B<A \n");
	if(ver2<a2){
	printf("Verdadero");} else{
		printf("Falso");
    }
	printf("\n\n C/B=-10 \n");
	if(ver2==-10){
	printf("Verdadero");} else{
		printf("Falso");
    }
	ver3= a2+b2+c2;
	printf("\n\n A+B+C=5 \n");
	if(ver3==5){
	printf("Verdadero");} else{
		printf("Falso");	
	}
	
	ver4= a2+b2;
	ver5= a2-b2;
	printf("\n\n (A+B = 8) && (A-B = 2) \n");
	if(ver4==8 && ver5==2){
	printf("Verdadero");} else{
		printf("Falso");	
	}
	/*se usan variables para verificar y hacer las peraciones que despues se comparan a distintos valores*/
	printf("\n\n (A+B = 8) || (A-B = 6) \n");
	if(ver4==8 || ver5==6){
	printf("Verdadero");} else{
		printf("Falso");	
	}
	
	printf("\n\n A>3 && B>3 && C>3 \n");
	if(a2>3 && b2>3 && c2>3){
	printf("Verdadero");} else{
		printf("Falso");	
	} 
	printf("\n\n\n\n\n\n\n");
    system("pause");
	return 0;
}
