#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;


int main() {
	// trabajando con punteros 
	cout << "********* punteros ***********"<<endl;
	char *cadena = "ues";
	while (*cadena!='\0')
	{
		cout<<*(cadena)<<endl;
		cadena++;
	}
	
	cout << "********** inverso **********"<<endl;
	cout<<*(cadena-1)<<endl;
	cout<<*(cadena-2)<<endl;
	cout<<*(cadena-3)<<endl;
	
	
	cout << "********** VECTORES**********"<<endl;
	// trabajar con vectores 
	char cadena1[]="ues";
	for (int i=0; i<3; i++)
	cout<<cadena1[i]<<endl;
	getch();
	
	return 0;
}
