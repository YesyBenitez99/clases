#include <iostream>
#include <conio.h>

using namespace std;


struct productos
{	
	int codigo;
	char nombre[26];
	float precio;
	int year;
	
};


void agrenod();	
void lisnod();	
void busnod();	

	
	productos arreglo[]={};
	
	productos proaux;
	

	char r; 
	int no = 2;

int main()
{
	int opc;
	
	
	system("cls");
	

	do{
		
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1 - INGRESAR NUEVO DATO"<<endl;
	cout<<"2 - LISTA DE DATOS"<<endl;
	cout<<"3 - BUSCAR DATO"<<endl;
	cout<<"0 - SALIR DEL PROGRAMA"<<endl;
	cout<<"INGRESE UNA OPCION"<<endl;

	cin>>opc;
	

	system("cls");
	
	
switch(opc)     //verificacion de la opcion
{

	case 1: agrenod();  	//si la respuesta es uno entra a la funcion de agragar
 	
	break;     //si la respuesta es dos entrara a la funcion de lista
 	
	case 2: lisnod();
	
	break;       //si la respuesta es tres entrara a la funcion buscar
	
	case 3:	busnod();
	
	break;       //si la respuesta es cero se terminara el programa
	
	case 0: exit(1);
	
	default: 
	
	cout<<"\n Opcion no existe!!"<<endl;     //se imprime si la opcion no esta
	

	system("pause");
	
	
	main();    //regresa al comienzo del menu
}
	
}while(opc<1 && opc>4);     //si la opcion no es valida regresa al comienzo del menu
}
	
void agrenod()
{	
	do{


	cout<<"CODIGO DEL PRODUCTO"<<endl;
	cin>>proaux.codigo;
	cout<<"NOMBRE DEL PRODUCTO"<<endl;
	cin>>proaux.nombre;
	cout<<"PRECIO DEL PRODUCTO"<<endl;
	cin>>proaux.precio;		
	cout<<"ANIO DEL PRODUCTO"<<endl;
	cin>>proaux.year;
	
	arreglo[no]=proaux;      //almacena nodo en la variable auxiliar
	
	no++;     //genera otro nodo

	cout<<"Desea ingresar otro nodo?  [Y/N] ";

	cin>>r;
		
	}while(r=='y'||r=='Y');        //verifica respuesta, si la respuesta es "y" regresa al inicio de la funcion
	

	system("pause");
	
		
	main();    //si la respuesta es n sale y regresa al menu principal
}
	
void lisnod()
{
	system("cls");
	
	for (int i=2; i<=no-1; i++)
	{	
		cout<<"-------------NODO "<<i-1<<"----------------"<<endl;
		cout<<arreglo[i].codigo<<endl;
		cout<<arreglo[i].nombre<<endl;
		cout<<arreglo[i].precio<<endl;
		cout<<arreglo[i].year<<endl;
		cout<<"----------------------------------------"<<endl;
	}

	system("pause");
		
	main();
	
}

void busnod()
{
	int busq; 
	
	do{
	
	cout<<"Ingrese el codigo que quiere buscar"<<endl;
   	    cin>>busq;
		for(int i=2;i<=no-1;i++)
		{	
			if(busq==arreglo[i].codigo){
			cout<<"-------------NODO "<<i-1<<"----------------"<<endl;
			cout<<arreglo[i].codigo<<endl;
			cout<<arreglo[i].nombre<<endl;
			cout<<arreglo[i].precio<<endl;
			cout<<arreglo[i].year<<endl;
		
			cout<<"----------------------------------------"<<endl;
			
			}
		}
		
		cout<<"Desea buscar otro nodo?  [Y/N] ";

	cin>>r;
	
	
	}while(r=='y'||r=='Y');   //verifica respuesta, si la respuesta es "y" regresa al inicio de la funcion
	
	system("pause");
	
main();
}

