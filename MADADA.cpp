#include <limits>
#include <iostream>
#include <stdlib.h>
using namespace std;
/*
[Angel Eduardo Muñoz perez]
[Actividad 6]
[Ingenierira en computación 2do semestre]
[Centro Universitario de los altos]
[Prof. Sergio Franco Casillas]
*/

//Funciones
int main();//donde se mostrara la matriz 
int funciones();//donde se haran las operaciones
int svvitch(); //deonde estara el menu de opciones

//VARIABLES
int a[10][10]; //arrglo de matriz a
int b[10][10]; //areglo de matriz b
int res[10][10];//matriz de la resta
int sum[10][10];//matriz de la suma	
int mul[10][10];//matriz de la multiplicacion	
int tamano;//para indicar tamaño de tablas
int c, f;//columa y filas

int main()
{
	
	
	system("cls");
	cout <<"        Bienvenido estimado"<<endl;
	cout <<"       Programa de matrices"<<endl;
	cout <<"De que tamaño quieres que sean las matrices?"<<endl;
	
		while (true)
			{
			if (cin >> tamano)
				{
					break;
				}
				else
				{
					cout <<"Pon el tamano en numeros cari\ño"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');	
					system ("pause");
					main();				
				}//fin del if para validar
			}//fin del while para validar	
		if (tamano <2 or  tamano >11)
		{
			cout<<"pon un numero entre 2 y 10 porfas mi estimado"<<endl;
			cin.clear();
			system ("pause");
			main();
		}//fin de la validacion del Rango
		
		//CREACION DE MATRICES
		cout<<"Matriz 1"<<endl;
	for(c=0;c<tamano;++c) //for para columna
	{
		for(f=0;f<tamano;++f) //for de filas
		{
			a[f][c] = 0;
            printf("[%d]\t",a[f][c]);	
		}
		printf("\n");
	}//fin de for para matriz 1
	
	cout<<"Matriz 2"<<endl;
		for(c=0;c<tamano;c++)
	{
		for(f=0;f<tamano;f++)
		{
			b[f][c] = 0;
            printf("[%d]\t",a[f][c]);	
		}
		printf("\n");
	}//fin de iteracion matriz2
	svvitch();
}//FIN DEL MAIN
	
svvitch()
{	
	//MENU DE OPCIONES
	cout<<"Bien, que deseas hacer con ellas?"<<endl;
	 cout<<"________________________________________"<<endl;
    cout<<"|[1] Sumar                             |"<<endl;
	cout<<"|[2] Restar                            |"<<endl;
    cout<<"|[3] Multiplicar                       |"<<endl;
    cout<<"|[4] Salir                             |"<<endl;
    cout<<"|[5] poner                             |"<<endl;
    cout<<"|______________________________________|"<<endl;
    funciones();
}//fin del SVVITCH


funciones()
{
    //SWITCH DE MENU
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

		
	case 1: //CASO SUMA
		sum[tamano][tamano]=0;
		for (int c = 0; c < tamano; c++)
		{
        for (int f = 0; f < tamano; f++)
            sum[c][f] = a[c][f] + b[c][f];
    	}
		cout <<"La suma de matrices es: " <<endl;
		for(c=0;c<tamano;c++) //for para columna
		{
		for(f=0;f<tamano;f++) //for de filas
		{
            printf("[%d]\t",sum[f][c]);	
		}
		printf("\n");
		}
		system("pause");
		svvitch();
		break;

		
	case 2://CASO RESTA
		res[tamano][tamano]=0;
		for (int c = 0; c < tamano; c++) //for para columna
		{
        for (int f = 0; f < tamano; f++) //for de filas
            res[c][f] = a[c][f] - b[c][f];
    	}
		cout <<"La resta de matrices es: " <<endl;
		for(c=0;c<tamano;c++) //for para columna
		{
		for(f=0;f<tamano;f++) //for de filas
		{
            printf("[%d]\t",res[f][c]);	
		}
		printf("\n");
		}	
		system("pause");
		svvitch();	
		break;

		
	case 3://CASO DE MULTIPLICACION
		mul[tamano][tamano]=0;
		for (int c = 0; f < tamano; c++)
        for (int c = 0; f < tamano; f++)
            for (int k = 0; k < 5; k++) //tercer iteracion para hacer otra dezplasacion paralela
            {
                mul[c][f] += a[c][k] * b[k][f];
            }
    	cout <<"La multiplicacion de matrices es: " <<endl;
    
   		for (int c = 0; c < tamano; c++) 
		   	{
        for (int f = 0; f < tamano; f++)
            cout << mul[c][f] << '\t';
      		cout << '\n';
  			}
		
		break;
		
	case 4:
				
		break;
		
	case 5://CASO PONER NUMEROS ALAZAR
	//rellenar matriz a
		srand((0));

  		for (int c = 0; c < tamano; c++)
		{
        for (int f = 0; f < tamano; f++)
        {
            a[c][f] = rand() % 100 + 1;
        }
   		}

            cout <<"Los valores de la matriz 1 son los siguientes." <<endl;
                    for (int c = 0; c < tamano; ++c)
					{
                    for (int f = 0; f < tamano; ++f)
                        cout <<"["<< a[c][f] <<"]"<< '\t';
                            cout << '\n';
                    }//aqui termina de mostrar la matriz1
	//rellenar matriz 2
		srand((1));

  		for (int c = 0; c < tamano; c++)
		{
        for (int f = 0; f < tamano; f++)
        {
            b[c][f] = rand() % 100 + 1;
        }
   		}

            cout <<"Los valores de la matriz 2 son los siguientes." <<endl;
                    for (int c = 0; c < tamano; c++)
					{
                    for (int f = 0; f < tamano; f++)
                        cout <<"["<< b[c][f] <<"]"<< '\t';
                            cout << '\n';
                    }//aqui termina de mostrar la matriz2	
		system("pause");
		svvitch();									                       
		break;
		
		default:
			cout<<"Esa no es una joven mi jovenazo"<<endl;
			break;					
	}//fin del switch
}//fin de Funciones

