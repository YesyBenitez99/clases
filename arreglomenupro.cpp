#include <iostream>
#include <conio.h>

using namespace std;

struct producto
{
	
	int cod;
	char nombre[26];
	float precio;
	int year;
	
};

int main()
{
	producto arreglo[]={};
	producto aux;
	
	int bus;
	char resp;
	int n = 1;
	
	do{
	
	cout<<"CODIGO"<<endl;
	cin>>aux.cod;
	cout<<"NOMBRE"<<endl;
	cin>>aux.nombre;
	cout<<"PRECIO"<<endl;
	cin>>aux.precio;
	cout<<"ANIO"<<endl;
	cin>>aux.year;
	
	arreglo[n]=aux;
	n++;
	
	cout<<"quiere ingresar otro nodo? [Y/N] ";
	cin>>resp;
	
	}while(resp=='y'||resp=='Y');
	
	for (int i=1; i<=n-1; i++)
	{
		cout<<"-------------NODO "<<i<<"----------------"<<endl;
		cout<<arreglo[i].cod<<endl;
		cout<<arreglo[i].nombre<<endl;
		cout<<arreglo[i].precio<<endl;
		cout<<arreglo[i].year<<endl;
		cout<<"----------------------------------------"<<endl;
	}
	
	
	cout<<"Ingrese el codigo"<<endl;
   	    cin>>bus;
 	    
		for(int i=1;i<=n;i++)
		{
			if(bus==arreglo[i].cod){
			cout<<"-------------NODO "<<i<<"----------------"<<endl;
			cout<<arreglo[i].cod<<endl;
			cout<<arreglo[i].nombre<<endl;
			cout<<arreglo[i].precio<<endl;
			cout<<arreglo[i].year<<endl;
			cout<<"----------------------------------------"<<endl;
			
			}
		}

return 0;
}
