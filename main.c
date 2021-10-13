#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Protótipos das funções
void tela(float *a,float *b,char op,int *x, int *y,float *resultado);
void operacoes(float *a,float *b,char op,int *x, int *y,float *resultado);

float soma (float *a,float *b,float *resultado);
float sub (float *a, float *b,float *resultado);
float multiplicacao (float *a, float *b,float *resultado); 
float divisao (float *a,float *b,float *resultado); 

//Main
int main(void) {
 float *a,*b,*resultado;
 int *x,*y;
 //Alocação de memória para ponteiros
 a = malloc(1 * sizeof(float));
 b = malloc(1 * sizeof(float));
 resultado = malloc(1 * sizeof(float));
 char op;
	
 tela(a,b,op,x,y,resultado);//Chamada das funções
 
 
 printf("Resultado: %.0f",*resultado);

//Liberando memória dos ponteiros
 free(a);
 free(b);
 free(resultado);

 return 0;
}




void tela(float *a,float *b,char op,int *x, int *y,float *resultado) {
	printf("Digite seus números para o cálculo:");
		
		scanf("%f",a);
		scanf("%f",b);
		
		printf("%.0f ",*a);
		printf("%.0f",*b);
		operacoes(a,b,op,x,y,resultado);
		
	
}

void operacoes(float *a,float *b,char op,int *x, int *y,float *resultado) {
	printf("Escolha a operação:");
	scanf(" %c",&op);

	if(op == '+') {
		soma(a,b,resultado);
		return;
	}
	else if(op == '-') {
		sub(a,b,resultado);
		return;
	} else if(op == 'X' || op == 'x') {
		multiplicacao(a,b,resultado);
		return;
	} else if(op == '/') {
		divisao(a,b,resultado);
	}
}

float soma (float *a,float *b,float *resultado) {
	*resultado = *a + *b;
	return *resultado;
}

float sub (float *a, float *b,float *resultado) {
	*resultado = *a - *b;
	return *resultado;
}

float multiplicacao (float *a, float *b,float *resultado) {
	*resultado = (*a) * (*b);
	return *resultado;
}

float divisao (float *a,float *b,float *resultado) {
 *resultado = *a / *b;
	return *resultado;
}