#include <iostream>
#include <vector>
#include <map>
using namespace std;
struct Pessoa{
	string nome;//1
	int idade;//2
};
class Veiculo{
	public:
		int tipo;
		string nome;
};
int main(){
	int vetor[]{1,2,3,4,5,6,7,8,9};
	int num{10};
	string nome{"Bruno"};
	vector<int>valores{1,2,3,4,5};
	map<string,string>capitais{{"MG","Belo Horizonte"}};
	Pessoa p1{"Kaua", 17};// Kaua = 1(string) | 17 = 2(int)
	Pessoa p2{"Nome", 100};// Nome = 1(string) | 100 = 2(int)
	Veiculo V1{1, "Carango"};
	cout << "Tipo: "<< V1.tipo << " - Nome: " << V1.nome << endl;
	for(map<string,string>::iterator it = capitais.begin(); it!=capitais.end();it++){
		cout << it->first << " - " << it->second<< endl;
	}
	cout << nome << endl;
	cout << vetor[3] << endl;
	return 0;
}
