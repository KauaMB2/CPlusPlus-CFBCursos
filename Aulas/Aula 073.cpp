#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	int tam = 10, num;
	int *vetor;
	//malloc e calloc servem para aloca��o de mem�ria
	//free libera mem�ria locada
	//realloc aumenta ou diminui o tamanho da mem�ria alocada de um componente
	//vetor = (int*)calloc(tam,sizeof(int));
	vetor = (int*)malloc(sizeof(int));
	srand(time(NULL));//Cada vez que o programa for rodado de novo, os valores aleat�rios s�o zerados
	for(int i = 0; i < tam; i++){
		vetor[i] = rand()%100;
		cout << vetor[i] << endl;
	}
	free(vetor);//Libera a mem�ria alocada no vetor
	return 0;
}
