#include <iostream>
#include <limits>
#include "colores.cpp"
#include <fstream>
#include <sstream>

using namespace std;
/*
[ANGEL EDUARDO MUÑOZ PEREZ]
[ACTIVIDAD 14]
[CUALTOS_ Ingenieria en computacion]
[Prof. Sergio Casillas]
[21.03.2023]
*////////////////////////////////////////////
//VARIABLES


//FUNCIONES
void rescatar();
void guardar();
int main();
void salir();
void cambiar();
void leer();
void escribir();
//ESTRUCTURAS
int tamano=1;

struct agenda{
	char nombre[12];
	char apeido[24];
	char ciudad[20];
	char estado[14];
	char municipio[22];
	char calle[32];

	string edad;
	string estatura;
}persona[5];

int main(){
	
	int opc;//opcion para escoger en el menu
	/*
	system("cls");
	color(10);
	cout<<"\t\tBIENVENIDO"<<endl;
	color(2);
	cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	//DEFINR TAMAÑO DE LA AGENDA
	cout<<"tamaño de tu agenda agenda";
	color(7);
	while(true){
		if(cin >> tamano){
			break;
		}else{
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			system("pause");
			main();	
		}//fin del if validacion
	}//fin del while validacion
	*/
	//MENU
	color(15);
	cout<<endl<<"Que deseas hacer?"<<endl;
	color(1);
	cout<<"_____________________________"<<endl;
	cout<<"|";color(15);cout<<" [1] Escribir en mi agenda ";color(1);cout<<"|"<<endl;
	cout<<"|";color(15);cout<<" [2] ver en mi agenda      ";color(1);cout<<"|"<<endl;
	cout<<"|";color(15);cout<<" [3] modificar   mi agenda ";color(1);cout<<"|"<<endl;
	cout<<"|";color(15);cout<<" [4] SALIR                 ";color(1);cout<<"|"<<endl;
	color(1);
	cout<<"|___________________________|"<<endl;
	color(8);
	//LEER OPCIONES
	while (true){ //validacion
		if (cin >> opc){ //si lee la opcion
			switch (opc){
				case 1:
					leer();
					break;
				case 2:
					escribir();
					break;
				case 3:
					cambiar();
					break;
				case 4:
					salir();
					break;
					default:
						color(12);
						cout<<"esa no es una opcion querido"<<endl;		
						color(15);
						system("pause");
						main();
						break;
			}//fin del switch opc
		}else{
			cout<<"pon un numero mi rey porfas"<<endl;
			cin.clear();
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
				system("pause");
				main();	
		}//fin del if validacion
	}//fin del while validacion
}//FIN DE F MAIN///////////////////////////////

void escribir(){//para ver
	rescatar();
	color(10);
	cout<<"\t TU AGENDA ESTIMADO"<<endl;
	cout<<"-_-_-_-_-_--_-_-_-_-_--_-_-_-_-_-_-"<<endl;
	for(int j=1; j <6; j++){
		color(11);
		cout<<"\tPERSONA "<<j<<"\n______________________"<<endl;
		color (1); cout<<"NOMBRE   "; color (15); cout<<persona[j].nombre<<endl;
		color (1); cout<<"APELLIDOS "; color (15); cout<<persona[j].apeido<<endl;
		color (1); cout<<"LUGAR    "; color (15); cout<<persona[j].ciudad<<", "<<persona[j].municipio<<", "<<persona[j].estado<<endl;
		color (1); cout<<"ESTATURA "; color (15); cout<<persona[j].estatura<<endl;
		color (1); cout<<"EDAD     "; color (15); cout<<persona[j].edad<<endl;
		color(11);
		cout<<"______________________"<<endl;
	}//fin del for para escribir
	system("pause");
	main();	
}//FIN DE F ESCRIBIR///////////////////////////

void leer(){//para poner



	color(3);
	int esc;//para escoger la opcion
	cout<<"QUE GUSTAS APUNTAR?"<<endl;
	cout<<"__________________________"<<endl;
	cout<<"[1] nombre"<<endl;
	cout<<"[2] apeido"<<endl;
	cout<<"[3] ciudad"<<endl;
	cout<<"[4] municipio"<<endl;
	cout<<"[5] estado"<<endl;
	cout<<"[6] edad"<<endl;
	cout<<"[7] estatura"<<endl;
	cout<<"__________________________"<<endl;
	while (true){ //validacion
		if (cin >> esc){
			switch (esc){
				case 1: 
					for (int i=0; i<6; i++){
						cout<<"Pon el nombre de persona "<<i<<endl;;	
						cin.getline(persona[i].nombre, 12, '\n');
					}
					main();
				break;
				case 2:
					for (int i=0; i<6; i++){
						cout<<"Pon el apellido de persona "<<i<<endl;;	
						cin.getline(persona[i].apeido, 24, '\n');
					}
					main();
				break;	
				case 3: 
					for (int i=0; i<6; i++){
						cout<<"Pon la ciudad de persona "<<i<<endl;;	
						cin.getline(persona[i].ciudad, 20, '\n');
					}
					main();
				break;
				case 4: 
					for (int i=0; i<6; i++){
						cout<<"Pon el municipio de persona "<<i<<endl;;	
						cin.getline(persona[i].municipio, 22, '\n');
					}
					main();
				break;
				case 5: 
					for (int i=0; i<6; i++){
						cout<<"Pon el estado de procedencia de la persona "<<i<<endl;;	
						cin.getline(persona[i].estado, 14, '\n');
					}
					main();
				break;
				case 6: 
					for (int i=1; i<6; i++){
						cout<<"Pon la edad de la persona "<<i<<endl;;	
						cin>>(persona[i].edad);
					}
					main();
				break;
				case 7: 
					for (int i=1; i<6; i++){
						cout<<"Pon la estatura de la persona "<<i<<endl;;	
						cin>>(persona[i].estatura);
					}
					main();
				break;
				default:
					cout<<"eso no es numero valido estimado"<<endl;
					color(15);
						system("pause");
						leer();
						break;
			}//fin del switch esc
		}else{
		}//fin del if validacion
	}//fin de while validacion
	color(7);
	cout<<"________________"<<endl;
	guardar();
	
}//FIN DE F LEER////////////////////////////////

void cambiar(){
	int quiero;//opcion para escoger
	int campo;//que dato
	color (11);
	cout<<"Que persona quieres escoger?"<<endl;
	cout<<"[1]   [2]   [3]   [4]   [5]"<<endl;
	while (true){ //validacion
		if (cin >> quiero and quiero ==1 or quiero ==2 or quiero ==3 or quiero ==4 or quiero ==5){
			cout<<"que campo quieres poner?"<<endl;
			cout<<"[1] Nombre  [2] Apellido"<<endl;
			cout<<"[3] Ciudad  [4] Municipio"<<endl;
			cout<<"[5] Estado  [6] Edad"<<endl;
			cout<<"[7] Estatura [8]Mejor no, me quiero ir"<<endl;
			while (true){ //validacion
				if (cin >> campo){
					switch (campo){
						case 1: 
							cout<<"Pon el nombre de persona "<<quiero<<endl;;	
							cin.getline(persona[quiero].nombre, 12, '\n');
								system("pause");
								main();	
							break;	
						case 2:
							cout<<"Pon el apellido de persona "<<quiero<<endl;;	
							cin.getline(persona[quiero].apeido, 24, '\n');
							system("pause");
								main();		
							break;
						case 3:	
							cout<<"Pon la ciudad de persona "<<quiero<<endl;;	
							cin.getline(persona[quiero].ciudad, 20, '\n');
							system("pause");
								main();	
							break;
						case 4:
							cout<<"Pon el municipio de persona "<<quiero<<endl;;	
							cin.getline(persona[quiero].municipio, 22, '\n');
							system("pause");
								main();	
							break;
						case 5:
							cout<<"Pon el estado de procedencia de la persona "<<quiero<<endl;;	
							cin.getline(persona[quiero].estado, 14, '\n');
							system("pause");
								main();	
							break;
						case 6:
							cout<<"Pon la edad de la persona "<<quiero<<endl;;	
							cin>>(persona[quiero].edad);
							system("pause");
								main();	
							break;
						case 7:
							cout<<"Pon la estatura de la persona "<<quiero<<endl;;	
							cin>>(persona[quiero].estatura);
							system("pause");
								main();	
							break;
						default:
							cout<<"Esa no es ina opcion querido"<<endl;
							system("pause");
							cambiar();
							break;		
						
					}//fin del switch
				}//fin del if validacion campo
			}//fin del while validacion campo
		}//fin del if validacion esc
	}//fin del while calidacion esc
	guardar();

}//FIN DE F CAMBIAR////////////////////////////


void guardar(){
	color(15);
	ofstream archivo("agenda.txt");
	//metemos un if, para hacer el proeso de guardado pr campos
	if(archivo.is_open()){
		for (int x=0; x <6; x++){
			archivo << persona[x].nombre<<","<< persona[x].apeido<<
			","<<persona[x].municipio<<","<<persona[x].ciudad<<","<<persona[x].estado<<
			","<<persona[x].edad<<","<<persona[x].estatura<<"\n";
		}//fin del for
		archivo.close();
		color(2);
		cout<<"GUARDADO MI REY"<<endl;
		color(15);
	}else{
		color(12);
		cout<<"CHIN :("<<endl;
		system("pause");
		main();
	}//fin del if
}//FIN DE F GUARDAR////////////////////////////

void rescatar(){
	int f=0;
	ifstream archivo("agenda.txt");
	if(archivo.is_open()){
		if(f<6){
			cin.getline(persona[f].nombre, 12, ',');
			cin.getline(persona[f].apeido, 24, ',');
			cin.getline(persona[f].ciudad, 20, ',');
			cin.getline(persona[f].municipio, 22,  ',');
			cin.getline(persona[f].estado, 14, ',');
			getline (archivo,persona[f].edad, ',');
			getline (archivo,persona[f].estatura, ',');
			f++;
			rescatar();
		}//fin de lewhi
	archivo.close();
	color(2);
	cout<<"LEIDOS MI REY"<<endl;
	color(15);
	}else{
		color(12);
		cout<<"CHIN :("<<endl;
		system("pause");
		main();
	}//fin del if archivo open*/
}//FIN DE F RECATAR//////////////////////////////////////////

void salir(){
	color(14);
	cout<<"ADIOS COMPATRIOTA"<<endl;
	guardar();
	abort();
	
}//FIN DE F SALIR////////////////////////////////


