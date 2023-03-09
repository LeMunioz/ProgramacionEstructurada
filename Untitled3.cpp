#include <iostream>
using namespace std;

/*
[Angel Eduardo Muñoz Perez]
[31_Ene_2023]
[Actividad 4]
Centro Universitario de los Altos
Ingenieria en computación
[Prof. Franco Casillas Sergio]
--Este ´programa permitira calcular la serie de Fibonacci hasta donde el usuario indique--
*/


int main ()
{
	int valor1;
	cin >>valor1;
			int numero1= 0; //para calcular los numeros de fibonacci
			int numero2= 0;
			int numero3= 1; 
			int numero4= 1; //el numero de fibonacci
			int i =1;
			
				for (int i = 1; i <numero1; i++)
			{
				numero4 = numero2 + numero3;
				cout << numero4 <<" ";
				numero2 = numero3;
				numero3 = numero4;
			}	
}
