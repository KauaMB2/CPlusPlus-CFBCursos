#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;
double divide(double, double);
int main(){
	vector<int>num(5);
	try{
		num.at(6)=10;
		cout << num[6] << endl;
	}
	catch(exception& e){
		cout << "ERRO: " << e.what() <<endl;
	}
	double n1, n2;
	cin >> n1 >> n2;
	try{
		cout << divide(n1, n2);
	}
	catch(const char* e){
		cout << "ERRO: " << e << endl;
	}
	return 0;
}
double divide(double n10, double n20){
	if(n20 == 0){
		throw "Erro de divisão por ZERO";
	}
	if(n10 >= 10){
		throw "N1 precisa ser menor que 10";
	}
	system("pause");
	return n10/n20;
}
