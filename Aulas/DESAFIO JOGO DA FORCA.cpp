#include <iostream>
using namespace std;
int main (){
	char desa[4]={'f','o','g','o'};
	char opc;
	int perdeu=5;
	bool f=false,o=false,g=false;
	
	cout << "Desafio do jogo da forca\n\nEscolha uma letra e acerte a palavra\n\n               A dica e elemento : )\n\n";
	cout << "\n\n_ _ _ _\n\n";
	game:
	
	if (perdeu==0){
		cout << "\nVoce perdeu";
		goto fim;
	}
	
	if (f==1 && o==1 && g==1){
		cout << "Voce Ganhou!";
		goto win;
	}
	cout << "\n\nVoce tem " << perdeu << " tentativas\n\n";
	
	cin >> opc;
	
	
	switch (opc){
		case 'f':
		case 'o':
		case 'g':
		cout << "Acertou!\n";	
			switch (opc){
				case 'f':
					cout << "1 letra encontrada\n";
					cout << "\n\nF _ _ _\n\n";
					f=1;
					goto game;
					break;
				case 'o':
					cout << "2 letra encontrada\n";
					cout << "\n\n_ O _ O\n\n";
					o=1;
					goto game;
					break;
				case 'g':
					cout << "1 letra encontrada\n";
					cout << "\n\n_ _ G _\n\n";
					g=1;
					goto game;
					break;
					
		}
		break;
		default:
			cout << "Errou!\n";
			perdeu-=1;
			goto game;
			break;	
	}
	
	win:
		cout << "\n\n\nParabens!!!\n\n\n";
	
	fim:
	return 0;
}
