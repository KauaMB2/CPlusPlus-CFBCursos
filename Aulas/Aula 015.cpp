#include <iostream>
using namespace std;
int main(){
	int cont = 0;
	while(cont < 10000000000){
		cont++;
		cout << cont << "\n";
		if(cont >= 5000){
			break;
		}
	}
	return 0;
}
