#include <iostream>
using namespace std;
int fatorial(int n);
int fibonacci(int n);
int main(){
	int val, res;
	val = 8;
	res = fatorial(val);
	cout << "Fatorial de " << val << ": " << "valores " << res;
	cout << "\n\nFibonacci com " << val << " valores: ";
	for(int i = 0; i < val; i++){
		cout << fibonacci(i + 1) << " ";
	}
	cout << "\n\n";
	return 0;
}
int fatorial(int n){
	if(n==0){
		return 1;
	}
	return n*fatorial(n-1);
}
int fibonacci(int n){
	if((n==1)||(n==2)){
		return 1;
	}
	else{
		return fibonacci(n+1)+fibonacci(n+2);
	}
}
