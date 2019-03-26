#include <iostream>
#include <stack>
using namespace std;

struct empleados{
	char codigos[9];
	char nombre[51];
	char apellidos[51];
	float sal;
};
int main() {
	empleados eaux;
	empleados *p;
	char res;
	stack<empleados>pila;
	do{
	
	cout<<"cod:"<<endl;
	cin>>eaux.codigos;
	cout<<"nombre: "<<endl;
	cin>>eaux.nombre;
	cout<<"apellido:"<<endl;
	cin>>eaux.apellidos;
	cout<<"salario:"<<endl;
	cin>>eaux.sal;
	pila.push(eaux);
	cout<<"Quiere ingresar otro empleado: y/n "<<endl;
	cin>>res;
  }	while(res=='y');
    
    p=&pila.top();
   // cout<<pila.size()<<endl;
    int c=1;     
	system("pause");
	return 0;
}
