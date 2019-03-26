#include <iostream>
using namespace std;

class Cola{
	private:
		class Nodo {
			public:
				int x;
				int y;
				int z;
				Nodo *sig;
		};
		
		Nodo *raiz;
		Nodo *fondo;
	public:
		Cola();   // constructor; >-< se encarga de construir un objeto
		~Cola();  
		void insetar( int x, int y, int z);
		int extraer();
		void imprimir();
		bool vacia();
		
};

Cola::Cola()
{
	raiz =NULL;
	fondo = NULL;
}

Cola::~Cola()
{
	Nodo *reco = raiz;
	Nodo *bor;
	while(reco!=NULL)
	{
		bor = reco;
		reco = reco->sig;
		delete bor;
	}
}

void Cola::insetar(int x, int y, int z)
{
	Nodo *nuevo;
	nuevo = new Nodo();
	nuevo->x = x;
	nuevo->y = y;
	nuevo->z = z;
	nuevo->sig = NULL;
	if(vacia())
	{
		raiz = nuevo;
		fondo = nuevo;
	}
	else{
		fondo->sig = nuevo;
		fondo = nuevo;
	}
} 

int Cola::extraer()
{
	if(!vacia())
	{
		int informacion = raiz->x;
		Nodo *bor = raiz;
		if (raiz == fondo)
		{
			raiz = NULL;
			fondo = NULL;
		}
		else
		{
			raiz = raiz->sig;
		}
		delete bor;
		return informacion;
	}
	else
	return -1;
}

void Cola::imprimir()
{
	Nodo *reco = raiz;
	cout<<"Listado de todos los elementos de la cola \n";
	while(reco!= NULL)
	{
		cout<<reco->x << "," << reco->y << "," << reco->z <<"," << "-";
		reco = reco->sig;
	}
	cout<<"\n";
}

bool Cola::vacia()
{
	if(raiz == NULL)
	   return true;
    else
       return false;
}



int main() {
	
	Cola *cola1 = new Cola(); // instanciar un objeto
	cola1->insetar(5,4,77);
	cola1->insetar(10,67,88);
	cola1->insetar(50,12,74);
	cola1->imprimir();
	cout<<"Extraemos uno de la cola:"<< cola1->extraer()<<"\n";
	cola1->imprimir();
	delete cola1;
	cin.get();
	
	return 0;
}
