#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack <string> cartas;
	cartas.push("Rei de copas");
	cartas.push("Rei de espadas");
	cartas.push("Rei de ouros");
	cartas.push("Rei de paus");
	cout << "0 - Carta do topo: " << cartas.top() << "\n\n"; 
	cout << "Tamanho da pilha: " << cartas.size() << "\n\n";
	cartas.pop();
	cout << "1 - Nova carta do topo: " << cartas.top() << "\n\n";
	cout << "Novo tamanho da pilha: " << cartas.size() << "\n\n";
	cartas.pop();
	cout << "2 - Nova carta do topo: " << cartas.top() << "\n\n";
	cout << "Novo tamanho da pilha: " << cartas.size() << "\n\n";
	cartas.pop();
	cout << "3 - Nova carta do topo: " << cartas.top() << "\n\n";
	cout << "Novo tamanho da pilha: " << cartas.size() << "\n\n";
	cartas.pop();
	cout << "4 - Nova carta do topo: " << cartas.top() << "\n\n";
	cout << "Novo tamanho da pilha: " << cartas.size() << "\n\n";
	return 0;
}
