#include <iostream>
using namespace std;
int main(){
	//O cara explicou o funcionamento da biblioteca "iostream"
	//https://www.youtube.com/watch?v=19TlMwnn8fg&list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40&index=74
	char nome[80];
	char n,s;
	cin.getline(nome, 80);
	cout << nome << " - Tamanho: " << cin.gcount() <<endl;
	n =  cin.get();
	cin.ignore(80, ' ');
	s = cin.get();
	cout << n << " - "<< s << endl;
	return 0;
}
