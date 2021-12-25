#include <iostream>
using namespace std;
struct carro{
    string nome;
    string cor;
    int pot;
    int velMax;
};
int main(){
	carro car1;
    carro car2;
    car1.nome = "Tornado";
    car1.cor = "Vermelho";
    car1.pot = 450;
    cout << "Nome...........: " << car1.nome << "\n";
    cout << "Cor...........: " << car1.cor << "\n";
    cout << "Potencia...........: " << car1.pot << "\n";
    cout << "Velocidade Maxima: " << car1.velMax << "\n\n";
    cout << "==================================\n\n";
    car1.velMax = 350;
    car2.nome = "Luxo";
    car2.cor = "Preto";
    car2.pot = 250;
    car2.velMax = 260;
    cout << "Nome...........: " << car2.nome << "\n";
    cout << "Cor...........: " << car2.cor << "\n";
    cout << "Potencia...........: " << car2.pot << "\n";
    cout << "Velocidade Maxima: " << car2.velMax << "\n\n";
    return 0;
}
