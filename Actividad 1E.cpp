#include <iostream>
using namespace std;
int main()
{
	//variables
	float alturaprod = 1.75;
	float alturapers[5] = {1.80, 2.03, 1.60, 1.70, 1.90};
	float promedio;
	int mayor = 0;
	int menor = 0;
	
	//Calculamos el promedio
	promedio= (alturapers[0] + alturapers[1] + alturapers[2] + alturapers[3] + alturapers [4]) / 5;
	
	//Mostramos el promedio de las alturas
	cout<<"Promedio de las alturas: "<<promedio;
	
	//recorremos los valores del vector y anotamos cuales son mayorres o menores al promedio
	for(int i = 0; i<5; i++)
	{
		if(alturapers[i] < alturaprod)
		{
			menor++;
		}
		else if(alturapers[i] > alturaprod)
		{
			mayor++;
		}
	}
	
	//Mostramos cuales alturas son mayores o menores al promedio
	cout<<endl;
	cout<<"Mayores al promedio: "<<mayor<<endl;
	cout<<"Mayores al promedio: "<<menor;
	
	
return 0;
}
