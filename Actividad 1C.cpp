#include <iostream>
using namespace std;
int main()
{
	//variables
	int vector[3] = {1, 2, 3};
	int lugar;
	int valor;
	
	//Duplicamos los valores en el vector y los mostramos en pantalla
	for(int i = 0; i<3; i++)
	{
		vector[i] = vector[i] * 2;
		cout<<vector[i]<<endl;
	}
	cout<<endl;
	
	//Pedimos que ingrese la posicion que quiere reemplazar y que nuevo valor ingresar
	cout<<"Ingrese un nuevo valor para ingresar al vector del 0 al 2: "<<endl;
	cin>>lugar; 
	cout<<"Ingrese el nuevo valor"<<endl;
	cin>>valor;
	cout<<endl;
	
	//Se reemplazan los valores y se vuelven a mostrar por pantalla
	for(int i = 0; i<3; i++)
	{
		if(lugar == i)
		{
			vector[i] = valor;
		}
	}
	
	for(int i = 0; i<3; i++)
	{
		cout<<vector[i]<<endl;
	}
	
	
return 0;
}
