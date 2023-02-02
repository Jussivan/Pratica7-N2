#include <stdio.h>

void inverteString(char frase[], int tamanho) {
	int i, j;
	char temp;

	for (i = 0, j = tamanho - 1; i < j; i++, j--) {
	temp = frase[i];
	frase[i] = frase[j];
	frase[j] = temp;
	}
}

int main() {
	char frase[500];
	int i, tamanho = 0;

	printf("Digite uma frase: ");
	fgets(frase, 500, stdin);

	for (i = 0; frase[i] != '\0'; i++) {
	tamanho++;
	}

	inverteString(frase, tamanho);

	printf("\nFrase invertida: %s", frase);
	return 0;
}
