#include <iostream>
#include <limits>
#include <stdlib.h> 
#include <ctime>
using namespace std;
/*
[Angel Eduardo Muñoz perez]
[Actividad 6]
[Ingenierira en computación 2do semestre]
[Centro Universitario de los altos]
[Prof. Sergio Franco Casillas]
*/
//Funciones
int main();
void matriz();
void sumar();
void restar();
void multip();
void salir();
void poner();

//variable
int tamano=0;//tamaño de las matrices
int f=0;//filas
int c=0;//columnas
int a[10][10];//matriz 1
int b[10][10];//matriz 2
int res[10][10];//matriz 3


int main()
{
	system("cls");
	cout <<"        Bienvenido estimado"<<endl;
	cout <<"       Programa de matrices"<<endl;
	cout <<"De que tamaño quieres que sean las matrices?"<<endl;
//pongo rango y valido tamano
	while (true)
			{
			if (cin >> tamano && tamano <11 && tamano >1)
				{
					break;
				
				}else
				{
					cout <<"Pon el tamano en numeros cari\ño"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
					system("pause");
					main();					
				}//fin del if para validar
			}//fin del while para validar	

	matriz();
}//fin de F MAIN


void matriz()
{
	srand((unsigned)time(NULL));//para quitar el patron de aleaotiro
	system("cls");
	int a[tamano][tamano];//matriz 1
	int b[tamano][tamano];//matriz 2
	int iterador = 0;//un contador
	
	//HACER MATRIZ*
	cout<<"Matriz 1"<<endl;
	for(c=0;c<tamano;++c)
	{
		for(f=0;f<tamano;++f)
		{
			a[f][c] = -100 + rand() %200;
            printf("[%d]\t",a[f][c]);	
		}
		printf("\n");
	}//fin de for para matriz 1
	c=0;
	f=0;
	cout<<"Matriz 2"<<endl;
		for(c=0;c<tamano;c++)
	{
		for(f=0;f<tamano;f++)
		{
			b[f][c] = -100 + rand() %200;
            printf("[%d]\t",a[f][c]);	
		}
		printf("\n");
	}
 
	//MENU DE OPCIONES
    
    cout<<"que deseas hacer con ellas?"<<endl;
    
    cout<<"________________________________________"<<endl;
    cout<<"|[1] Sumar                             |"<<endl;
	cout<<"|[2] Restar                            |"<<endl;
    cout<<"|[3] Multiplicar                       |"<<endl;
    cout<<"|[4] Salir                             |"<<endl;
    cout<<"|[5] poner                             |"<<endl;
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
		salir();
		break;
	case 5:
		poner();
		break;
		default:
			cout<<"Esa no es una joven mi jovenazo"<<endl;
			break;					
	}//fin del switch		

}//FIN DEL F MATRIZ



void sumar()
{
	for (int c=0; c <tamano; c++){
		for (int f=0; f <tamano; f++){
			res[f][c]=a[f][c]+b[f][c];
		}//fin del segundo for
	}//fin del primer for
    
	cout <<"La suma de matrices es: " <<endl;
	for (int c = 0; c < 5; ++c) {
        for (int j = 0; f < 5; ++f)
            cout << res[c][f] << '\t';
        cout << '\n';
    }	
    system("pause");
    matriz();
}//FIN DE F SUMAR



void restar()
{
		
	for (int c=0; c <tamano; c++){
		for (int f=0; f <tamano; f++){
			res[f][c]=a[f][c]-b[f][c];
		}//fin del segundo for
	}//fin del primer for
    
	cout <<"La resta de matrices es: " <<endl;
	for (int c = 0; c < 5; ++c) {
        for (int j = 0; f < 5; ++f)
            cout << res[c][f] << '\t';
        cout << '\n';
    }
    system("pause");
    matriz();
}//FIN DE F RESTAR



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
    //escribo la multiplicacion
    cout <<"La multiplicacion de matrices es: " <<endl;
    for (int c = 0; c < 5; ++c) {
        for (int f = 0; f < 5; ++f){
            cout << res[c][f] << '\t';}
        cout << '\n';
    }
	system("pause");
    matriz();	
}//FIN DE F MULTIPLICAR



void salir()
{
	cout <<"gracias mi estimado por usar mi programa"<<endl;
	cout <<"PROGRAMA HECHO POR LeMunioz"<<endl;

}//FIN DE F SALIR



void poner()
{
	system("cls");
	main();	
}//FIN DE F PONER

