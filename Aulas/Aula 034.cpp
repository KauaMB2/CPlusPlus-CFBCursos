#include <iostream>
using namespace std;
struct carro{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;
    void insere(string stnome, string stcor, int stpot, int stvelMax){
	nome = stnome;
	cor = stcor;
	pot = stpot;
	velMax = stvelMax;
	vel = 0;
	}
	void mostra(){
		cout << "=====================\n\n";
		cout << "Nome...........: " << nome << "\n";
	    cout << "Cor...........: " << cor << "\n";
	    cout << "Potencia...........: " << pot << "\n";
	    cout << "Velocidade atual: " << vel << "\n";
	    cout << "Velocidade Maxima: " << velMax << "\n\n";
	}
	void mudoVel(int mv){
		vel = mv;
		if(vel > velMax){
			vel = velMax;
		}
		if(vel < 0){
			vel = 0;
		}
	}
};
int main(){
	carro car1;
    carro car2;
    car1.insere("Tornado", "Vermelho", 450, 350);
    car2.insere("Luxo", "Preto", 250, 260);
    car1.mostra();
    car2.mostra();
	return 0;
}
