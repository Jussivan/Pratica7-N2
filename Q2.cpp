#include <stdio.h>
#include <stdlib.h>

int main() {
	int teste = 0;
	char palavra[500], letra[1];
	gets(palavra);
	gets(letra);
	for(int i=0; i < 500; i++) {
		if(palavra[i] == letra[0]) {
			teste++;
		}
		if(palavra[i] == '\0') {
			break;
		}
	}
	printf("A vogal %s aparece %d vezes", letra, teste);
	return 0;
}
