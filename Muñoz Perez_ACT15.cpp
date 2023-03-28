#include <iostream>
#include <limits>
#include "colores.cpp"
#include <string>
using namespace std;
/*
[ANGEL EDUARDO MUÑOZ PEREZ]
[ACTIVIDAD 15]
[Centro Universtitario de los altos]
[Ingenieria en coputacion_ 2do semestre]
[Prof. Sergio Sergio]
*/
//funciones
int main();
void juegop();//juego conta otro jugador
void avanzaturnosp();
void juegoc();//juego contra la computadora
void avanzaturnosc();
void salir();
void victoria();

/*int id[20];
struct puntaje;{
	string nombre;
	int punto;
}id[20];*/

//variables
int numero;
char o='O';
char x='X';
int turno;
char gato[3][3];
#include "func15.cpp"

int main(){
	system("cls");
	int opcion;
	int turno=0;
	int numero=1;
	
	color(10);
	cout<<"BIENVENIDO AL JUEGO DEL GATO :3"<<endl;
	cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl;
	color(5);
	cout<<"\t--------------------"<<endl;
	cout<<"\t| [1] contra cpu   |"<<endl;
	cout<<"\t| [2] contra otro  |"<<endl;
	cout<<"\t| [3] SALIR        |"<<endl;
	cout<<"\t--------------------"<<endl;
	
	//vaciamos la matriz
	for (int f=1; f<4; f++){
		for (int c=1; c<4; c++){
			gato[f][c]='.';
		}//fin del primer for
	}//fin del primer for
	
	while(true){
		if(cin>>opcion){
			switch(opcion){
				case 1:
					juegoc();
					break;
				case 2:
					juegop();
					break;
				case 3:
					salir();
					break;
				default:
					color(12);
					cout<<"Esa no es una opcion querido"<<endl;
					break;			
			}//fin del switch
		}else{
			cout<<"pon un numero mi rey porfas"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			system("pause");
			main();	
		}//fin del if validacion	
	}//fin del while validacion	
}//FIN DEL MAIN ////////////////////////////////////////////////////////

void avanzaturnosp(){
	turno++;
	juegop();
}
void juegop(){//juego contra otra persona
	system("cls");
	int turnoreal;
	int columna;
	int fila;
	
	//para avanzar un turno cada que empieze nueva jugada 
	if(turno == 1 or turno == 3 or turno == 5 or turno == 7 or turno ==9){
		turnoreal=1;
	}else if(turno == 2 or turno == 4 or turno == 6 or turno == 8){
		turnoreal=2;
	}
	
	//Escribimos el gato
	color(3);
	cout<<"|- :3 -|- :3 -|- :3 -|- :3 -|- :3 -|- :3 -|- :3 -|\n"<<endl;
	color(15);
	dibujagato(gato);
	
	//checa si hay algun ganador
	if (checa3linea(gato, o, x)==true){
	victoria();
	}else{//SI NO, HACE EL PROCESO
		switch(turnoreal){
			case 1:
				color(3);
				cout<<"turno de jugador no. 1"<<endl;
				cout<<"Escoge un lugar"<<endl;
				cout<<"COLUMNA -->";
				color(15);
				//VALIDACION
				while (true){
					if(cin >> columna and columna >0 and columna <4){
						break;
					}else{
						cout<<"ponlo bien porfas"<<endl;
						cin.clear();
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
						system("pause");
						juegop();		
					}//fin del if validacion
				}//fin del while validacion
				cout<<"FILA -->";	
				while (true){
					if(cin >> fila and fila >0 and fila <4){
						break;
					}else{
						cout<<"ponlo bien porfas"<<endl;
						cin.clear();
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
						system("pause");
						juegop();		
					}//fin del if validacion
				}//fin del while validacion
				//ASIGNACION
				gato[columna][fila]='O';
				avanzaturnosp();	
			break;
			case 2:
				color(3);
				cout<<"turno de jugador no. 2"<<endl;
				cout<<"Escoge un lugar"<<endl;
				cout<<"COLUMNA -->";
				color(15);
				//VALIDACION
				while (true){
					if(cin >> columna and columna >0 and columna <4){
						break;
					}else{
						cout<<"ponlo bien porfas"<<endl;
						cin.clear();
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
						system("pause");
						juegop();		
					}//fin del if validacion
				}//fin del while validacion
				cout<<"FILA -->";	
				while (true){
					if(cin >> fila and fila >0 and fila <4){
						break;
					}else{
						cout<<"ponlo bien porfas"<<endl;
						cin.clear();
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
						system("pause");
						juegop();		
					}//fin del if validacion
				}//fin del while validacion
				//ASIGNACION
				gato[columna][fila]='X';
				avanzaturnosp();
			break;
			default:
			cout<<"hubo un problemita, no deberia ser posible esto xd"<<endl;
			system("pause");
			main();	
		}//fin del switch
	}//fin del if de chequeo si hay victoria
}//FIN DE FUNCION JUEGOP/////////////////////////////////////////////////


void juegoc(){
	cout<<"hola";
}//FIN DE FUNCION JUEGOCPU///////////////////////////////////////////////


void salir(){
	cout<<"hola";
}


void victoria(){
	system("cls");
	color(10);
	
	cout<<"*_*_*_*_*_*_*_*_*_*_*"<<endl;
	cout<<"\t VICTORIA"<<endl;
	cout<<"*_*_*_*_*_*_*_*_*_*_*"<<endl;
	
	int opc;
	color(2);
	cout<<"Quieres jugar otravez?"<<endl;
	cout<<"[1] SI         [2] NO"<<endl;
	
	while (true){
		if(cin >> opc){
			switch(opc){
				case 1:
					main();
					break;
				case 2:
					salir();
					break;
				default:
					cout<<"Pon uno de los numeros de arriba mi rey"<<endl;
					system("pause");
					victoria();		
			}//fin del switch
		}else{
			color(12);
			cout<<"Bro por gente como tu es que me la paso validando entradas >:c"<<endl;
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			system("pause");
			victoria();	
		}//fin del if validacion
	}//fin del while para validar
}//FIN DE LA FUNCION DE VICTORIA
