#include <iostream>
#include <conio.h>
using namespace std;

class Persona{
	 
	 private:
	 char nombre[25];
	 char apellido[25];
	 int edad;
	 
	 public:
	 	Persona(); //constructor
	 	void hablar();
	 	void caminar();
	 	void dormir();
	 	~Persona(); //destructor
	 	
};

Persona::Persona(){
	edad=20.0f;
};

void Persona::hablar(){
	cout<<"Estoy hablando"<<endl;
};

void Persona::caminar(){
	cout<<"Estoy caminando"<<endl;
};

void Persona::dormir(){
	cout<<"Estoy durmiendo"<<endl;
};


int main() {
	Persona *p1;
	p1=new Persona();
	p1->hablar();
	p1->caminar();
	p1->dormir();
	
	getch();
	return 0;
}
