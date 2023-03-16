#include <iostream>
#include <limits>
#include <ctime>
#include <string>

using namespace std;
#include "colores.cpp"
/*
[Angel Eduardo Muñoz Perez]
[ACT 13_ JUEGO AHORCADO]
[Centro Universtiario de los altos]
[Ingenieria en computación_2do semestre]
[Prof. Sergio]
[16_03_2023]
*/

//FUNCIONES
int main();
void escoger();
void aleatorio();
void juego();
void acierto();
void gameover();

//VARIABLES
char BANCO[21][21]={"automovil", "cocodrilo", "rascacielos", "murcielago", "lavatrastes", 
					"aquaman", "estornudo", "ventilador", "casillero", "termostato", 
					"hotel transilvania", "soberania", "mostaza", "gorditas", "republica",
					"singapur", "kyoto", "animacion", "magenta", "iguanodonte", "La vaca lola"};//el banco de palabras
char intento;
char palabra[20];
char palabraaux[20];
int opc;
int esc;//para escoger
int n;
int contadorfallos=0;
//colores del mono
int a=0;
int b=0;
int c=0;
int d=0;
int e=0;
int f=0;


int main(){

	system("cls");
	color(15);
	cout<<"\t BIENVENIDO A MI JUEGO DEL AHORCADO"<<endl;
	cout<<"=============================================="<<endl;
	/*for (int c=0; c <21; c++){
		for(int f=0; f<21; f++){
		cout<<"["<<BANCO[c][f]<<"]";
		}cout<<endl;*/
	
	cout<<"gustas escoger una palabra?"<<endl;
	cout<<"SI [1]       [2] NO gracias, escogela tu"<<endl;
	
	while (true){ //validacion
		if (cin >> opc){ //si lee la opcion
			switch (opc){
				case 1://escoja entre los 21
					escoger();
					break;
				case 2:
					aleatorio();
					break;
				default:
					cout <<"esa no es una opcion querido"<<endl;
					system ("pause");
				main();
				break;					
			}//fin de switch opcion 		
			}else { //si no lee la opcion
				cout <<"Ponga un numero mi rey porfas"<<endl;
				cin.clear();
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
				system("pause");
				main();	
		}//fin del if para validar
	}//fin del while para validar
	
}//FIN DE F MAIN

void escoger(){
	cout<<"PALABRAS A EsCOGER :";
			for(int i=0; i <21; i++){
				color(3);
				cout<<"["<<i<<"]";
			}
			color(15);
			//leo la palabra escogida 
			while (true){ //validacion
			if (cin >> esc){
					break;
			}else{
				cout <<"Ponga un numero mi rey porfas"<<endl;
				cin.clear();
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
				system("pause");
				escoger();
			}
			}//fin de while validacion
			for(int x=0; x<21; x++){
					palabra[x]=BANCO[esc][x];//extrameos palabra vector del banco
					//cout<<palabra[x];  SOLO PARA COMFIRMAR QUE LA AGARRO
					}//fin del for palabra
			system("pause");
			juego();				
}//FIN DE F ESCOGER


void aleatorio(){
	srand((unsigned)time(NULL));//para quitar el patron de aleaotiro
	esc = rand()%22;//le ponemos a esc un numrero ramdom hasta 21
	for(int x=0; x<21; x++){
					palabra[x]=BANCO[esc][x];//extrameos palabra vector del banco
					//cout<<palabra[x]; SOLO PARA COMFIRMAR QUE LA AGARRO
					}//fin del for palabra
	system("pause");
	juego();				
}//FIN DE F ALEATORIO


void juego(){
	system("cls");
	color(13);
	//VIDAS
	if(contadorfallos ==1){
				a=15;
			}
			if(contadorfallos ==2){
				b=15;
			}
			if(contadorfallos ==3){
				c=15;
			}
			if(contadorfallos ==4){
				d=15;
			}
			if(contadorfallos ==5){
				e=15;
			}
			if(contadorfallos ==6){
				f=15;
			}
			if(contadorfallos ==7){
				gameover();
			}
	//FIGURA
	color(12);
	cout<<"_________________"<<endl;
	cout<<"|               |"<<endl;
	color(a);
		cout<<"\t\t 0 "<<endl;
	color(b);
		cout<<"\t\t/";	
	color(c);
		cout<<"U";
	color(d);
		cout<<"| "<<endl;
	color(e);
		cout<<"\t\t/";
	color(f);
		cout<<"| "<<endl;
		
	color(15);	
	
	//PALABRA
	cout<<"[ ";
	for(int i=0; i<sizeof(palabra);i++){
		palabraaux[i];	
		cout<<palabraaux[i];
	}
	cout<<" ]"<<endl;
	
	//LEER INTENTO
	color(7);
	cout<<"COLOQUE UNA LETRA:"<<endl;
	color(13);
	while (true){ //validacion
			if (cin >> intento){
					break; 
			}else{
				cout <<"Ponga un numero mi rey porfas"<<endl;
				cin.clear();
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
				system("pause");
				juego();
			}
			}//fin de while validacion
	//BUSCAMOS LETRA EN EL VECTOR
	for(int i=0; i<sizeof(palabra);i++){
		if (intento==palabra[i]){
			acierto();			
		}else{
			++contadorfallos;
			juego();
		}
		}
}//FIN DE F JUEGO


void acierto(){
	
}

void gameover(){
	//como ya perdio, quitemos sus fallos
int a=0;
int b=0;
int c=0;
int d=0;
int e=0;
int f=0;
	contadorfallos=0;
	
	
	color(12);
	cout<<"================="<<endl;
	cout<<"|   GAME OVER   |"<<endl;
	cout<<"================="<<endl;
	
	color(15);
	cout<<"Volver a intentar?"<<endl;
	color(10);
	cout<<"[1] SI";
	color(13);
	cout<<"   [2] NO"<<endl;
	
	while (true){ //validacion
			if (cin >> opc){
				switch(opc){
					case 1: 
						main();
						break;
					case 2:
						abort();
						break;
					default:
						cout<<"esa no es una opcion querido"<<endl;
						break;	
				}//fin de switch
			}else{
				cout <<"Ponga un numero mi rey porfas"<<endl;
				cin.clear();
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
				system("pause");
				gameover();
			}
			}//fin de while validacion			
}//FIN DE  GAMEOVER


