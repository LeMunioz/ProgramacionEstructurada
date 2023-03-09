#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
#include "func9.cpp"


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
void multip();
void division();
void salir();

//variable
int tamano=0;//tamaño de las matrices
int f=0;//filas
int c=0;//columnas
int a[10][10];//matriz 1
int b[10][10];//matriz 2
int res[10][10];//matriz 3
int aux[10][10];


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
					cout <<"Pon el tamano en numeros carino (3-9)"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');					
				}//fin del if para validar
			}//fin del while para validar	
	menu ();		
}//fin de F MAIN


void verlas()
{
	srand((unsigned)time(NULL));
	//HACER MATRIZ*
	cout<<"Matriz 1"<<endl;
	for(c=0;c<tamano;++c)
	{
		for(f=0;f<tamano;++f)
		{
			a[f][c] = -200 + rand() % 601;
            printf("[%d]\t",a[f][c]);	
		}
		printf("\n");
	}//fin de for para matriz 1

	c =0;
	f =0;
	cout<<"Matriz 2"<<endl;
		for(c=0;c<tamano;c++)
	{
		for(f=0;f<tamano;f++)
		{
			b[f][c] = -200 + rand() % 601;
            printf("[%d]\t",b[f][c]);	
		}
		printf("\n");
	}//fin de for para matriz 2
	system("pause");
	menu();
}//FIN DE FUNC MATRIZ


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
		multip();
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
			break;					
	}//fin del switch		
	
}//FIN DEL F MENU


void sumar()
{
	//hacemos resta
	for (int c=0; c <tamano; c++){
		for (int f=0; f <tamano; f++){
			res[f][c]=a[f][c]+b[f][c];
		}//fin del segundo for
	}//fin del primer for
	
	//escribimos el resultado
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
	//hacer resta
	for (int c=0; c <tamano; c++){
		for (int f=0; f <tamano; f++){
			res[f][c]=a[f][c]-b[f][c];
		}//fin del segundo for
	}//fin del primer for
	
	//mostrar resta
	for(int f=0; f <tamano; f++){
		for (int c=0; c <tamano; c++){
		cout<<"["<<res[f][c]<<"]\t";	
		}//fin del primer for
		cout<<"\n";		
	}//fin del segundo for
	system ("pause");
	menu();
	
}//FIN DE FUNC RESTAR


void multip()
{
	//hacer multiplicacion
	for (f=0;f<tamano;f++){
	for (c=0;c<tamano;c++){
	res[f][c]=0;
         for (int k=0;k<tamano;k++){
		 res[f][c]=res[f][c]+a[f][k]*b[k][c];
        	}//fin del tercer for
        }//fin del segundo for
    }//fin del primer for
    
    //escribir la multiplicacion
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
	//hacer multiplicacion
	for (f=0;f<tamano;f++){
	for (c=0;c<tamano;c++){
	res[f][c]=0;
         for (int k=0;k<tamano;k++){
		 aux[f][c]=aux[f][c]+a[f][k]*b[k][c];
		 res[c][f]=aux[f][c];
        	}//fin del tercer for
        }//fin del segundo for
    }//fin del primer for
    
    //escribir la multiplicacion
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


