#include <iostream>
using namespace std;
int main(){
	int n1, n2;
	n1 = 0;
	cout << "n1 definido como 0, n1 = 0\n\n";
	cout << "n1 = n1 + 5 = " << n1 << "\n\n";
	n1+= 5;
	cout << "n1 = n1 - 5 = " << n1 << "\n\n";
	n1-= 5;
	cout << "n1 = n1 + 1 = " << n1 << "\n\n";
	n1++;
	cout << "n1 = n1 + 1 = " << n1 << "\n\n";
	n1--;
	cout << "No final temos n1 = 0 novamente." << n1 << "\n\n";
	return 0;
}
