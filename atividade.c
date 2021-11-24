#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	char pergunta;
	int valor;
	
	printf("Responda 1 para sim e 2 para não!\n\n");
	
	printf("É um mamifero? ");
	scanf("%d", &pergunta);
	valor = pergunta;
	
	if (valor == 1) {
		printf("É um quadrupede? ");
		scanf("%d", &pergunta);
		valor = pergunta;
		
		
		if (valor == 1) {
			printf("É carnivoro? ");
			scanf("%d", &pergunta);
			valor = pergunta;
			
			if (valor == 2) {
				printf("É herbivoro? ");
				scanf("%d", &pergunta);
				valor = pergunta;
				
				if (valor == 1) {
					printf("É um cavalo!");
					return 0;
				} else {
					printf("Erro!");
				}
			}
			
			if (valor == 1) {
				printf("É um leão ");
			}
		}
		
		if (valor == 2) {
			printf("É um bipede? ");
			scanf("%d", &pergunta);
			valor = pergunta;
			
					if (valor == 1) {
			printf("É onívoro? ");
			scanf("%d", &pergunta);
			valor = pergunta;
			
			if (valor == 2) {
				printf("É frutivoro? ");
				scanf("%d", &pergunta);
				valor = pergunta;
				
				if (valor == 1) {
					printf("É um macaco!");
					return 0;
				} else {
					printf("Erro!");
				}
			}
			
			if (valor == 1) {
				printf("É um homem ");
			}
		}
}}
	
	return 0;

}
