#include <stdio.h>
#include <stdlib.h>

int main() {
	int tamanho;
	char palavra[500];
	gets(palavra);
	for(int i=0; i < 500; i++) {
		if(palavra[i] == '\0') {
			tamanho = i;
			break;
		}
	}
	char reverso[tamanho];
	for(int i=0; i<=tamanho; i++) {
		int a = (tamanho - 1) - i;
		reverso[i] = palavra[a];
	}
	printf("O reverso da palavra %s é: %s", palavra, reverso);
	return 0;
}
