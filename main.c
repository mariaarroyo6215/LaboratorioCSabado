#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* 
*Autor: Maria Guadalupe Peña Arroyo
*Fecha: 31/08/2019
*Grupo: 
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
	/* Se hace la comparacion con un if/else para sacar el mayor*/
	printf("\n\n\n\n\n\n\n");
    system("pause");
	
	//*** ACT2
	
	int a=5, b=3, c=-12, ver1, ver2, ver3, ver4, ver5 ;
	
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
	printf("\n\n\n\n\n\n\n");
    system("pause");
	//*** ACTEXTRA
	
    a=0, b=0, c=0;
	printf("Ingrese un valor entero para A");
	scanf("d%", &a);  
	printf("Ingrese un valor entero para B");
	scanf("d%", &b);
	printf("Ingrese un valor entero para C");
	scanf("d%", &c);    
	
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
	printf("\n\n\n\n\n\n\n");
    system("pause");
	return 0;
}
