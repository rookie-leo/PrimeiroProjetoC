#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//setlocale(LC_ALL, "Portuguese");//configura caracteres especiais
	
	char nome[10];
	printf("Digite seu nome ");
	scanf("%s", &nome);
	
	printf("Hello %s!\n", nome);
	system("pause");
}
