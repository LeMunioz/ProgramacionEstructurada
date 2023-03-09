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

//FUNCIONES
int main();
void escribir();
void poner();
void vaciar();
void vnion();
void interseccion();

//variables globales
string a1 [10]; //arreglo 1
string a2 [10]; //arreglo 2

int main()
{
	system("cls");//para borrar la consola
	cout<<"       Bienvenido a mi programa"<<endl;
	cout<<"      Aqui tienes dos conjuntos  "<<endl;
	//escribimos los valores del ARREGLO 1
	cout<< "CONJUNTO 1"<<endl;
	cout<< "["<<a1[0]<<"] "<<"["<<a1[1]<<"] "<<"["<<a1[2]<<"] "<< 
	       "["<<a1[3]<<"] "<<"["<<a1[4]<<"] "<<"["<<a1[5]<<"] "<<
	       "["<<a1[6]<<"] "<<"["<<a1[7]<<"] "<<"["<<a1[8]<<"] "<<
	       "["<<a1[9]<<"] "<<endl; 
	       //escribimos los valores del ARREGLO 2
	cout<< "CONJUNTO 2"<<endl;
	cout<< "["<<a2[0]<<"] "<<"["<<a2[1]<<"] "<<"["<<a2[2]<<"] "<< 
	       "["<<a2[3]<<"] "<<"["<<a2[4]<<"] "<<"["<<a2[5]<<"] "<<
	       "["<<a2[6]<<"] "<<"["<<a2[7]<<"] "<<"["<<a2[8]<<"] "<<
	       "["<<a2[9]<<"] "<<endl;
		   
	cout<<"          que quieres hacer?"<<endl;
	//MENU DE OPCIONES
	cout<<"___________________________________"<<endl;
	cout<<"|[1] escribir un conjunto         |"<<endl;
	cout<<"|[2] escribir datos               |"<<endl;
	cout<<"|[3] Vaciar los conjuntos         |"<<endl;
	cout<<"|[4] hacer una union              |"<<endl;
	cout<<"|[5] hacer una interseccion       |"<<endl;
	cout<<""<<endl;
	cout<<"___________________________________"<<endl;
	int opc;//variable para opcion del menu
	//validacion de la opcion
	while (true)
			{
			if (cin >> opc)
				{
					break;
				}else {
					cout <<"Esa no es una opcion querido"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
						
				}//fin del if para validar
			}//fin del while para validar

	switch (opc)
	{
		case 1:
			escribir();
			break;
		case 2:
			poner();
			break;
		case 3:
			vaciar();
			break;
		case 4:
			vnion();
			break;
		case 5:
			interseccion();
			break;
		
		default:
			cout<<"esa no es una opcion estimado"<<endl;
			main();
			break;						
	}//fin del switch
		    
}//FIN DEL MAIN


void escribir()
{
	int A;//variable para escojer conjunto
	
	system("cls"); //quitar lo que esta consola
	cout<<"donde quieres escribir?"<<endl;
	cout<<"[1] conjunto1    [2] conjunto2"<<endl;
	//validacion de la opcion
	while (true)
			{
			if (cin >> A)
				{
					break;
				}else {
					cout <<"Escoge 1 o 2 querido"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');		
				}//fin del if para validar
			}//fin del while para validar
	switch(A)
	{
		case 1://para matriz 1
			for (int i=0; i<10; i++)
			{
				cin >>a1[i];				
			}
				break;			
		case 2://para matriz 2
			for (int i=0; i<10; i++)
			{
				cin >>a2[i];
			}
				break;				
	}//fin del switch de opcion matriz		
	system ("pause");//que se detenga
	main();		
		
}//FIN DE FUNC ESCRIBIR


void poner()
{
	int a;//variable para escojer conjunto
	int b;//variable para escojer lugar
	string dato;//variable del dato que pondra
	
	system("cls"); //quitar lo que esta consola
	cout <<"donde quieres poner un dato?"<<endl;
	cout <<"[1] conjunto1    [2]conjunto2"<<endl;
	//validacion de CONJUNTO
		while (true)
			{
			if (cin >> a)//si lee el conjunto
				{
					switch (a)//switch para ubicar el dato
						{
	/*CONJUNTO1*/		case 1://conjunto1
						//PONER LUGAR
							if (b>-1 or b <10)
							{
							while (true)
								{
								cout<<"Cual pocision quieres cambiar?"<<endl;
								if (cin >> b) //si lee el lugar
									{
										break;
									}else {
										cout <<"Eso no es un numero joven"<<endl;
										cin.clear();
										cin.ignore(numeric_limits<std::streamsize>::max(), '\n');			
									}//fin del if para validar
								}//fin del while para validar
								
							//PONER DATO	
							while (true)
								{
								cout<<"Que quieres poner?"<<endl;
								if (cin >> dato) //si lee el dato
									{
										break;
									}else {
										cout <<"pon un numero o letras querido"<<endl;
										cin.clear();
										cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
										}//fin del if para validar
										}//fin del while para validar
							}//fin del if de rango
							else{
								cout<<"escoge algo entre 0 y 9 cariño"<<endl;
							}
							//ASIGNAMOS EL DATO	
							a1[b]=dato;
						break;
	/*CONJUNTO2*/		case 2:
						//PONER LUGAR
							if (b>-1 or b <10)
							{
							while (true)
								{
								cout<<"Cual pocision quieres cambiar?"<<endl;
								if (cin >> b) //si lee el lugar
									{
										break;
									}else {
										cout <<"Eso no es un numero joven"<<endl;
										cin.clear();
										cin.ignore(numeric_limits<std::streamsize>::max(), '\n');			
									}//fin del if para validar
								}//fin del while para validar
							//PONER DATO	
							while (true)
								{
								cout<<"Que quieres poner?"<<endl;
								if (cin >> dato) //si lee el dato
									{
										break;
									}else {
										cout <<"pon un numero o letras querido"<<endl;
										cin.clear();
										cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
										}//fin del if para validar
										}//fin del while para validar
							//ASIGNAMOS EL DATO	
							}//fin del id de rango
							else{
								cout<<"escoge algo entre 0 y 9 cariño"<<endl;
							}
							a2[b]=dato;//conjunto2 en la pocision b vale dato
							break;
						default:
							cout<<"escoge 1 o 2 porfas chulo"<<endl;
						break;
		}//fin del switch de asignacion
					break;
				}else {
					cout <<"Escoge 1 o 2 querido"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');		
				}//fin del if para validar
			}//fin del while para validar	
		
	system("pause");
	main();	
												
	
}//FIN DE FUNC PONER


void vaciar()
{

}//FIN DE FUNC VACIAR


void vnion()
{
	string a3[20]; //conjutno de la union (3er conjunto)
	int b;//posicion de conjunto 2
	int a;//pocision de conjunto 1
	int c;//pocision de conjunto 3
	
	
	for(a=0; a<10; a++)
	{
		for(b=0; b<10; b++)
		{		
			if (a1[a]!=a2[b])
			{
				a3[c+10]=a2[b];
				a3[c]=a1[a];
			}else
			{
				break;
			}//fin del if esle
		}	//fin del for b			
	}//fin del for a
	for (int c=0; c<20; c++)
	{
		cout<<"["<<a3[c]<<"]"<<endl;
	}

	cout<<" <-- esta es la union"<<endl;
	
	system ("pause");
	main();
	//ESCRIBIMOS EL NUEVO CONJUNTO	
}//FIN DE FUNC VNION


void interseccion()
{
	
}//FIN DE FUNC INTERSECCION


