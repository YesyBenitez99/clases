#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;

struct Ahorrante{
	
	int ncuenta;
	char nombre[25];
	char apellido[25];
	
};


void agregar();
void eliminar();


queue<Ahorrante> pila;
	Ahorrante proaux;
	Ahorrante *puntero;
	char res;
	
int main() {
	
	int opc;
	
	system ("cls");
	
	do{
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1 - INGRESAR NODO A LA PILA"<<endl;
	cout<<"2 - ELIMINAR NODO DE LA PILA"<<endl;
	//cout<<"3 - LISTAR PILA"<<endl;
	cout<<"3 - SALIR"<<endl;
	cout<<"INGRESE UNA OPCION"<<endl;
	cin>>opc;
	
	
	switch(opc)
{
	
	case 1: agregar();
 	
	break;
 
	case 2: eliminar();
	
	break;

//	case 3: listar();

	break;

	case 0: exit(1);
	
	default: 
	//se imprime si la opcion no esta
	cout<<"\n Opcion no valida!!"<<endl; 
	
	//comando para detener la pantalla
	system ("pause");
}
	
}while(opc<1 && opc>3);
	return 0;
}

void agregar()
{
	system ("cls");

	
	do{
	cout<<"ingrese numero de cuenta"<<endl;
	cin>>proaux.ncuenta;
	cout<<"ingrese nombre"<<endl;
	cin>>proaux.nombre;
	cout<<"ingrese apellido"<<endl;
	cin>>proaux.apellido;
	pila.push(proaux);
	
	cout<<"agregar otro nodo? Y/N: "<<endl;
	cin>>res;
	}while(res=='y'||res=='Y');
	
main();
}


void eliminar(){

pila.pop();

system("pause");

main();	
}
//	return 0;
//}

/*void listar()
{
	system ("cls");
	
	puntero=&pila.front();
	
	for (int i=1;i<=pila.size();i++){
			proaux = *puntero;
		
	cout<<"----------------------------"<<endl;
	cout<<"----------------------------"<<endl;
	
	cout<<"numero de cuenta: "<<proaux.ncuenta<<endl;
	cout<<"nombre: "<<proaux.nombre<<endl;
	cout<<"apellido: "<<proaux.apellido<<endl;
	
	
	puntero++;
	}
	system("pause");
	
main();
}**/


	

