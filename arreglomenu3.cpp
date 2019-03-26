

//librerias utilizadas
#include <iostream>
#include <conio.h>

//cuerpo del programa
using namespace std;

//estructura
struct pro
{	
	int codigo;	//variable representa al codigo del producto
	char nombre[26];//variable representa al nombre del producto
	float precio;//variable representa al precio del producto
	int year;//variable representa al año del producto
	
};

//funciones del menu principal
void agrenod();	//agrega datos
void lisnod();	//muestra los datos en una lista
void busnod();	//busca nodos

	//arreglo de la estrucura producto
	producto arreglo[]={};
	//declara variable auxiliar
	producto proaux;
	
	//variables globales
	char r; //representa algunas respuestas
	int no = 2;// represeta el numero de nodos

int main()
{
	int opc;//representa las opciones del menu
	
	//codigo para limpiar la pantalla
	system("cls");
	
	//ciclo para el menu principal
	do{
		//imprime opciones del menu principal
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1 - INGRESAR NUEVO DATO"<<endl;
	cout<<"2 - LISTA DE DATOS"<<endl;
	cout<<"3 - BUSCAR DATO"<<endl;
	cout<<"0 - SALIR DEL PROGRAMA"<<endl;
	cout<<"INGRESE UNA OPCION"<<endl;
	//amacena la opcion
	cin>>opc;
	
	//codigo para limpiar la pantalla
	system("cls");
	
	//verificacion de la opcion
switch(opc)
{
	//si la respuesta es uno entra a la funcion de agragar
	case 1: agrenod();
 	
	break;
 	//si la respuesta es dos entrara a la funcion de lista
	case 2: lisnod();
	
	break;
	//si la respuesta es tres entrara a la funcion buscar
	case 3:	busnod();
	
	break;
	//si la respuesta es cero se terminara el programa
	case 0: exit(1);
	
	default: 
	//se imprime si la opcion no esta
	cout<<"\n Opcion no existe!!"<<endl; 
	
	//codigo para pausar la pantalla
	system("pause");
	
	//regresa al comienzo del menu
	main();
}
	//si la opcion no es valida regresa al comienzo del menu
}while(opc<1 && opc>4);
}
	//cuerpo de la funcion para agregar datos
void agrenod()
{	
	//ciclo para la respuesta
	do{

	//imprime peticion
	cout<<"CODIGO DEL PRODUCTO"<<endl;
	//almacena dato
	cin>>proaux.codigo;

	//imprime peticion
	cout<<"NOMBRE DEL PRODUCTO"<<endl;
	//almacena dato
	cin>>proaux.nombre;
	
	//imprime peticion	
	cout<<"PRECIO DEL PRODUCTO"<<endl;
	//almacena dato
	cin>>proaux.precio;

	//imprime peticion		
	cout<<"AÑO DEL PRODUCTO"<<endl;
	//almacena dato
	cin>>proaux.year;
	
	//almacena nodo en la variable auxiliar
	arreglo[no]=proaux;
	//genera otro nodo
	no++;
	//imprime peticion
	cout<<"Desea ingresar otro nodo?  [Y/N] ";
	//almacena respuesta
	cin>>r;
		//verifica respuesta, si la respuesta es "y" regresa al inicio de la funcion
	}while(r=='y'||r=='Y');
	
	//codigo para pausar la pantalla
	system("pause");
	
		//si la respuesta es n sale y regresa al menu principal
	main();
}
	//cuerpo de la funcion para imprimir datos
void lisnod()
{
	//codigo para limpiar la pantalla
	system("cls");
	
	//ciclo para mostrar todos los nodos al macenado en forma de lista
	for (int i=2; i<=no-1; i++)
	{	//imprime posicion del nodo
		cout<<"-------------NODO "<<i-1<<"----------------"<<endl;
		//imprime codigo del nodo
		cout<<arreglo[i].codigo<<endl;
		//imprime nombre del nodo
		cout<<arreglo[i].nombre<<endl;
		//imprime precio del nodo
		cout<<arreglo[i].precio<<endl;
		//imprime año del nodo
		cout<<arreglo[i].year<<endl;
		//imprime separador
		cout<<"----------------------------------------"<<endl;
	}
	//codigo para pausar la pantalla
	system("pause");
		
	//regresa al menu principal
	main();
	
}

//cuerpo de la funcion para buscar datos
void busnod()
{
	int busq; //representa a la busqueda de datos
	
	//ciclo para la respuesta
	do{
	
	//imprime peticion
	cout<<"Ingrese el codigo que quiere buscar"<<endl;
		//almacena dato
   	    cin>>busq;
 	    //ciclo para recorer todos los nodos almacenados en forma de lista
		for(int i=2;i<=no-1;i++)
		{	
			//condicion para mostrar entre todos los nodos al que se busca
			if(busq==arreglo[i].codigo){
				//imprime posicion del nodo
			cout<<"-------------NODO "<<i-1<<"----------------"<<endl;
			//imprime codigo del nodo
			cout<<arreglo[i].codigo<<endl;
			//imprime nombre del nodo
			cout<<arreglo[i].nombre<<endl;
			//imprime precio del nodo
			cout<<arreglo[i].precio<<endl;
			//imprime año del nodo
			cout<<arreglo[i].year<<endl;
			//imprime separador
			cout<<"----------------------------------------"<<endl;
			
			}
		}
		//imprime peticion
		cout<<"Desea buscar otro nodo?  [Y/N] ";
	//almacena respuesta
	cin>>r;
	
	//verifica respuesta, si la respuesta es "y" regresa al inicio de la funcion
	}while(r=='y'||r=='Y');
	
	//codigo para pausar la pantalla
	system("pause");
	
main();
}

