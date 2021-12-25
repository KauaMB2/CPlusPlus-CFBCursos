#include <iostream>
using namespace std;
class Veiculo{
	private:
		int velMax;
		int potencia;
	public:
		int rodas;
		const char* nome;
	protected:
		int portas;
		const char* cor;
};
class Carro:public Veiculo{
	public:
		Carro(){
			rodas = 4;
			nome = "Carro";
			portas = 4;
			cor = "Vermelho";
			cout << rodas << endl;
			cout << nome << endl;
			cout << portas << endl;
			cout << cor << endl;
		}
};
class Moto:public Veiculo{
	public:
		Carro c;
		Moto(){
			c.rodas = 4;
			c.nome = "Carro";;
			cout << rodas << endl;
			cout << nome << endl;
		}
};
int main(){
	Carro c1;
	cout << endl << endl;
	Moto v2;
	return 0;
}
