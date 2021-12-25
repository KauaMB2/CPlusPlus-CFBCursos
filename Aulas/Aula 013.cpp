#include <iostream>
using namespace std;
int main(){
	int val;
	cout << "Selecione um veiculo para transporte\n[1] = Carro, [2] = Moto, [3] = Aviao, [4] = Helicoptero\n";
	cin >> val;
	switch(val){
		case 1:
		case 2:
			cout << "\nTransporte terrestre\n";
			switch(val){
				case 1:
					cout << "Carro selecionado\n";
					break;
				case 2:
					cout << "Moto selecionada\n";
					break;
			}
			break;
		case 3:
		case 4:
			cout << "\n Transporte aereo\n";
			switch(val){
				case 3:
					cout << "Aviao selecionado";
					break;
				case 4:
					cout << "Helicoptero selecionado";
					break;
			}
			default:
				cout << "trasnporte selecionado invalido\n";
				break;	
		}
	cout<< "\n================Programa finalizado====================\n";
	return 0;
}
