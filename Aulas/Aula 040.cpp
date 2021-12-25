#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int num1, num2, num3, idade, dia, ano, mes;
	num1 = 1; num2 = 2; num3 = 3;
	char nome[50];
	printf("Canal Fessor\n\0 Bruno\nCurso de C++");
	printf("Canal Fessor Bruno\nCurso de C++");
	printf("\nValores das variaveis...\nnum1: %i\nnum2: %i\nnum3: %i \n", num1, num2 , num3);
	printf("===============================");
	printf("\nEntre com seu nome e logo em seguida com sua idade atual \n");
	scanf("%s %i", &nome, &idade);
	printf("\nEntre com o dia em que voce nasceu\n");
	scanf("%i", &dia);
	printf("\nEntre com o mes em que voce nasceu\n");
	scanf("%i", &mes);
	printf("\nEntre com o ano em que voce nasceu\n");
	scanf("%i", &ano);
	printf("\nNome: %s\nIdade: %i\nAno de nascimento: 0%i/0%i/%i", nome, idade, dia, mes, ano);
	return 0;
}
