#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctype.h>

using namespace std;
int cuenta_vocales(char *c)
{
	int cont=0;
	
	while(*c!='\0')
	{
		if (tolower(*c)=='a' || tolower(*c)=='e' || tolower(*c)=='i' || tolower(*c)=='o' || tolower(*c)=='u')
		{
			cont++; // contador de la vocales 
		}
		
		c++;  // incremento del puntero

	}
	
	return cont;
}


int main(int argc, char** argv) {
	//char *cadena="Hola progrAmadores";
	char *cadena="";
	char cade[80];
	cout<<"ingrese una cadena de caracteres:"<<endl;
	cin>>cade;
	cadena=cade;
	cout<<cuenta_vocales(cadena)<<endl;
getch();	
	return 0;
}
