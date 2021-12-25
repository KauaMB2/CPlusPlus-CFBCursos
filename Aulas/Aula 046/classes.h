#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
using namespace std;
class Veiculo{
	public:
		int vel;
		int tipo;
		Veiculo(int tp);
		int getVelMax();
		bool getLigado();
		void setLigado(int l);
	private:
		void setVelMax(int vm);
		string nome;
		int velMax;
		bool ligado;
};
bool Veiculo::getLigado(){
	return ligado;
}
void Veiculo::setLigado(int l){
	if(l == 1){
		ligado = true;
	}
	else{
		ligado = false;
	}
}
int Veiculo::getVelMax(){
	return velMax;
}
void Veiculo::setVelMax(int vm){
	velMax = vm;
}
Veiculo::Veiculo(int tp){
	tipo = tp;
	if(tipo == 1){
		nome = "Carro";
		setVelMax(200);
	}
	else if(tipo == 2){
		nome = "Aviao";
		setVelMax(800);
	}
	if(tipo == 3){
		nome = "Navio";
		setVelMax(120);
	}
	setLigado(0);
#endif
}
