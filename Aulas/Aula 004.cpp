#include <iostream>
using namespace std;
int main(){
	int vidas = 0;
	char letra = 'B';
	double decimal = 5.2;
	float decimal2 = 5.2;
	bool vivo = true;
	string nome = "Bruno";
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Digite a quantidade de dinheiro: ";
	cin >> decimal;
	cout << "Digite seu nome: ";
	cin >> nome;
	system("pause");
	cout << "\nNumero de vidas: " << vidas << "\nLetra: " << letra << "\nDinheiro: " << decimal << "\nQuantidade de vivos: " << vivo << "\nNome: " << nome << "\n";
	return 0;
}
