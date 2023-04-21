
#include <iostream>
#include <vector>
#include <cstdlib> // contiene la funcion system("pause")
#include <locale.h> // Libreria que contiene la funcion setlocale
using namespace std;




//VOID//
void imprimir_torres(vector<vector<int> >& torres);
void torresHanoi(int n, char torreOrigen, char torreAuxiliar, char torreDestino, int& contador);

//VARIABLES
int eleccion; // declara numDiscos en este ámbito para ambos casos
char otra;
int n = 3; // número de discos
vector<vector<int> > torres(3);
int numDiscos;
int contador = 0;
int torre_origen, torre_destino;

int main(){
do{//repetir ciclo while_do
        cout<<"JUEGO TORRES DE HANOI"<<endl;
        cout<<"MENU DE OPERACIONES"<<endl;
        cout<<"1. Manualmente"<<endl;
        cout<<"2. Resolver rapido"<<endl;
        cout<<"3. SALIR"<<endl;
        cout<<"ELIGE UNA OPCION: ";
        cin>>eleccion;
//VALIDACION DE VALOR INGRESADO, SOLO NUMEROS
//YA DECLARADO EN LA VARIABLE TIPO INT ENTERO
    if (eleccion == false){
    cout<<"ERROR El dato ingresado es una letra o texto"<<endl;
    }else{//COMIENZO DE SWITCH Y CASOS
switch (eleccion) {
    case 1:
    // Inicializar torre 1 con n discos
for(int i = n; i >= 1; i--) {
    torres[0].push_back(i);
}
imprimir_torres(torres);

// Juego

while(true) {
    cout << "Ingresa la torre de origen y la torre de destino (ejemplo: 1 2): ";
    cin >> torre_origen >> torre_destino;

    // Restar 1 para ajustar a índices de vector
    torre_origen--;
    torre_destino--;

    if(torres[torre_origen].empty()) {
    /*se utiliza para verificar si un
    contenedor está vacío o no.
    Esta función devuelve un valor
    booleano true si el contenedor
    no tiene ningún elemento, de lo
    contrario devuelve false.*/

        cout << "Torre origen vacía. Intenta de nuevo." << endl;
        continue;
    }

    int disco = torres[torre_origen].back();
    torres[torre_origen].pop_back();
    /*Después de ejecutar esta línea de código,
    el último elemento del vector my_vector se
    eliminará. Esto es útil cuando necesitas
    eliminar elementos de un vector dinámicamente
    durante la ejecución del programa, por ejemplo,
    cuando ya no son necesarios o cuando necesitas
    reducir el tamaño del vector.*/

    if(!torres[torre_destino].empty() && disco > torres[torre_destino].back()) {
        cout << "Movimiento inválido. Intenta de nuevo." << endl;
        torres[torre_origen].push_back(disco); // Regresar disco a torre de origen
        //se utiliza para agregar un nuevo elemento al final de un contenedor
        //vector. Esta función toma un valor como argumento y lo inserta al final del vector.
        continue;
    }

    torres[torre_destino].push_back(disco);
    imprimir_torres(torres);
    contador++; // incrementar contador de movimientos

    // Checar si el usuario ha ganado
    if(torres[2].size() == n) {
        cout << "¡Felicidades, has ganado el juego!" << endl;
        cout << "Número de movimientos: " << contador << endl; // imprimir contador de movimientos
        break;
    }
}
    break;
    case 2://AUTOMATICO
    cout << "\nCOMPUTADORA\n";
    cout << "Ingrese el numero de discos: ";//establece numero de discos
    cin >> numDiscos;
    torresHanoi(numDiscos, 'A', 'B', 'C', contador); //muestra en base al numero de discos los movimientos realizados
    cout << "Se realizaron " << contador << " movimientos." << endl;
    break;

    case 3:
    cout << "\nGRACIAS\n";
    exit(EXIT_SUCCESS);
    default:
    cout << "\nNo es valido\n" << endl;
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
return 0;
}
//VOID VISUALIZAR PROCESO MANUALMENTE
void imprimir_torres(vector<vector<int> >& torres) {
    for(int i = 0; i < 3; i++) {
        cout << "Torre " << i+1 << ": ";
        for(int j = 0; j < torres[i].size(); j++) {
            cout << torres[i][j] << " ";
        }
        cout << endl;
    }
}
//VOID AUTOMATICO
void torresHanoi(int n, char torreOrigen, char torreAuxiliar, char torreDestino, int& contador) {
    if (n == 1) {
        cout << "Mover disco 1 de la torre " << torreOrigen << " a la torre " << torreDestino << endl;
        contador++;
    } else {
        torresHanoi(n-1, torreOrigen, torreDestino, torreAuxiliar, contador);
        cout << "Mover disco " << n << " de la torre " << torreOrigen << " a la torre " << torreDestino << endl;
        contador++;
        torresHanoi(n-1, torreAuxiliar, torreOrigen, torreDestino, contador);
    }
}\
