#include <iostream>
#include <algorithm>
#include <list>
#include <map>
using namespace std;
int main(){
	list<int>numeros;
	list<int>::iterator it;
	int num, qntde = 10;
	while(qntde > 0){
		cout << "Digite um numeral ";
		cin >> num;
		it = find(numeros.begin(), numeros.end(), num);
		if(it!=numeros.end()){
			cout << "Numeral ja existe no vector" << endl;
		}
		else{
			numeros.push_back(num);
			qntde--;
		}
		for(it = numeros.begin(); it!=numeros.end(); it++){
			cout<< *it << endl;
		}
	}
	return 0;
}
