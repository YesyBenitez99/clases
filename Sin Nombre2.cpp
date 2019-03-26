#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

struct Ahorrante{  // tipo de dato
	
	char ncuenta[10];
	char nombre[50];
	char apellido[50];
	
};

void menu()
{
	cout<<"1- Mostrar cola"<<endl;
	cout<<"2-Agregar nodo a la cola"<<endl;
	cout<<"3- Eliminar  "<<endl;
	cout<<"4- Salir"<<endl;
}

int main() {
	queue<Ahorrante> cola; // cola que almacena nodos de tipo ahorrante
	Ahorrante aux;
	Ahorrante *puntero;
	int opcion;
	
	// opcion meu
	
	do{
	
	menu();
	cin>>opcion;
	
	switch (opcion)
	{
		case 1: // mostrar cola 
		system ("cls");
		puntero=&cola.front();
	
		for(int i=0; i<cola.size(); i++){
			aux=*puntero;
			cout<<puntero.ncuenta<<endl;
			cout<<puntero.nombre<<endl;
			cout<<puntero.apellido<<endl;
			puntero++;
		}
	    	break;
	    	
	    case 2://agregar nodo
		// pide datos al usuario 
		     system ("cls");
	    	 cout<<"Ingrese el numero de cuenta"<<endl;
	    	 cin>>aux.ncuenta;
	    	 cout<<"Ingrese el nombre"<<endl;
	    	 cin>>aux.nombre;
	    	 cout<<"Ingrese el apellido"<<endl;
	    	 cin>>aux.apellido;
	    	 // fin de pedi datos a usuario
	    	 cola.push(aux); //  inserta los datos en la cola
	    	break;
	    	
	    case 3: // eliminar nodo
	        system ("cls");
	    	cola.pop();
	    	cout<<"nodo eliminado"<<endl;
	    	break;
	}
	}while(opcion<4 && opcion<4);
	
	system ("PAUSE");
} return 0;
