#include <iostream>
using namespace std;
void fibonacci(int valor = 1, int ultimovalor = 0, int i = 0);
int main(){
	fibonacci(1, 0, 0);
	return 0;
	}
void fibonacci(int valor, int ultimovalor, int i){
	for(i = 0; i <= 1000; i++){
		if(i==1000){
			valor = valor + ultimovalor;
			cout << ultimovalor << "\n";
			ultimovalor = valor;
			i = 0;
		if(valor == 1073741824){
			valor = 1;
			ultimovalor = 0;
			cout << "Voce atingiu o limite de valores dentro da variavel\nA variavel foi zerada\n";
			fibonacci(valor, ultimovalor);
			}
		}
	}
}
