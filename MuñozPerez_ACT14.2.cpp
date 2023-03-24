
#include <iostream>
using namespace std;
#include <string>
#include <iomanip> //Para dar formato a tabulaciones y representaciones graficas
#include <vector> //Estructura de vector utilizada para ordenar los objetos
#include <fstream> //Esta libreria y la de abajo sirven para poder guaradar la lista de contactos
#include <sstream>
#include <limits>
/*
[ANGEL EDUARDO MUÑOZ PEREZ]
[ACTIVIDAD 14]
[CUALTOS_ INGENIERIA EN COMPUTACION]
[2do semestre_23.03.2023]
[Prof. Sergio]
*/
//Declaracion de los voids.
void header(), lcontactos(), menuprincipal(), agregarcont(), buscarcont(), guardarcont(), cargarcont(), modcont(int indice), borrcont(int indice), limpantalla();
//Variables.
int selcmenprin;
//Estructura.
struct directorio
{
    string nombre;
    string apellido;
    string ciudad;
    string estado;
    string calle;
    string edad;
    string estatura;
    directorio(string Nombre, string Apellido, string Ciudad, string Estado, string Calle, string Edad, string Estatura){
        nombre = Nombre;
        apellido = Apellido;
        ciudad = Ciudad;
        estado = Estado;
        calle = Calle;
        edad = Edad;
        estatura = Estatura;
    
    }
};
//Vector para hacer la estructura dinamica.
vector <directorio> contactos;

//Programa principal.
int main(){
    cargarcont();
    while (selcmenprin !=3)
    {
        header();
        lcontactos();
        menuprncipal();
        cin.get();
        limpantalla();
    }
    guardarcont();
    return 0;
}
//Imprime el header del menu principal.
void header(){
    cout << setw(105) << setfill('') << "" << endl << endl
        << setw(69) << setfill(' ') << "1. Anadir.  2. Buscar.  3.Salir. " << endl
        << setw(105) << setfill('') << "" << endl;
}
//Imprime la lista de contactos.
void lcontactos(){
    cout << setfill(' ')
        << left
        << setw(20)
        << "Nombre"
        <<left
        <<setw(20)
        <<"Apellido"
        << left
        << setw(15)
        << "Ciudad"
        << left
        << setw(15)
        << "Estado"
        << left
        << setw(20)
        << "Calle"
        << left
        << setw(5)
        << "Edad"
        << left
        << set(10)
        << "Estatura"
        << endl;
    for(int i =0; i < contactos. size(); i ++){
         cout << left
            << setw(20)
            << contactos[i].nombre
            << left
            << setw(20)
            << contactos[i].apellido
            << left
            << setw(15)
            << contactos[i].ciudad
            << left
            << setw(15)
            << contactos[i].estado
            << left
            << setw(20)
            << contactos[i].calle
            << left
            << setw(5)
            << contactos[i].edad
            << left
            << setw(3)
            << contactos[i].estatura << "cm"
            << endl;

    }

}
//Menu principal.
void menuprincipal(){
    bool valid_input = false; //Validacion 
    while (!valid_input) {
        cin >> selcmenprin;
        if (selcmenprin < 1 || selcmenprin > 3) {
            cout << "Valor no admitido, por favor ingrese un valor entre (1-3): ";
            cin.clear(); // limpia
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignora
        }
        else {
            valid_input = true;
        }
    }
    switch (selcmenprin)
    {
    case 1:
        agregarcont();
        break;
    case 2:
        buscarcont();
        break;
    default:
        break;
    }
}
//Agregar un nuevo contacto.
void agregarcont(){
    limpantalla();
    cout << setw(105) << setfill('') << "" << endl << endl
        << setw(61) << setfill(' ') << "Agregar contacto" << endl
        << setw(105) << setfill('') << "" << endl;
    string Nombre, Apellido, Ciudad, Estado, Calle, Edad, Estatura;
    cin.ignore();
    cout << "Nombre: ";
    getline(cin, Nombre);

    cout << "Apellido: ";
    getline(cin, Apellido);

    cout << "Ciudad: ";
    getline(cin, Ciudad);

    cout << "Estado: ";
    getline(cin, Estado);

    cout << "Calle: ";
    getline(cin, Calle);

    cout << "Edad: ";
    getline(cin, Edad);

    cout << "Estatura: ";
    getline(cin, Estatura);

     directorio nuevo_contacto(Nombre, Apellido, Ciudad, Estado, Calle, Edad, Estatura);
     contactos.push_back(nuevo_contacto);

     cout <<"El contacto se agrego con exito. :)" <<endl;
}
//Buscar contacto.
void buscarcont(){
     string busqueda;
    bool encontrado = false;
    cin.ignore();
    cout << "Ingresa el nombre o apellidos del contacto a buscar: ";
    getline(cin, busqueda);

    // Buscar en la lista de contactos
    for (int i = 0; i < contactos.size(); i++) {
        if (contactos[i].nombre == busqueda || contactos[i].apellido == busqueda) {
            limpantalla();
            cout << setw(105) << setfill('') << "" << endl << endl
                << setw(69) << setfill(' ') << "Contacto encontrado" << endl
                << setw(105) << setfill('') << "" << endl;
            cout << "Nombre: " << contactos[i].nombre << " " << contactos[i].apellido << endl;
            cout << "Ciudad: " << contactos[i].ciudad << endl;
            cout << "Estado: " << contactos[i].estado << endl;
            cout << "Calle: " << contactos[i].calle << endl;
            cout << "Edad: " << contactos[i].edad << endl;
            cout << "Estatura: " << contactos[i].estatura << endl;

            cout << "\n¿Desea modificar este contacto? (s/n): ";
            char opcion;
            cin >> opcion;

            if (opcion == 's' || opcion == 'S') {
                modcont(i);
            }

            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Contacto no encontrado." << endl;
    }
}
void modcont(int indice){
    cin.ignore();
    limpantalla();
    cout << setw(105) << setfill('') << "" << endl << endl
        << setw(69) << setfill(' ') << "Modificar contacto" << endl
        << setw(105) << setfill('') << "" << endl;
    string Nombre, Apellido, Ciudad, Estado, Calle, Edad, Estatura;
    cout << "Nombre (" << contactos[indice].nombre << "): ";
    getline(cin, Nombre);

    cout << "Apellido (" << contactos[indice].apellido << "): ";
    getline(cin, Apellido);

    cout << "Ciudad (" << contactos[indice].ciudad << "): ";
    getline(cin, Ciudad);

    cout << "Estado (" << contactos[indice].estado << "): ";
    getline(cin, Estado);

    cout << "Calle (" << contactos[indice].calle << "): ";
    getline(cin, Calle);

    cout << "Edad (" << contactos[indice].edad << "): ";
    getline(cin, Edad);

    cout << "Estatura (" << contactos[indice].estatura << "): ";
    getline(cin, Estatura);

    if (!Nombre.empty()) {
        contactos[indice].nombre = Nombre;
    }

    if (!Apellido.empty()) {
        contactos[indice].apellido = Apellido;
    }

    if (!Ciudad.empty()) {
        contactos[indice].ciudad = Ciudad;
    }

    if (!Estado.empty()) {
        contactos[indice].estado = Estado;
    }

    if (!Calle.empty()) {
        contactos[indice].calle = Calle;
    }

    if (!Edad.empty()) {
        contactos[indice].edad = Edad;

        if (!Estatura.empty()) {
            contactos[indice].estatura = Estatura;
        }

        cout << "Contacto modificado con exito!" << endl;

        // Preguntar si desea borrar el contacto
        cout << "¿Desea borrar el contacto? (S/N): ";
        char respuesta;
        cin >> respuesta;

        if (respuesta == 'S' || respuesta == 's') {
            borrcont(indice);
        }
    }
}
//Borrar el contacto.
void borrcont(int indice){
    contactos.erase(contactos.begin() + indice);
    cout << "Contacto eliminado con exito!" << endl;

}
//Guarda los contactos en un archivo txt.
void guardarcont(){
    ofstream archivo("Contactos.txt");
    if(archivo.is_open()){
        for(int i = 0; i < contactos. size(); i++){
            archivo << contactos[i].nombre << ";"
                << contactos[i].apellido << ";"
                << contactos[i].ciudad << ";"
                << contactos[i].estado << ";"
                << contactos[i].calle << ";"
                << contactos[i].edad << ";"
                << contactos[i].estatura << "\n";

        }
        archivo.close();
        cout <<"Contactos guardados con exito. :)" <<endl;
    }else{
       cout << "No se pudo abrir el archivo para guardar los contactos. :'(" << endl; 
    }
}
//Void para importar los contactos.
void cargarcont(){
    ifstream archivo("Contactos.txt");
    if(archivo.is_open()){
        string linea;
        while (getline(archivo, linea))
        {
            stringstream ss(linea);
            string Nombre, Apellido, Ciudad, Estado, Calle, Edad, Estatura;
            getline(ss, Nombre, ';');
            getline(ss, Apellido, ';');
            getline(ss, Ciudad, ';');
            getline(ss, Estado, ';');
            getline(ss, Calle, ';');
            getline(ss, Edad, ';');
            getline(ss, Estatura, ';');
            directorio nuevo_contacto(Nombre, Apellido, Ciudad, Estado, Calle, Edad, Estatura);
            contactos.push_back(nuevo_contacto);
        }
        archivo.close();
        cout <<"Contactos cargados con exito. :)" <<endl;
    }else{
        cout <<"No se logro cargar la lista de contactos. :'(" <<endl;
    }
}
//Se encarga de limpiar la pantalla.
void limpantalla(){
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif

