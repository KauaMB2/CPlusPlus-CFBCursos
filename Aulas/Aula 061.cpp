#include <iostream>
#include <map>
using namespace std;
int main(){
	map<int,string>prod;
	map<int,string>::iterator itmap;
	prod.insert(pair<int, string>(0, "Mouse"));
	prod.insert(pair<int, string>(1, "Teclado"));
	prod.insert(pair<int, string>(2, "Monitor"));
	prod.insert(pair<int, string>(3, "Cx.Som"));
	prod.insert(pair<int, string>(4, "Microfone"));
	prod.insert(pair<int, string>(5, "Gabinete"));
	prod.insert(pair<int, string>(6, "Camera"));
	prod.erase(prod.find(1), prod.find(5));
	for(auto it:prod){
		cout << it.first << " - " << it.second << endl;
	}
	return 0;
}
