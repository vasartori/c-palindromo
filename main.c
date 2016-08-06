/*
 * main.c
 *
 *  Created on: Aug 6, 2016
 *      Author: vasartori
 */
#include<stdio.h>
#include<string.h>

int  main(){
	printf("Verificador de palindromo");
	printf("\n\nDigite uma palavra que irei dizer se ela pode ser lida ao contrario: ");
	char palavra[10];
	scanf("%10s", palavra);

	int d = 0;
	int e = strlen(palavra) - 1;
//	-1 porque o strlen comea a contar do 1
	while (e > d){
		if (palavra[d] != palavra[e]){
			printf("Nao eh um palindromo");
			return 1;
		}
		d++;
		e--;
	}
	printf("Eh um palindromo");
	return 0;
}
