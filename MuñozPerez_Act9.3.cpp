#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
[Angel Eduardo Muñoz perez]
[Actividad 6]
[Ingenierira en computación 2do semestre]
[Centro Universitario de los altos]
[Prof. Sergio Franco Casillas]
*/

//FUNCIONES
int main();
void menu();
void verlas(); //para escribir las matrices
void sumar();
void restar();
void multiplicacion();
void division();
void salir();

//variables
int tamano=0;//tamaño de las matrices
int f=0;//filas
int c=0;//columnas
int a[10][10];//matriz 1
int b[10][10];//matriz 2
int res[10][10];//matriz 3
int aux[10][10];
//libreria de funciones
#include "func9.cpp"

int main()
{
	cout <<"        Bienvenido estimado"<<endl;
	cout <<"       Programa de matrices"<<endl;
	cout <<"De que tamaño quieres que sean las matrices?"<<endl;
	
//pongo rango y valido tamano
	while (true)
			
			{	
			if (cin >> tamano && tamano >2 && tamano <11)
				{
					break;
				}
				else
				{
					cout <<"Pon el tamano en numeros carino (3-10)"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');					
				}//fin del if para validar
			}//fin del while para validar	
	menu ();		
}//fin de F MAIN

void menu()
{
	system ("cls");
	//MENU DE OPCIONES
    cout<<"que deseas hacer con ellas?"<<endl;
    cout<<"________________________________________"<<endl;
    cout<<"|[1] Sumar                             |"<<endl;
	cout<<"|[2] Restar                            |"<<endl;
    cout<<"|[3] Multiplicar                       |"<<endl;
    cout<<"|[4] Dividir                           |"<<endl;
    cout<<"|[5] verlas                            |"<<endl;
    cout<<"|[6] salir                             |"<<endl;
    cout<<"|______________________________________|"<<endl;
	//validacion de OPCION
	int opcion;
	while (true)
			{
			if (cin >> opcion)
				{
					break;
				}else {
					cout <<"Esa no es una opcion querido"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');					
				}//fin del if para validar
			}//fin del while para validar
	switch (opcion)
	{
	case 1:
		sumar();
		break;
	case 2:
		restar();
		break;
	case 3:
		multiplicacion();
		break;
	case 4:
		division();
		break;
	case 5:
		verlas();
		break;
	case 6:
		salir();
		break;
			default:		
			cout<<"Esa no es una joven mi jovenazo"<<endl;
			system ("pause");
			menu();
			break;					
	}//fin del switch		
}//FIN DEL F MENU

void verlas()
{
	ver();
	system ("pause");
	menu();
}//FIN DE FUNC MATRIZ

void sumar()
{
	ver();//invoco la funcion para ver las dos matrices
	sum();//invoco la funcion suma
	
	//escribimos el resultado
	cout<<"__esta es la suma__"<<endl;
	for (int c=0; c <tamano; c++){
		for (int f=0; f <tamano; f++){
			cout<<"["<<res[f][c]<<"]\t";
		}//fin del segundo for
		cout<<"\n";
	}//fin del primer for
	
	system("pause");
	menu();
}//FIN DE FUNC SUMAR

void restar()
{
	ver();//invoco la funcion para ver las dos matrices
	rest();//incoco la funcion resta
	
	//mostrar resta
	cout<<"__Esta es la resta__"<<endl;
	for(int f=0; f <tamano; f++){
		for (int c=0; c <tamano; c++){
		cout<<"["<<res[f][c]<<"]\t";	
		}//fin del primer for
		cout<<"\n";		
	}//fin del segundo for
	system ("pause");
	menu();
}//FIN DE FUNC RESTAR

void multiplicacion()
{
	ver();//invoco la funcion para ver las dos matrices
	mul();//invoco la funcion multiplicacion
    
    //escribir la multiplicacion
    cout<<"__La Multiplicacion es__"<<endl;
    for(int f=0; f<tamano; f++){
    	for(int c=0; c<tamano; c++){
    		cout<<"["<<res[f][c]<<"]\t";
		}//fin del segundo for
		cout<<"\n";
	}//fin del primer for
	system ("pause");
	menu();	
}//FIN DE FUN MULTIPLICAR

void division()
{
	cout<<"De a / b [1]  De b / a [2]"<<endl;
	while (true)
			{
			if (cin >> opcion)
				{
					break;
				}else {
					cout <<"Esa no es una opcion querido"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');					
				}//fin del if para validar
			}//fin del while para validar
	ver();
	div();
    
    //escribir la division
    cout<<"__LA division es__"<<endl;
    for(int f=0; f<tamano; f++){
    	for(int c=0; c<tamano; c++){
    		cout<<"["<<res[f][c]<<"]\t";
		}//fin del segundo for
		cout<<"\n";
	}//fin del primer for
	system ("pause");
	menu();
}

void salir()
{
	cout<<"A D I O S   A M I G O"<<endl;
}


