#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int n1, n2, resp;
	char ops;
	inicio:
		system("cls");
		cout << "Digite o valor da nota 1: ";
		cin >> n1;
		cout << "Digite o valor da nota 2: ";
		cin >> n2;
		resp = n1 + n2;
		if(resp >= 60){
			cout << "\nAluno aprovado\n";
		}
		else if(resp >=40){
			cout << "\nAluno em recuperacao\n";
		}
		else{
			cout << "\nAluno reprovado\n";
		}
		cout << "\nDeseja digitar outra nota?";
		cin >> ops;
		if((ops == 's') || (ops == 'S')){
			goto inicio;
		}
		else{
			return 0;
		}
}
