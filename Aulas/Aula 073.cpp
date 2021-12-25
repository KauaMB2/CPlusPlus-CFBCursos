#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	int tam = 10, num;
	int *vetor;
	//malloc e calloc servem para alocação de memória
	//free libera memória locada
	//realloc aumenta ou diminui o tamanho da memória alocada de um componente
	//vetor = (int*)calloc(tam,sizeof(int));
	vetor = (int*)malloc(sizeof(int));
	srand(time(NULL));//Cada vez que o programa for rodado de novo, os valores aleatórios são zerados
	for(int i = 0; i < tam; i++){
		vetor[i] = rand()%100;
		cout << vetor[i] << endl;
	}
	free(vetor);//Libera a memória alocada no vetor
	return 0;
}
