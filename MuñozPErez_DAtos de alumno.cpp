#include <iostream>
using namespace std;

int main ()
{
	//variables de los datos que ocupamos
	string nombre1;
	string nombre2;
	string apellido1;
	string apellido2;
	int edad;
	string lugar;
	int dia;
	int mes;
	int ano;
	string carrera;
	int semestre;
	//bienvenida
	cout <<"menu de captura de datos del estudiante"<<endl;
	cout <<"Favor de ingresar sus datos"<<endl;
	cout <<"_______________________________________"<<endl;
	cout <<"tu primer nombre" <<endl;
	cin >>nombre1;
	cout <<"tu segundo nombre nombre" <<endl;
	cin >>nombre2;
	cout <<"tu primer apellido" <<endl;
	cin >>apellido1;
	cout <<"tu segundo apellido" <<endl;
	cin >>apellido2;
	cout <<"tu edad"<<endl;
	cin >>edad;
	cout <<"municipio de proveniencia"<<endl;
	cin >>lugar;
	cout <<"tu fecha de nacimiento"<<endl;
	cout <<"dia ["<<endl;
	cin >>dia;
	cout <<"mes (escribelo como dos digitos) ["<<endl;
	cin >>mes;
	ano = 2023 - edad;
	cout <<"que semestre de la carrera cursas ahora?"<<endl;
	cin >> semestre;
	cout <<"¿que carrera cursas?"<<endl;
	cin >>carrera;
	
	//datos recolectados
	cout <<nombre1<<" "<<nombre2<<" "<<apellido1<<" "<< apellido2<<" "<<endl;
	cout <<"edad"<<edad<<"fecha de nacimeinto"<<ano<<"/"<<mes<<"/"<<dia<<"/"<<endl;
	cout <<"municipio de: "<<lugar<<endl;
	cout <<"carrera"<<carrera<<"  semestre: "<<semestre<<endl;
	
	
}
