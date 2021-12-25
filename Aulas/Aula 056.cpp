#include <iostream>
#include <vector>
using namespace std;
string nome;
auto soma(double n1, double n2)->int{
	return n1+n2;
}
string meuNome(){
	cout<< "Entre com seu nome -> ";
	cin >> nome;
	cout << endl;
	system("cls");
	return nome;
}
void somador(){
	static auto i = 0;//Transforma a variável I em uma variável estática(não será reiniciada em 0)
	i++;
	cout << i << endl;
}
auto main()->int{
	register auto cont = 0; //PEDE(não significa que vai) para o computador armazenar a variável cont em um registrador
	vector<int>v{10, 20, 30, 40, 50, 60, 70};
	for(register auto it = v.begin(); it!=v.end(); it++){
		cout << *it << endl;
		somador();
	}
	auto n1 = 0, n2 = 0;
	cout<< "Entre com o valor de n1 -> ";
	cin >> n1;
	cout << endl;
	cout<< "Entre com o valor de n2 -> ";
	cin >> n2;
	auto res = 0;
	res = soma(n1, n2);
	string nomeDigitado = "...";
	nomeDigitado = meuNome();
	cout<< res << endl << nomeDigitado << endl;
	return 0;
}
