#include <iostream>
#include <vector>
using namespace std;
int main(){
	auto soma = [](vector<int>n)->int{
		auto s = 0;
		for(int x:n){
			s+=x;
		}
		cout << s << endl;
		return s;
	};
	cout << soma({1, 2, 3, 4, 5, 6, 7, 8, 9}) << endl;
	return 0;
}
