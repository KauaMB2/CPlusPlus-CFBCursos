#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	float pi = M_PI;
	printf("Valor de PI: %f\n", pi);
	printf("Valor de PI com apenas duas casas decimais(printf): %.2f\n",pi);
	cout.precision(3);//Limita as casas decimais para apenas duas no m�ximo
	cout << "Valor de PI com apenas duas casas decimais(cout): " << pi << "\n";
	cout.precision(-1);//Volta as confiigura��es das casas decimasi para o padr�o(normal)
	cout << "Valor de PI: " << std::scientific << pi << "\n";
	int num = 30;
	cout << "Valor de NUM: " << setw(10) << num << "\n";
	cout << "Valor de NUM: " << setw(10) << setfill('0') << num << "\n";
	return 0;
}
