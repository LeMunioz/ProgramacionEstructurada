#include <iostream>
#include <limits>//para validar
#include <ctime>//para generar numero alazar
#include "colores.cpp"

using namespace std;
//PARA HACER PRUEBAS

char gato [2][2];
char gatoaux [2][2];

int main(){
int m= 15;
int n= 4;

gato [1][2]= 'x';
gato [0][0]= 'x';
for (int i=0; i <3; i++){
	for(int j=0; j <3; j++){
		gatoaux[j][i]= gato[j][i];
		if (gatoaux[j][i] != ' '){
			m=n;
		color(m);	
		cout << gatoaux[j][i]<<"\t";		
		}//fin del if
	}//fin del segundo for
	cout<<"\n";
}//fin del primer for

		
}//FIN DEL MAIN////////////////////////////////////////////////////
