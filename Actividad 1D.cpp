#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	//variable
	int vector[10];
	int valor;
	int maximo;
	int minimo;
	
	//Se le pide al usuario que ingrese los valores
	cout<<"Ingrese un valor para guardar"<<endl;
	
	//Ingresamos los valores
	for(int i = 0; i<10; i++)
	{
		cin>>valor;
		vector[i]=valor;
	}
	
	//Asignamos valores
	maximo = vector[0];
	minimo = vector[0];
	
	//Encontrar el numero mayor y el menor
	for(int i = 0; i < 10; i++)
	{
		if(vector[i]>maximo)
		{
			maximo = vector[i];
		}
		else if(vector[i]<minimo)
		{
			minimo = vector[i];
		}
	}
	
	//Mensaje que muestra el valor maximo y minimo
	cout<<endl;
	cout<<"Maximo: "<<maximo<<endl;
	cout<<"Minimo: "<<minimo;
	
return 0;
}
