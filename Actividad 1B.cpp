#include <iostream>
using namespace std;
int main()
{
	//variables
	int vector[5]= {10, 8, 6, 4, 2};
	int suma;
	int promedio;
	
	//suma los valores en el vector y luego saca el promedio
	suma = vector[0] + vector[1] + vector[2] + vector[3] + vector[4];
	promedio = suma /5;
	
	//muestra la suma y el promedio en pantalla
	cout<<"El resultado de la suma es: "<<suma<<endl;
	cout<<"El promedio es de: "<<promedio;
	
return 0;
}
