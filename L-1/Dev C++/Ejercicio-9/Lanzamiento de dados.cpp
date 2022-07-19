#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char** argv) 
{	
	int d1 = 0;
	int d2 = 0;
	int n = 0;
	int m = 1;
	
	cout<<"\nLANZAMIENTO DE DADOS "<< endl;
	cout<<endl;
	
	//Datos de entrada
	cout<<"Ingrese las tiradas que desea realizar: ";
	cin >>n;
	cout<<endl;
	
	//Inicializa el numero random
	srand(time(NULL));
	
	//Proceso
	while (m<= n)
	{
		for (int i = 0; i < 1; i++)
	{
		//Genera un numero entre 1 y 6
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
	}
		
	cout<<"La cara del dado 1 es: " << d1 <<endl;
	cout<<"La cara del dado 2 es: " << d2 <<endl;	
	cout<<endl;
	
	system ("pause");
    
    m++;
	}	

	return 0;
}
