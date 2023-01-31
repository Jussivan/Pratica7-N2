#include <stdio.h>
#include <stdlib.h>

int main() {
	int teste = 0;
	char palavra[500];
	gets(palavra);
	for(int i=0; i < 500; i++) {
		if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') {
			teste++;
		}
		if(palavra[i] == '\0') {
			break;
		}
	}
	printf("O texto possui %d vogais", teste);
	return 0;
}
