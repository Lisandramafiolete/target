/* 
Candidata: Lisandra Sutil Mafiolete
------------------------------------------
Objetivo: Inverter os caracteres de um string.
*/
#include <stdio.h>
#include <string.h>

int main (void)
{

	char palavra[50], palavraInvertida[50];
	int contador, contador2;
	int tamanho;
	
	printf("Qual palavra voce deseja inverter? ");
	scanf("%s", &palavra);
	
	for (contador=0; palavra[contador] != '\0'; contador++){
    	tamanho++;
	}
     
	contador2 = 0;
   for (contador = tamanho-1; contador >= 0; contador--){
	    palavraInvertida[contador2] = palavra[contador];
		contador2++;
	}
	
	printf("A palavra '%s' invertida fica '%s'.", palavra, palavraInvertida);
}
