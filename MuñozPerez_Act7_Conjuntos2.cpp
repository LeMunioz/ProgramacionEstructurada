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
string a3[20]; //conjutno de la union (3er conjunto)
string a4[20]; //conjutno de la union (4to conjunto)

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
	while (true) //creo ciclo
			{
			if (cin >> A) //si lee este dato
				{
					break; //no hagas nada
				}else { //si no, haz esto
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
				for(int j=0; i <10; i ++){//checar si no se repite
					if (a1[i]==a1[j]){
						cout<<"eso ya lo pusiste, intentemos de nuevo"<<endl;
						system("pause");
						escribir();
					}
				}//fin del for				
			}
				break;			
		case 2://para matriz 2
			for (int j=0; j<10; j++)
			{
				cin >>a2[j];
				if (a2[j]==a2[j]){
						cout<<"eso ya lo pusiste, intentemos de nuevo"<<endl;
						system("pause");
						escribir();
			}
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
		if (cin >> a){
			switch (a){
				case 1: //CONJUNTO !
					cout<<"Pon el lugar"<<endl;
					if(cin >> b){
						cout<<"pon el dato"<<endl;
						if(cin >> dato){
							a1[b]=dato;
								for(int i=0; i <10; i++){
								if(a1[b]==a1[i] && b!=i){//checamos si no se repite
									cout<<"ya pusiste eso joven, escoge otro"<<endl;
									system("pause");
									poner();
								}//fin del if chequeo	
								}//fin del for
						}else{
							cout<<"dato no valido, repitamos proceso"<<endl;
							cin.clear();
							cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
							system("Pause");
							poner();
						}//fin de validacion de dato	
					}else{
						cout<<"lugar no valido, repitamos proceso"<<endl;
						cin.clear();
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');						
						system("Pause");
						poner();
					}//fin de validacion de b
				break;
				case 2: //CONJUNTO 2
						cout<<"Pon el lugar"<<endl;
						if(cin >> b){
							cout<<"Pon el dato"<<endl;
							if(cin >> dato){
								a2[b]=dato;
									for(int i=0; i <10; i++){
									if(a2[b]==a2[i] && b!=i){//checamos si no se repite
									cout<<"ya pusiste eso joven, escoge otro"<<endl;
									cin.clear();
									cin.ignore(numeric_limits<std::streamsize>::max(), '\n');								
										system("pause");
										poner();
									}//fin del if chequeo	
									}//fin del for
							}else{
								cout<<"dato no valido, repitamos proceso"<<endl;
								cin.clear();
								cin.ignore(numeric_limits<std::streamsize>::max(), '\n');						
								system("Pause");
								poner();
							}//fin de validacion de dato	
						}else{
							cout<<"lugar no valido, repitamos proceso"<<endl;
							cin.clear();
							cin.ignore(numeric_limits<std::streamsize>::max(), '\n');							
							system("Pause");
							poner();
					}//fin de validacion de b
				default:
					cout<<"Esa no es una opcion querido"<<endl;
					system("pause");
					poner();			
			}//fin del switch
		}else{
			cout<<"Escoge 1 o 2 we"<<endl;
		}//in del i validacion a
												
	
}//FIN DE FUNC PONER


void vaciar()
{
	for(int i=0; i <10; i++){
	a1[i] =" ";
	a2[i] =" ";
	}
}//FIN DE FUNC VACIAR


void vnion()
{
	string a3[20]; //conjutno de la union (3er conjunto)
	int b;//posicion de conjunto 2
	int a;//pocision de conjunto 1
	int c;//pocision de conjunto 3
	
	for(a=0; a=10; a++)
	{
		for(b=0; b=10; b++)
		{		
			if (string(a1[a])==string(a2[b]))
			{
				break;
			}else{
				a3[b+10]=a2[b];
				a3[a]=a1[a];
			}//fin del if esle
			break;
		}	//fin del for b			
	}//fin del for a
	//ESCRIBIMOS EL NUEVO CONJUNTO
	for (int x=0; x<20; x++)
	{
		cout<<"["<<a3[x]<<"]";
	}
	cout<<"<-- esta es su union"<<endl;
	
	system ("pause");
	main();
		
}//FIN DE FUNC VNION



	



void interseccion()
{

	int b;//posicion de conjunto 2
	int a;//pocision de conjunto 1
	int c;//pocision de conjunto 3
	
	for (int c=0; c<=20; c++)
	{
	for(a=0; a<=10; a++)
	{
		for(b=0; b<=10; b++)
		{		
			if (string(a1[a])==string(a2[b]))
			{
				a4[c+10]=a2[b];
				a4[c]=a1[a];
				cout<<"["<<a4[c]<<"]"<<endl;
				break;
			}else
			{
				break;
				vnion();
			}//fin del if esle
		}	//fin del for b			
	}//fin del for a
	}//fin de for c

	cout<<" <-- esta es la union"<<endl;
	
	system ("pause");
	main();
}//FIN DE FUNC INTERSECCION


