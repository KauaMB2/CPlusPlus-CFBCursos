#include <iostream>
#include <vector>
using namespace std;
int main(){
	int x[10]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	vector<int>n{100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
	const char* nome = "Kaua";//Define "Bruno" como sendo uma variável String | string nome = "Bruno"
	for(int i = 0; i <= sizeof(nome); i++){
		cout << nome[i] << endl;
	}
	for(auto i:n){
		cout << i << endl;
	}
	for(auto i:x){
		cout << i << endl;
	}
	return 0;
}
