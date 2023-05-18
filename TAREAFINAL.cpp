#include <iostream>
#include <limits>

using namespace std;

#include "colores.cpp"
#include "funcFINAL.cpp"


void ALUMNO();
void PROFE();


int main()
{
	//BIENVENIDA
	system("cls");
	color(3);
	cout<<"\tBIENVENIDO AL SCCAM"<<endl;
	color(1);
	cout<<"======================================="<<endl;
	cout<<"| ";color(3);cout<<"\t\tEres "; color(1);cout<<"\t\t      |"<<endl;
	cout<<"| ";color(3);cout<<"ALUMNO[1]      o       PROFE[2]"; color(1);cout<<"     |"<<endl;
	cout<<"======================================="<<endl;
	
	int opc;
	if (cin>>opc){
		switch(opc){
			case 1:
				ALUMNO();
				break;
			case 2:
				PROFE();
				break;
			default:
				color(12);
				cout<<"Pon 1 o dos porfis estimado"<<endl;	
				break;	
		}//fin del switch
	}else{
		main();
	}//fin del if validacion
}//FIN DEL MAIN///////////////////////////////////////////////////////////////////////////////////////////////////////////


void ALUMNO(){
	color(2);
	cout<<"Ingresa tus datos estimado"<<endl;
	color(15);
	cout<<"NOMBRE: ";
	cin.getline(alumno.nombre, 50, '\n');
	cout<<"EDAD: ";
	cin>>alumno.edad;
	cout<<"Carrera"
}//FIN DEL ALUMNO/////////////////////////////////////////////////////////////////////////////////////////////////////////////



void PROFE(){
	//CREAMOS UNA LLAVE DE SEGURIDAD
	//const char contrasena[10] = {'R','0', 'T', '3', 'N', 'F', '0', 'R', 'D', '%'};
	//char comtrasena[10];
	char NOMBRE[30];
	color(8);
		cout<<"INGRESE SU NOMBRE"<<endl;
		cin.getline(NOMBRE, 30, '\n');
		
	if(NOMBRE == m1.profesor or m2.profesor or m3.codigo or m4.profesor or m5.profesor or m6.profesor or m7.profesor or m8.profesor or m9.profesor or m10.profesor or m11.profesor or m12.profesor or m13.profesor or m14.profesor or m15.profesor or m16.profesor or m17.profesor or m18.profesor or m19.profesor or m20.profesor or m21.profesor)
		{

		
		
	}else{
		color(4);
		cout<<"IMPOSTOR; NO SE TRATA DE UN PROFESOR"<<endl;
		system("pause");
		main();
	}//fin del if
	
	
	
}//FIN DEL PROFE////////////////////////////////////////////////////////////////////////////////////////////////////////////
