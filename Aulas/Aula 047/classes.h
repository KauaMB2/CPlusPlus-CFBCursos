#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
using namespace std;
class Veiculo{
	public:
		int vel;
		int blind;
		int rodas;
		void setTipo(int tp);
		void setVelMax(int vm);
		void setArma(bool ar);
		void imp();
	private:
		int tipo;
		int velMax;
		bool arma;
};
void Veiculo::imp(){
	cout << "Tipo de veiculo...: " << tipo << endl;
	cout << "Velocidade Maxima.: " << velMax << endl;
	cout << "Quantidade de roda: " << rodas << endl;
	cout << "Blindagem.........: " << blind << endl;
	cout << "Armamento.........: " << arma << endl;
	cout << "================================" << endl;
}
void Veiculo::setTipo(int tp){
	tipo = tp;
}
void Veiculo::setVelMax(int vm){
	velMax= vm;
}
void Veiculo::setArma(bool ar){
	arma = ar;
}
class Moto:public Veiculo{
	public:
		Moto();
};
Moto::Moto(){
	vel = 0;
	blind = 2;
	rodas = 2;
	setTipo(1);
	setVelMax(120);
	setArma(false);
}
class Carro: public Veiculo{
	public:
		Carro();
};
Carro::Carro(){
	vel = 0;
	blind = 10;
	rodas = 4;
	setTipo(2);
	setVelMax(180);
	setArma(false);
}
class Tanque: public Veiculo{
	public:
		Tanque();
};
Tanque::Tanque(){
	vel = 0;
	blind = 40;
	rodas = 8;
	setTipo(3);
	setVelMax(200);
	setArma(true);
}
#endif

