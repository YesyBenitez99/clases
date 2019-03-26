#include <iostream>
#include <conio.h>
using namespace std;

class Pila{
	
	private:
		class Nodo{

			public:
				int info;
				Nodo *sig;
		};
		
		
		Nodo *raiz;
	public:
		Pila();
		~Pila();
		void insertar(int x);
		int estraer();
		void imprimir();
}; // fin clase


Pila::Pila()
{
	raiz=NULL;
}

void Pila::insertar(int x)
{
	Nodo *nuevo;
	nuevo=new Nodo();
	nuevo->info=x;
	if(raiz==NULL)
	{
		raiz=nuevo;
		nuevo->sig=NULL;
	}
	else
	{
		nuevo->sig=raiz;
		raiz=nuevo;
	}
}

void Pila::imprimir()

{
	Nodo *reco=raiz;
	cout<<"Listado de todos los elementos de la pila.\n"<<endl;
	while(reco!=NULL)
	{
		cout<<reco->info<<"-";
		reco=reco->sig;   // tambien se puede  desaselerar al hacer reco-- 
	}
	cout<<"\n";
}

int Pila::estraer()
{
	if(raiz!=NULL)
	{
		int informacion=raiz->info;
		Nodo *bor=raiz;
		raiz=raiz->sig;
		delete bor;
		return informacion;
	}
	else
	{
		return -1;
	}
}


Pila::~Pila()
{
	Nodo *reco=raiz;
	Nodo *bor;
	while(reco!=NULL)
	{
		bor=reco;
		reco=reco->sig;
		delete bor;
	}
}


int main() {
	Pila *pila1;
	pila=new Pila();
	pila1->insertar(10);
	pila1->insertar(40);
	pila1->insertar(3);
	pila1->imprimir();
	cout<<"Extraemos de la pila:"<<pila1->estraer()<<"\n";
	pila1->imprimir();
	delete pila1;
	cin.get();
	
	return 0;
}
