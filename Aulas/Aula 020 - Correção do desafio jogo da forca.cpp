#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	char palavra[30], letra[1], secreta[30];
	int tam, i, chances, acertos;
	bool acerto;
	chances = 6;
	tam = 0;
	i = 0;
	acerto = 0;
	acertos = 0;
	cout << "Digite a palavra secreta\n\n";
	cin >> palavra;
	system("cls");
	while(palavra[i] != '\0'){
		i++;
		tam++;
	} 
	for(i = 0; i < 30; i++){
		secreta[i] = '-';
	}
	while((chances > 0)&&(acertos < tam)){
		cout << "Chances restantes: " << chances << "\n\n";
		cout << "Palavra secreta: ";
		for (i = 0; i < tam; i++){//é somado +1 no indice(i) cada vez que o loop while roda novamente
			cout << secreta[i];	
		}
		cout << "\nDigite uma letra: ";
		cin >> letra[0];
		for (i = 0; i < tam; i++){
			if(palavra[i] == letra[0]){
			acerto = 1;
			secreta[i] = palavra[i];
			acertos++;
			}
		}
	}
	if (acerto == 0){
		chances--;
	}
	acerto = false;
	system("cls");
	if (acertos == tam){
		cout << "Voce venceu!!";
	}
	else{
		cout << "Voce errou!!";
	}
	return 0;
}
