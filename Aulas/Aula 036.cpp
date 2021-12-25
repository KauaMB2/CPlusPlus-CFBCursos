#include <iostream>
using namespace std;
int main(){
	string veiculo = "Carro";
	string *pn;
	pv = &veiculo;// Coloca endereço da variável veiculo dentro do ponteiro
	cout << pn << "\n" << &veiculo;
	*pn = "Moto";//ponteiro no endereço apontado por *pv adicione o valor "Moto"
	cout << "\n" << veiculo << "\n" << *pn;
	return 0;
}
