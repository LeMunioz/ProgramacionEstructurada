#include <iostream>
#include <conio.h>
#include <limits>
#include "colores.cpp"


using namespace std;

struct promedio{
	float calificacion1;
	float calificacion2;
	float calificacion3;
	float calificacion4;
	float calificacion5;
};

struct alumno{
	char nombre[20];
	char apellido[30];
	char carrera[30];
	int edad=0;
	struct promedio prom;
}alumno1;

void notas();
void boleta();
void menu();

float promedio_alumno;

int main(){
	
	//MATERIAS
/*	string materias[18]= {'Calculo', 'Redes', 'Logica', 'Algoritmo', 'Programacion', 'Programacion web',
		'arquitectura de computadoras', 'electronica', 'Derecho romano', 'Penal', 'Etica y legislacion',
		'ingles', 'Investigacion forense', 'Anatomia', 'Patologia', 'histologia', 'pediatria', 'bioquimica'};
		
	*/
	//RELLENADO DE DATOS
	cout<<"pon tu nombre: ";
	cin.getline(alumno1.nombre, 20, '\n');
	cout<<"pon tu apellido:";
	cin.getline(alumno1.apellido, 30, '\n');
	cout<<"pon tu carrera: ";
	cin.getline(alumno1.carrera, 30, '\n');
	cout<<"pon tu edad: ";
	cin>>alumno1.edad;
	
	//MENU
	menu();
	
}//FIN DEL MAIN/////////////////////////////////////////////////////////////////////////////////////////

void menu(){
	system("cls");
	color(5);
	cout<<"='='='='='='='='='='='='='='='='='="<<endl;
	cout<<"|";color(8);cout<<"   PONER NOTAS [1]               |"<<endl; color(5);
	cout<<"|";color(8);cout<<"    VER KARDEX [2]               |"<<endl; color(5);
	cout<<"|";color(8);cout<<"        VOLVER [3]               |"<<endl; color(5);
	cout<<"|";color(8);cout<<"         SALIR [4]               |"<<endl; color(5);
	cout<<"='='='='='='='='='='='='='='='='='="<<endl;
	color(15);
	int opcion;
	
	if(cin>>opcion){
		switch(opcion){
			case 1:
				notas();
				break;
			case 2:
				boleta();
				break;
			case 3:
				main();
				break;
			case 4:
				abort();
				break;	
			default:
				cout<<"Pon un numero del menu estimado"<<endl;
				system("pause");
				main();			
		}//fin del switch
	}else{
	cout<<"dato invalido"<<endl;
	system("pause");
	main();
	}//fin del if	
}


void notas(){
	system("cls");
	int contrasena;
	
	cout<<"pon tu codigo de profesor: "<<endl;
	cin>>contrasena;
	
	//VALIDAMOS SI EL DATO COINSIDE CON ESTA CONTRASEÑA
	if(contrasena != 3312){
		color(12);
		cout<<"contraseña incorrecta, cosnulte con el admin"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		system("pause");
		notas();
	}else{
		//RELLENAMOS NOTAS
		cout<<"======= CALIFICACIONES ========"<<endl;
		cout<<"nota 1 :"; cin>>alumno1.prom.calificacion1;
		cout<<"nota 2 :"; cin>>alumno1.prom.calificacion2;
		cout<<"nota 3 :"; cin>>alumno1.prom.calificacion3;
		cout<<"nota 4 :"; cin>>alumno1.prom.calificacion4;
		cout<<"nota 5 :"; cin>>alumno1.prom.calificacion5;	
	}//fin del if validacion de contraseña
	promedio_alumno= (alumno1.prom.calificacion1 + alumno1.prom.calificacion2 + alumno1.prom.calificacion3 + alumno1.prom.calificacion4 + alumno1.prom.calificacion5)/5;
	menu();
}

void boleta(){
	system("cls");
		color(1);
	cout<<endl<<"_________BOLETA__________"<<endl;
	
	color(1); cout<<"NOMBRE   "; color(7); cout<<alumno1.nombre<<" "<<alumno1.apellido<<endl;
	color(1); cout<<"CARRERA  "; color(7); cout<<alumno1.carrera<<endl;
	color(1); cout<<"EDAD     "; color(7); cout<<alumno1.edad<<endl;
	color(1); cout<<"CALIFICACION : "<<promedio_alumno;
	if(promedio_alumno <= 59){
		color(12);
		cout<<endl<<"REPROBADO"<<endl;	
	}else if(promedio_alumno <=79){
		color(6);
		cout<<endl<<"Regular"<<endl;
	}else if(promedio_alumno <=89){
		color(10);
		cout<<endl<<"Muy bien"<<endl;
	}else{
		color(3);
		cout<<endl<<"EXCELENTE"<<endl;
	}
	system("pause");
	menu();
}//FIN DE BOLETA////////////////////////////////////////////////////////////////////////////////////////////////

