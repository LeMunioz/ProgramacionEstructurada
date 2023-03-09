#include <iostream>
#include <limits>
#include <stdlib.h>
#include <ctime>
using namespace std;
/*
[Angel Eduardo Muñoz Perez]
[actividad 10]
[Ingenieria en computación 2do semestre]
[Centro universitario de los Altos]
[06/Feb/2023]
[Prof. Sergio]
*/
//VARIABLES 
int tamano;
int A[0];
int x;
//FUNCIONES
int main();
void menu();
void poner();
void escribir();
void cambiar();
void sumar();
void vaciar();
void ordenar();
void buscar();
void salir();
void arreglo();
#include "func10.cpp"


int main()
{
	cout<<"\t\t BIENVENIDO A MI PROGRAMA"<<endl;
	cout<<"\t     De que tamaño quieres tu vector?"<<endl;
	while (true){
			if (cin >> tamano && tamano<51 && tamano>1){
					break;
				}else {
					cout <<"Esa no es una opcion querido"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');	
				}//fin del if para validar
			}//fin del while para validar
	A[tamano];
	menu();
}//FIN DEL MAIN


void menu()
{
	system ("cls");
	arreglo();//INVOCO LA FUNCION ARREGLO
	cout <<"\n        Que deseas hacer?"<<endl;
	//menu de opciones
	cout <<"__________________________________________"<<endl;
	cout <<"| [1] Escribir datos                     |"<<endl;
	cout <<"| [2] poner datos aleatorios             |"<<endl;
	cout <<"| [3] ordenar                            |"<<endl;
	cout <<"| [4] Sumar los datos                    |"<<endl;
	cout <<"| [5] Vaciar el arreglo                  |"<<endl;
	cout <<"| [6] Cambiar algun dato                 |"<<endl;
	cout <<"| [7] Buscar                             |"<<endl;
	cout <<"| [8] SALIR                              |"<<endl;
	cout <<"|________________________________________|"<<endl;	
	// variable de la opcion
	int opc;
//validar dato
		while (true){
			if (cin >> opc){
					break;
				}else {
					cout <<"Esa no es una opcion querido"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');	
				}//fin del if para validar
			}//fin del while para validar
	switch (opc)
	{//inicio del swich de opcion
		case 1://ESCRIBIR
			escribir();
			menu();
			break;	
		case 2://ALEATORIOS
			poner();
			break;
		case 3://ORDENAR
			ordenar();
			menu();
			break;		
		case 4://SUMAR
			int suma;
			sumar();
			//escribo suma
			cout<<"la suma es: ["<<suma<<"]"<<endl;
			system("pause");
			menu();	
			break;
		case 5://VACIAR
			vaciar();
			menu();
			break;
		case 6://CAMBIAR
			cambiar();
			break;
		case 7://BUSCAR
			cout<<"Quieres ordenarlos primero"<<endl;
			cout<<" [1] si        [2] no     "<<endl;
			while (true){
			if (cin >> x){
					break;
				}else {
					cout <<"Esa no es una opcion querido"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');	
				}//fin del if para validar
			}//fin del while para validar
			if (x==1){
				ordenar();
				arreglo();
				buscar();
			}//fin del IF 1
			if (x==2){
				buscar();
			}//fin del IF 2
			else{
				cout<<"pon 1 o 2 mi rey"<<endl;
			}	
			menu();
			break;
		case 8://SALIDA
			salir();	
			break;	
			default:		
				cout <<"esa no es una opcion joven"<<endl;
				menu(); 
				break;				
	}//fin del swich de opcion	
}//FIN DE F MENU


void poner()
{	
	srand((unsigned)time(NULL));//para que me cree numeros aleatorios
		for(int i=0; i<tamano; i++){
			A[i] = 0 + rand() % 201;
			cout<<"["<<A[i]<<"]";
		}cout<<endl;
	menu();	
}//FIN DE F PONER


void cambiar()
{
	int casilla=0; //para guardar la casilla donde desea cambiar dato
	int numero; 
	
	//validar dato de la pocision
			while (true)
				{
				cout<<"Cual pocision quieres cambiar?"<<endl;
				if (cin >> casilla)
					{
						break;
					}else {
						cout <<"Eso no es un numero joven"<<endl;
						cin.clear();
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
						
					}//fin del if para validar
				}//fin del while para validar	
	//validar dato que remplazara
			while (true)
				{
				cout<<"Que quieres poner?"<<endl;
				if (cin >> numero)
					{
						break;
					}else {
						cout <<"Eso no es un numero joven"<<endl;
						cin.clear();
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
						
					}//fin del if para validar
				}//fin del while para validar	
	A[casilla-1] = numero; //el valor de la n casilla se iguala al que escribimos
	menu();	
}//FIN DE F CAMBIAR


void salir()
{
	cout<<"Gracias por usarme :p"<<endl;
	cout<<"Programa hecho por LeMunioz"<<endl;
	system("pause");
	cout<<"Pd. te quiero mucho"<<endl;
}//FINAL




