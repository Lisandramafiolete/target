/* 
Candidata: Lisandra Sutil Mafiolete
------------------------------------------
Objetivo: Verificar se um numero faz parte do Fibonacci
*/
#include <stdio.h>

int main (void)
{

	int numeroAntepenultimo, numeroUltimo, calculo, numero;
	
	numeroAntepenultimo = 0;
	numeroUltimo = 1;
	calculo = 0;
	
	printf("Qual numero voce deseja verificar se esta no Fibonacci? ");
	scanf("%d", &numero);
	
	while (calculo < numero){
	
		calculo = numeroAntepenultimo + numeroUltimo;
		numeroAntepenultimo = numeroUltimo;
		numeroUltimo = calculo;
	}
	    
	if (calculo == numero) {
	   printf("O numero %d esta no Fibonacci", numero);
	}
	else {
	   printf("O numero %d nao esta no Fibonacci", numero);
	}
}
