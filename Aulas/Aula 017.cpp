#include <iostream>
using namespace std;
int main(){
	int x;
	for(int tmp = 0;tmp < 1000000000;tmp++){
		cout << tmp << "\n";
		if (tmp >= 50000){
		break;
		}
	}
	for(x= 0; x <= 10; x++){
		cout << x << "\n";
	}
	return 0;
}
