#include <iostream>
#include <limits>
using namespace std;

/*
[Angel Eduardo Muñoz Perez]
[actividad 5]
[Ingenieria en computación 2do semestre]
[Centro universitario de los Altos]
[06/Feb/2023]
[Prof. Sergio]
*/

//funciones
int main();
void escribir();
void sumatoria();
void vaciado();
void cambiar();
void salir();


//el arreglo "A"
int A [10];
//variables globales para la validacion de datos
int N; //numero natural

int main()
{
system("cls");
	cout <<"       Bienvenido mi estimado"<<endl;
	cout <<"     Este de aqui es tu arreglo"<<endl;
	cout <<"["<<A[0]<<"] "<<"["<<A[1]<<"] "<<"["<<A[2]<<"] "<< //escribimos los valores del arreglo
	       "["<<A[3]<<"] "<<"["<<A[4]<<"] "<<"["<<A[5]<<"] "<<
	       "["<<A[6]<<"] "<<"["<<A[7]<<"] "<<"["<<A[8]<<"] "<<
	       "["<<A[9]<<"] "<<endl; 
	cout <<"          Que deseas hacer?"<<endl;
	//menu de opciones
	cout <<"__________________________________________"<<endl;
	cout <<"| [1] Escribir datos                     |"<<endl;
	cout <<"| [2] Sumar los datos                    |"<<endl;
	cout <<"| [3] Vaciar el arreglo                  |"<<endl;
	cout <<"| [4] Cambiar algun dato                 |"<<endl;
	cout <<"| [5] SALIR                              |"<<endl;
	cout <<"|________________________________________|"<<endl;
	// variable de la opcion
	int opc;
	cin >>opc;
	switch (opc)
	{//inicio del swich de opcion
		case 1:
			escribir();
			break;
		case 2:
			sumatoria();
			break;
		case 3:
			vaciado ();
			break;		
		case 4:
			cambiar();
			break;
		case 5:
			salir();
			break;	
			default:		
				cout <<"esa no es una opcion joven"<<endl; 
				break;		
	}//fin del swich de opcion	
}//fin del main


void escribir()
{//inicio e la F de sumatoria

	system("cls");//borra la consola para cuando llegues al principio
		for (int i=0; i <10; i++) //iteracion que empieze de 0 hasta 9
			{//inicio de for
			
			//validar dato
			while (true)
				{
				cout <<"ingrese el dato de la "<<i<<"va casilla"<<endl;
				if (cin >> A [i])
					{
						break;
					}else {
						cout <<"Eso no es un numero joven"<<endl;
						cin.clear();
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
						
					}//fin del if para validar
				}//fin del while para validar
			
			
			system("cls");//borra la consola para cuando llegues al principio	
			}//fin de for	
			main();

}//fin de la F de sumatoria


void sumatoria()
{//inicio de F suma
	int suma = 0;//aqui se guarda el resultado

	suma = A[0]+A[1]+A[2]+A[3]+A[4]+A[5]+A[6]+A[7]+A[8]+A[9];
	cout <<"la suma de los datos es: "<<suma<<endl;
	system("pause");
	main ();
}//fin de F suma


void vaciado()
{//inicio de F vaciar
	for (int i=0; i < 11; i++)//iterador para que pase por todos los valores del arreglo
		{
		A[i]=0;
		}	
		main();		
}//fin de F vaciar 

void cambiar()
{//inicio de F cambiar
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
	A[casilla] = numero; //el valor de la n casilla se iguala al que escribimos
	main();
}//fin de F cambiar

void salir ()
{//Ya pra salirse fuga!
	cout<<"PROGRAMA HECHO POR LeMunioz"<<endl;
	cout<<"tenks :P"<<endl;
}//ADIOS AMIG0S :)



