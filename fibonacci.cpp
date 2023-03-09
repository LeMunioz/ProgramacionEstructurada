#include <iostream>
#include <limits>
#include <sstream>
#include <limits>
#include <vector>
using namespace std;
using std::cin; using std::numeric_limits;

/*
[Angel Eduardo Muñoz Perez]
[31_Ene_2023]
[Actividad 4]
Centro Universitario de los Altos
Ingenieria en computación
[Prof. Franco Casillas Sergio]
--Este ´programa permitira calcular la serie de Fibonacci hasta donde el usuario indique--
*/
void fur();      //para que haga la funcion con for
void whyle();    //para que haga la funcion con while
void DoWhyle();  //para que haga la funcion con do while
int main();      //donde empezara
 
int valor1;  //variable del dato que preguntamos GLOBAL 
 
int main()
{

cout <<"Bienvenido al calculador de Fibonacci"<<endl;

cout <<"escribe el numero en donde quieres que se detenga"<<endl;
cin >>valor1;

while (valor1 > 32000)
	{
		cout<<"escribe otro numero mas chico porfa"<<endl;
		cin.clear();
		cin >>valor1;
	}
while (valor1 < 1)
	{
		cout<<"escribe otro numero mas grande porfa"<<endl;
		cin.clear();
		cin >>valor1;
	}
	
cout <<"Con que metodo quieres que calcule?"<<endl;
cout <<"_______________________"<<endl;
cout <<"| [1] con for         |"<<endl;
cout <<"| [2] con while       |"<<endl;
cout <<"| [3] con dowhile     |"<<endl;
cout <<"______________________"<<endl;
int opcion; //para leer el metodo	
cin >>opcion;
switch (opcion)
	{
		case 1:
			fur ();
			break;
		case 2:	
			whyle ();
			break;
		case 3:
			DoWhyle ();
			break;
			default:
			cout<<"esa no es una opcion joven"<<endl;
			break;		
	}	
}

void fur()
{

}

void whyle()
{
int numero;	
while (numero <= valor1)
numero = numero + numero;
cout <<numero<<endl;
 	
}

void DoWhyle()
{
	
}

