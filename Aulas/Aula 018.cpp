#include <iostream>
using namespace std;
int main(){
	int vetor[10000];
	int i;
	int tamanho = (sizeof(vetor)/4);
	cout <<"Limite: " << tamanho << "\n";
	for(i = 0; i < tamanho; i++){
		vetor[i] = i;
		cout << vetor[i] << "\n";
	}
	return 0;
}
