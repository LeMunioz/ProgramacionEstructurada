#include <iostream>
#include <limits> //para validaciones
#include <stdlib.h>
#include <string> //libreria para leer

using namespace std;
/*
[Angel Eduardo Muñoz Perez]
[CUALTOS_ Programación estructurada
[Ing. Computacion 2do semestre]
[Prof. Sergio]
[12_03_2023]
*/

//VARIABLES GLOBALES
char frase[50];
char fraseaux[50];
char otrafrase[50];
string palabra;
int i;

//FUNCIONES
int main();  
void menu();
#include "func12.cpp"

int main(){
	system("cls");
	cout<<"\t\tBIENVENIDO A MI PROGRAMA"<<endl;
	cout<<"=============================================="<<endl;
	cout<<"Pon tu palabra o frase"<<endl;
	fflush(stdin);
	getline (cin, palabra);
	for (int i=0; i<palabra.length(); i++){
		frase[i]=palabra[i];
	}
	menu();
}//FIN DE F MAIN


void menu(){
	int opc;//variable de opcion
	
	system ("cls");
	cout<<"\t  aqui tiene su frase:"<<endl;
	cout<<"[ "<<frase<<" ]"<<endl;
	cout<<"\nQue deseas hacer?"<<endl;
	cout<<"_________________________________________"<<endl;
	cout<<"| [1] escribir mi palabra               |"<<endl;
	cout<<"| [2] calcular vocales y consonantes    |"<<endl;
	cout<<"| [3] emparejar texto                   |"<<endl;
	cout<<"| [4] verificar palindromo              |"<<endl;
	cout<<"| [5] Agregarle algo                    |"<<endl;
	cout<<"| [6] SALIR                             |"<<endl;
	cout<<"|_______________________________________|"<<endl;
	
	while (true){ //validacion
			if (cin >> opc){ //si lee la opcion
				switch (opc){
					case 1:
						main();
					break;
					case 2:
						contar();
					break;
					case 3:
						convertir();
					break;
					case 4:
						palindromo();
					break;
					case 5:
						concatenar();
					break;
					case 6:
						abort();
					break;
						default:
							cout <<"esa no es una opcion querido"<<endl;
							system ("pause");
						menu();
						break;					
				}//fin de switch opcion 		
				}else { //si no lee la opcion
					cout <<"Ponga un numero mi rey porfas"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
					system("pause");
					menu();	
				}//fin del if para validar
			}//fin del while para validar
}//FIN DE F MENU

