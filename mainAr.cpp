#include <iostream>
using namespace std;

struct nodo{
	int nro;
	struct nodo *izq, *der;
};
typedef struct nodo *ABB; //le pone un aliaz a struct nodo el cual es ABB

void insertar(ABB &arbol, int x) //resive el valor de x
{
	if(arbol == NULL)//solo si no hay ni un valor
	{
		ABB nuevonodo=new(struct nodo); //crea nodo
		nuevonodo->nro=x;
		nuevonodo->izq=NULL;
		nuevonodo->der=NULL;
		arbol=nuevonodo;//cabia la direccion del apunte de arbol
	}
	
	else if(x<arbol->nro)
		insertar(arbol->izq,x); //funcion recursiva 
	else if(x>arbol->nro)
		insertar(arbol->der,x); //funcion recursiva 
}

void verarbol (ABB arbol, int n)
{
	if(arbol==NULL)
		return;
		
	verarbol(arbol->der,n+1);
	for(int i=0; i<n; i++)
	{
		cout<<"   "<<endl;
	}
		cout<<arbol->nro<<endl;
		verarbol(arbol->izq,n+1);		
}

void preorden(ABB arbol)
{
	if(arbol!=NULL)
	{
		cout<<arbol->nro<<"  ";
		 preorden(arbol->izq);
		 preorden(arbol->der);
	}
}
void posorden(ABB arbol)
{
	if(arbol!=NULL)
	{
		 preorden(arbol->izq);
		 preorden(arbol->der);
		 cout<<arbol->nro<<"  ";
	}
}

void inorden(ABB arbol)
{
	if(arbol!=NULL)
	{
		 preorden(arbol->izq);
		 cout<<arbol->nro<<"  "; 
		 preorden(arbol->der);
	}
}	

int main()
{
	ABB arbol=NULL;
	int x;//dato insertar en el nodo
	int n;//numero de nodos
	
	cout<<"ARBOL BINARIO"<<endl;
	cout<<"Inserte el numero de nodos del arbol: "<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Ingrese el valor del nodo"<<endl;
		cin>>x;
		insertar(arbol,x);//2  7  5
	}
	cout<<"Mostrando el arbol"<<endl;
	verarbol(arbol,n);
	
	cout<<"Mostrando el arbol en preorden"<<endl;
	preorden(arbol);
	cout<<endl;
	cout<<"Arbol en posorden"<<endl;
    posorden(arbol);
    cout<<endl;
	cout<<"Arbol en inorden"<<endl;
    inorden(arbol);
	
	system("pause");
	return 0;	
}

