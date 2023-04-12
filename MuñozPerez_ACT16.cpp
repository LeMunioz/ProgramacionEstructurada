#include <iostream>
#include <limits>
#include <cmath>
#include "colores.cpp"
using namespace std;
/*
[ANGEL EDUARDO MUÑOZ PEREZ]
[ACTIVIDAD 16_ TORRES DE HANÓI]
[CUALTOS_ Ing. en computación]
[Programación Estructurada]
[Prof. Sergio Casillas]
[12.04.2023]
*/
void movimientos(int numDiscos, char torreA, char torreC, char torreB) {
    // Caso base: cuando solo quede un disco
    if (numDiscos == 1) {
        cout << "Mover disco " << numDiscos << " de " << torreA << " a " << torreC << endl;
    }
    else {//sino, mover n-1 discos de la primera a la ultima torre
        movimientos(numDiscos - 1, torreA, torreB, torreC);
        
        //mover el disco restante de la torre A a la C
        cout << "Mover disco " << numDiscos << " de " << torreA << " a " << torreC << endl;
        
        //mover los n-1 discos restantes de la torre B a la torre C
        movimientos(numDiscos - 1, torreB, torreC, torreA);
    }
}//FIN DE FUNCION MOVIMIENTOS//////////////////////////////////////////////

int main() {
	system("cls");
    int numDiscos;
    int opcion;
    int movimientostotales;
    
    color(10);
    cout<<"  BIENVENIDO A MI PROGRAMA\n   LAS TORRES DE HANÓI"<<endl;
    cout<<"_______|_____|_____|_______"<<endl; color (15);
    
    // Pedimos la cantidad de discos y validamos
    cout << "Ingresa la cantidad de discos: ";
    if (cin >> numDiscos && numDiscos >2 && numDiscos <8){
    //dibujamos las torres
    	cout<<"_____________________________________"<<endl; color(1);
    	cout<<"  TORRE A	 TORRE B    TORRE C"<<endl; color(3);
    	cout<<"	 |	   |        |"<<endl;
    	cout<<"	 |	   |        |"<<endl;
    	cout<<"	 |	   |        |"<<endl;
    	cout<<"	---       ---      ---"<<endl; color(15);
	// Ivocamos la funcion recursiva
	    movimientos(numDiscos, 'A', 'C', 'B');
	//escribios el numero de movimientos
	    movimientostotales = pow(2, numDiscos); 
	    color(8); cout<<"se necesitaron "<<movimientostotales-1<<" para resolverlo"<<endl; color(15);
	}else{//si no lee la opcion
		cout<<"Pon un numero estimado (del 3 al 7)"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');	
		system("pause");
		main();
	}
	//PAra hacerlo de nuevo
	color(14);
	cout<<"gustas hacerlo con otra cantidad?"<<endl; color (10);
	cout<<"[1] SI "; color (12); cout<<"                 NO [2]"<<endl; color(15);
	//validamos la opcion
	if(cin >>opcion){
		switch (opcion){
			case 1:
				main();
				break;
			case 2:
				abort();
				break;
			default:
				cout<<"Pon 1 o 2 mi rey"<<endl;
				cin.clear();
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');	
				system("pause");
				main();		
		}//fin del switch
	}else{
		cout<<"Pon un numero estimado"<<endl;
				cin.clear();
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');	
				system("pause");
				main();	
	}//fin de la validacion
    return 0;
}//FIN DEL MAIN///////////////////////////////////////////////////
