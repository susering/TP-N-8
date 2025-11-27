#include <iostream>
using namespace std;
int main()
{
	//variables
	int vector[5]= {10, 8, 6, 4, 2};
	int suma;
	
	//sumamos los valores en cada posicion del vector
	suma = vector[0] + vector[1] + vector[2] + vector[3] + vector[4];
	
	//mostramos el resultado en pantalla
	cout<<"El resultado de la suma es: "<<suma;
	
return 0;
}
