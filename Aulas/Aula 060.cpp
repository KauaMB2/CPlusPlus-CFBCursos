#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main(){
	const int tam = 3;
	vector <pair<int, string>> prod;
	prod.push_back(make_pair(10, "mouse"));
	prod.push_back(make_pair(20, "teclado"));
	prod.push_back(make_pair(30, "monitor"));
	for(auto i:prod){
		cout << i.first << " - " << i.second << endl;
	}
	return 0;
}
