#include <iostream>
using namespace std;

int main() {
	// declaracion de variable
	int i;
	int j;
	char temp;	     // variable auxiliar
	
	char*cade_a=new char[40];  // declarador new para inicializar char
	char*cade_b=new char[40];  

	cout<<"introduce una palabra: "<<endl;
	cin.get(cade_a,40);       // lee el caracter que introducimos en cout
	
	for(i=0; i<39; i++)      // 
	{
		temp=cade_a[i];
		cade_b[39-i]=temp;
	}
	
	for(j=0; j<40; j++)     
	
	cout<<cade_b[j]<<"";    // muestra cadena inversa
	if(cade_a==cade_b)      
	
	return 0;
}
