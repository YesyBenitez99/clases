#include <iostream>
#include <conio.h>
#include <stack>
#include <string.h>

using namespace std;

struct Productos{
	int codigo;
	char nombre[26];
	float precio;
	int year;
	
};




/*int menu()

//{
 int resp;
	do{
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1-INGRESAR NODO A LA PILA"<<endl;
	cout<<"2-ELIMINAR NODO DE LA PILA"<<endl;
	cout<<"3-LISTAR PILA"<<endl;
	cout<<"INGRESE UNA OPCION:"<<endl;
	cin>>resp;

	}while(resp<1 || resp>3 );
return resp;}
*/



int main(int argc, char** argv) {
	
	stack<Productos> pila;
	Productos proaux;
	//Productos arreglo[]={};
	Productos *puntero;
	int resp;
	char respuesta;
	
	
	
	//int resp;
	do{
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1-INGRESAR NODO A LA PILA"<<endl;
	cout<<"2-ELIMINAR NODO DE LA PILA"<<endl;
	cout<<"3-LISTAR PILA"<<endl;
	cout<<"INGRESE UNA OPCION:"<<endl;
	cin>>resp;

	}while(resp<1 || resp>3 );
//return resp;

do{
	

system("cls");
//int resp=menu();

	switch(resp)
	{
		case 1:
			
			    	cout<<"Ingrese codigo"<<endl;
					cin>>proaux.codigo;
					cout<<"Ingrese nombre"<<endl;
					cin>>proaux.nombre;
					cout<<"Ingrese precio"<<endl;
					cin>>proaux.precio;
					cout<<"Ingrese a�os"<<endl;
					cin>>proaux.year;
					pila.push(proaux);//agrega nodo a la pila
    				puntero=&pila.top();
			     break;
	    case 2:
	    	     pila.pop();
	    	     break;
	    	     
	    case 3:
	    	    puntero=&pila.top();
	    	    for(int i=1;i<=pila.size();i++)
				{
					proaux=*puntero;
					cout<<"-------------NODO"<<i<<"----------------"<<endl;
					cout<<"Cod:"<<proaux.codigo<<endl;
					cout<<"Nombre:"<<proaux.nombre<<endl;
					cout<<"Precio:"<<proaux.precio<<endl;
					cout<<"Year:"<<proaux.year<<endl;
					cout<<"--------------------------------------------"<<endl;
					puntero--;
				}
	    	
	    	     break;
	  
	   	
	
	}
	
	
	cout<<"quiere continuar[y/n]"<<endl;
	cin>>respuesta;
	
}while(respuesta =='Y' || respuesta =='y'  );
	
	

	getch();
	return 0;
}
