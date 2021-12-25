#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
using namespace std;
class Base1{
	public:
		void impBase1();
};
void Base1::impBase1(){
	cout << "Imp classe Base1" << endl;
}
class Base2{
	public:
		void impBase2();
};
void Base2::impBase2(){
	cout << "Imp classe Base2" << endl;
}
class CFB:public Base1, public Base2{
};
#endif

