#include <iostream>
#include <limits>
#include <ctime>
#include <string>

using namespace std;
#include "colores.cpp"
/*
[Angel Eduardo Mu�oz Perez]
[ACT 13_ JUEGO AHORCADO]
[Centro Universtiario de los altos]
[Ingenieria en computaci�n_2do semestre]
[Prof. Sergio]
[16_03_2023]
*/

//FUNCIONES
int main();
void escoger();
void aleatorio();
void juego();
void gameover();
void victoria();

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
int encontrado;
int contadorfallos;
int contadoracierto;
int fallos;
//colores del mono
int a=0;
int b=0;
int c=0;
int d=0;
int e=0;
int f=0;


int main(){
a=0;
b=0;
c=0;
d=0;
e=0;
f=0;
contadorfallos=0;
contadoracierto=0;
fallos=0;
encontrado=0;
esc=0;

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
	cout<<"PALABRAS A ESCOGER :";
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
			juego();				
}//FIN DE F ESCOGER


void aleatorio(){
	srand((unsigned)time(NULL));//para quitar el patron de aleaotiro
	esc = rand()%22;//le ponemos a esc un numrero ramdom hasta 21
	for(int x=0; x<21; x++){
					palabra[x]=BANCO[esc][x];//extrameos palabra vector del banco
					//cout<<palabra[x]; SOLO PARA COMFIRMAR QUE LA AGARRO
					}//fin del for palabra
	juego();				
}//FIN DE F ALEATORIO


void juego(){
	system("cls");
	color(13);
	//VIDAS
	
	
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
	for(int i=0; i<sizeof(palabra);i++){	
		cout<<palabra[i];
	}cout<<endl;
	for(int i=0; i<sizeof(palabra);i++){	
		cout<<palabraaux[i];
	}
	cout<<endl;
	for(int i=0; i<sizeof(palabra);i++){
		cout<<"-";
	}
	
	//VERIFICAMOS SI HA GANADO
	for(int i=0; i<sizeof(palabra); i++){
		if (palabra[i]==palabraaux[i]){
		contadoracierto++;
		}
	}//fin de for aciertos
	if(contadoracierto==sizeof(palabra)){
		victoria();
	}
	
	//LEER INTENTO
	color(7);
	cout<<endl<<"COLOQUE UNA LETRA:"<<endl;
	color(1);
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
	int n=0;
	
	for(int i=0; i<sizeof(palabra);i++){
		if (palabra[i]!=intento){
			palabraaux[i]='_';
			contadorfallos++;
		}else{
			palabraaux[i]=intento;	
		}
	}	
	if (contadorfallos>sizeof(palabra)){
		++fallos;
				if(fallos ==1){
					a=15;
				}
				if(fallos ==2){
					b=15;
				}
				if(fallos ==3){
					c=15;
				}
				if(fallos ==4){	
					d=15;
				}
				if(fallos ==5){
					e=15;
				}
				if(fallos ==6){
					f=15;
				}
				if(fallos ==7){
					gameover();
				}
		}
		juego();
				
		
}//FIN DE F JUEGO

//gotoxy(x, y);


void gameover(){
	//como ya perdio, quitemos sus fallos
	system("cls");
a=0;
b=0;
c=0;
d=0;
e=0;
f=0;
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

void victoria(){
	system("cls");
a=0;
b=0;
c=0;
d=0;
e=0;
f=0;
	contadorfallos=0;
	
	color(2);
	cout<<"\n================="<<endl;
	cout<<"|   VICTORIA    |"<<endl;
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
				victoria();
			}
			}//fin de while validacion	
}//FIN DE F VICTORIA


/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string palabra;
int main(){
//VOIDS
void palabras();
void juego();
//VARIABLES
//MENU Y REPETICION
int eleccion;
char otra; //repetir con while
do{//repetir ciclo while_do
        cout<<"ELIGE UNA OPERACION"<<endl;
        cout<<"1. INGRESAR PALABRAS O FRASES"<<endl;
        cout<<"2. JUEGO AHORCADO"<<endl;
        cout<<"3. SALIR"<<endl;
        cout<<"ELIGE UNA OPCION: ";
        cin>>eleccion;
//VALIDACION DE VALOR INGRESADO, SOLO NUMEROS
//YA DECLARADO EN LA VARIABLE TIPO INT ENTERO
    if (eleccion == false){
    cout<<"ERROR El dato ingresado es una letra o texto"<<endl;
    }else{//COMIENZO DE SWITCH Y CASOS
    switch (eleccion){
    case 1:
        cout<<"PALABRAS"<<endl;
        palabras();

    break;
/////////////////////////////////////////////////////////////////////
    case 2:
        cout<<"JUEGO AHORCADO"<<endl;
       juego();
    break;
    case 3:
    cout<<"\nSALIR\n";
    exit(EXIT_SUCCESS);
    break;
default:
	cout<<"\nNo es valido"<<endl;
break;

}//switch
}//if - else

//CODIGO GENERAL PARA TERMINAR Y VOLVER
	cout<<"\nSi deseas CONTINUAR preciona S,\nSi deseas SALIR preciona cualquier letra"<<endl;
	cin>>otra;
}//CICLO DO WHILE ACEPTANDO MAYUSCULAS O MINUSCULAS
	while ((otra=='S') || (otra=='s'));

//FINALIZACION DEL PROGRAMA
	cout<<"Fin del programa"<<endl;
	exit(EXIT_SUCCESS);
return 0;
}

void palabras(){
    string palabra;
    int vocales = 0, consonantes = 0, espacios = 0;
    // Pedir al usuario una palabra o frase
    cout << "INGRESA UNA PALABRA O FRASE: ";
    getline(cin, palabra);
    // Contar el número de vocales, consonantes y espacios
    transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);
    for (char c : palabra) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        } else if (c >= 'a' && c <= 'z') {
            consonantes++;
        } else if (c == ' ') {
            espacios++;
        }
    }
    // Determinar si es una palabra palíndromo
    string palabra_invertida = palabra;
    reverse(palabra_invertida.begin(), palabra_invertida.end());
    bool palindromo = (palabra == palabra_invertida);
    // Convertir palabra o frase a Mayúsculas y minúsculas
    string palabra_mayusculas = palabra;
    transform(palabra_mayusculas.begin(), palabra_mayusculas.end(), palabra_mayusculas.begin(), ::toupper);
    string palabra_minusculas = palabra;
    transform(palabra_minusculas.begin(), palabra_minusculas.end(), palabra_minusculas.begin(), ::tolower);

    // Mostrar resultados
    cout << "Vocales: " << vocales << endl;
    cout << "Consonantes: " << consonantes << endl;
    cout << "Espacios: " << espacios << endl;
    if (palindromo) {
        cout << "La palabra/frase es un palindromo." << endl;
    } else {
        cout << "La palabra/frase no es un palindromo." << endl;
    }
    cout << "Palabra/frase en mayusculas: " << palabra_mayusculas << endl;
    cout << "Palabra/frase en minusculas: " << palabra_minusculas << endl;

    // Solicitar otra palabra o frase y que se concatene con la anterior
    string otra_palabra;
    cout << "INGRESA OTRA PALABRA O FRASE: ";
    getline(cin, otra_palabra);
    palabra += " " + otra_palabra;

    // Contar el número de vocales, consonantes y espacios
    transform(otra_palabra.begin(), otra_palabra.end(), otra_palabra.begin(), ::tolower);
    for (char c : otra_palabra) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        } else if (c >= 'a' && c <= 'z') {
            consonantes++;
        } else if (c == ' ') {
            espacios++;
        }
    }

    // Determinar si es una palabra palíndromo
    string palabra_invertida2 = otra_palabra;
    reverse(palabra_invertida2.begin(), palabra_invertida2.end());
    bool palindromo2 = (otra_palabra == palabra_invertida2);

    // Mostrar resultados
    cout << "Vocales: " << vocales << endl;
    cout << "Consonantes: " << consonantes << endl;
    cout << "Espacios: " << espacios << endl;
    if (palindromo2) {
        cout << "La palabra/frase es un palindromo." << endl;
    } else {
        cout << "La palabra/frase no es un palindromo." << endl;
    }
    cout << "Palabra/frase en mayusculas: " << palabra_mayusculas << endl;
    cout << "Palabra/frase en minusculas: " << palabra_minusculas << endl;

    cout << "La nueva palabra/frase concatenada es: " << palabra << endl;
}
//////////////////////////////////////////////////////////////////////////////
void juego(){
    system("cls");
    cout << "JUEGO DEL AHORCADO" << endl;
    cout << "Para comenzar pudes pedir a alguien \nque trate de adivinar las palabras \nque introduciste con anterioridad" << endl;
    string respuesta(palabra.length(), '_'); // Generar cadena de '_'
    int intentos = 5;
    while (intentos > 0 && respuesta != palabra) {
        cout << "Palabra: " << respuesta << endl;
        cout << "Intentos restantes: " << intentos << endl;
        cout << "Ingrese una letra: ";
        char letra;
        cin >> letra;
        bool encontrada = false;
        for (int i = 0; i < palabra.length(); i++) {
            if (palabra[i] == letra) {
                respuesta[i] = letra;
                encontrada = true;
            }
        }
        if (!encontrada) {
            intentos--;
            cout << "La letra ingresada no se encuentra en la palabra." << endl;
        }
        system("cls");
    }
    if (respuesta == palabra) {
        cout << "¡HAS ADIVINADO!" << endl;
    } else {
        cout << "PERDISTE. LA PALABRA ES: " << palabra << endl;
    }
}*/

