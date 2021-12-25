#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue <string> cartas;
	cartas.push("Rei de copas");
	cartas.push("Rei de espadas");
	cartas.push("Rei de ouros");
	cartas.push("Rei de paus");
	cout << "Tamanho da fila: " << cartas.size() << "\n\n";
	cout << "Primeria carta da fila: " << cartas.front() << "\n\n";
	cout << "Ultima da fila: " << cartas.back() << "\n\n";
	while(!cartas.empty()){
		cout <<"Carta do topo: " << cartas.front() << "\n\n"; 
		cartas.pop();
	}
	return 0;
}
