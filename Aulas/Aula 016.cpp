#include <iostream>
using namespace std;
int main(){
	int cont = 20;
	do{//Permite que o comando execute o bloco de comandos pelo m;enos uma vez
		cout << "Canal do fessor Bruno - Cont: " << cont << "\n";
		cont++;
	}
	while(cont == 20);
	cout << "Programa encerrado";
	return 0;
}
