#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	char pergunta;
	int valor;
	
	printf("Responda 1 para sim e 2 para n�o!\n\n");
	
	printf("� um mamifero? ");
	scanf("%d", &pergunta);
	valor = pergunta;
	
	if (valor == 1) {
		printf("� um quadrupede? ");
		scanf("%d", &pergunta);
		valor = pergunta;
		
		
		if (valor == 1) {
			printf("� carnivoro? ");
			scanf("%d", &pergunta);
			valor = pergunta;
			
			if (valor == 2) {
				printf("� herbivoro? ");
				scanf("%d", &pergunta);
				valor = pergunta;
				
				if (valor == 1) {
					printf("� um cavalo!");
					return 0;
				} else {
					printf("Erro!");
				}
			}
			
			if (valor == 1) {
				printf("� um le�o ");
			}
		}
		
		if (valor == 2) {
			printf("� um bipede? ");
			scanf("%d", &pergunta);
			valor = pergunta;
			
					if (valor == 1) {
			printf("� on�voro? ");
			scanf("%d", &pergunta);
			valor = pergunta;
			
			if (valor == 2) {
				printf("� frutivoro? ");
				scanf("%d", &pergunta);
				valor = pergunta;
				
				if (valor == 1) {
					printf("� um macaco!");
					return 0;
				} else {
					printf("Erro!");
				}
			}
			
			if (valor == 1) {
				printf("� um homem ");
			}
		}
}}
	
	return 0;

}
