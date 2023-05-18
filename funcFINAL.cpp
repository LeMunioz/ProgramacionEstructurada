#include <iostream>
#include <vector>

using namespace std;

struct materia{
	int codigo;
	char profesor[30];
	char clase[30];
}m1 = {1001, "Octavio Rojas", "matematica y vida cotidiana"},
	m2 = {1002, "Cesar Muñoz", "Cálculo"},
	m3 = {1003, "Cesar Muñoz", "Metodos numericos"},
	m4 = {2001, "Marisol Melano", "Español"},
	m5 = {2002, "Marisol Melano", "Literatura clasica"},
	m6 = {2010, "Octavios Rojas", "Etimología grecolatina"},
	m7 = {1021, "Sergio Casillas", "Programación"},
	m8 = {1022, "Miguel Sanabria", "Arquitectura de computadoras"},
	m9 = {1023, "Cesar Muñoz", "Algoritmos"},
	m10 = {1024, "Sergio Casillas", "Redes"},
	m11= {1025, "Octavio Rojas", "Electronica"},
	m12= {2021, "Manolo Acevez", "Penal"},
	m13= {2022, "Marisol Melano", "Derecho Romano"},
	m14= {2023, "Manolo Acevez", "Etica y legislación"},
	m15= {3001, "Hector Perez", "Anatomia"},
	m16= {3002, "Rosalia Hernandez", "Patologia"},
	m17= {3003, "Hector Perez", "Histologia"},
	m18= {3004, "Rosalia Hernandez", "Pediatria"},
	m19= {3005, "William Booster", "Bioquimica"},
	m20= {4001, "Miguel Sanabria", "Administracion de empresa"},
	m21= {4002, "William Booster", "ingles"};



struct alumno{
	char nombre[30];
	int edad;
	char carrera[25];
	int semestre;
	long codigo;
	struct materia;
}alumnos[25];




