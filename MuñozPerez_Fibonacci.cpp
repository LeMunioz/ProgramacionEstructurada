#include <iostream>
using namespace std;

/*
[Angel Eduardo Muñoz Perez]
[31_Ene_2023]
[Actividad 4]
Centro Universitario de los Altos
Ingenieria en computación
[Prof. Franco Casillas Sergio]
--Este ´programa permitira calcular la serie de Fibonacci hasta donde el usuario indique--
*/

void swich ();
int main ();
			//variables GLOBALES
			int contador = 0; //sirve para delimitar los pasos en el while
			int numero1= 0; //para calcular los numeros de fibonacci
			int numero2= 0;
			int numero3= 1; 
			int numero4= 1; //el numero de fibonacci
			int i =1;	//para iteracion en for
			int valor1;  //el limite que dara el usuario
int main ()
{			
			
	cout <<"Bienvenido a mi programa"<<endl;
	cout <<"calcularemos los numeros de la serie de fibonacci que desees"<<endl;
	
	
	
	
	//validacion de dato
	cout <<"ingresa el numero en donde quieres que se detenga: "<<endl;
	if (float(scanf("%d",&valor1)) != 1){ //primero scaneamos el valor tranformado en flotante
		cout<<"escribe un dato valido estimado"<<endl; //si su transofrmacion suelta algo alejado a un entero manda mensaje
		system("pause"); //para que se detenga
		fflush(stdin); //que borre 
		main(); //regresa
	}
	while (valor1 > 45) //delimitamos hasta donde puede poner limite
	{                   //por encima del 45, el numero que genera es muy grando para la variable
		cout<<"escribe otro numero mas chico porfa"<<endl;
		cin.clear();
		fflush(stdin); //que borre 
		cin >>valor1;
	}
	while (valor1 < 1) //nos aseguramos que ponga numeros naturales
	{
		cout<<"escribe otro numero mas grande porfa"<<endl;
		cin.clear();
		fflush(stdin); //que borre 
		cin >>valor1;	
	}
	
		cout <<"Con que metodo quieres que calcule?"<<endl; //haremos la sucesion de fibonacci de 3 formas
	cout <<"_______________________"<<endl;
	cout <<"| [1] con for         |"<<endl;
	cout <<"| [2] con while       |"<<endl;
	cout <<"| [3] con dowhile     |"<<endl;
	cout <<"______________________"<<endl;

	swich ();
} //FIN DEL MAIN

void swich ()
{

	char Y = Y;
	char y = y;
	bool repetir = true;  //para crear ciclo 
	char salida; //para dar la opcion de salir
	int opcion; //para pedir la opcion con la que quieres trabajar
	cin >>opcion;
	while (repetir)
	{
	
	switch (opcion) //un switch para que se dirija  a la forma deseada
	{
		case 1: //FOR


			for (int i = 1; i<= valor1; i++) //creamos la iteracion hasta donde se encuentra el limite que puso el usuario
			{
				numero4 = numero2 + numero3; //igualamos fibonacci a la suma de los dos numeros
				cout <<"[" <<numero4 <<"] "; // que  lo escriba
				numero2 = numero3;           //que los anteriores se igaulen
				numero3 = numero4;
					fflush(stdin); //que borre 
			}	                            //por el for, se repite la operacion con la igualacion
			cout <<"¿Quieres continuar? [Y]]"<<endl;    //para regresar si quieres repetir
			cin >>salida;

			if (salida == Y || salida == y)
				{
					main ();	
				}else  
					
			system("pause"); 
		    main();
			break; 
			break; //FIN DEL FOR
		case 2:    //WHILE
			contador = 0;
			while (contador != valor1)         //utilizamos contador para que el why lo haga hasta que el contador llegue al limite
			{
				numero4 = numero2 + numero3;   //repetimos el proceso del for
				cout <<"[" <<numero4 <<"] ";
				numero2 = numero3;
				numero3 = numero4;
				contador++;                   //para que el limitaodr crezca
					fflush(stdin); //que borre 
			}
			cout <<"¿Quieres continuar? [Y]]"<<endl;    //para regresar o salir
			cin >>salida;

			if (salida == Y || salida == y)
				{
					main ();	
				}	
			system("pause"); 
		    main();
			break;  //FIN DEL WHILE	
		case 3:  //DO WHILE
			contador = 0;                   //utilizamos el msmo proceso para el do while
			do                              //pero primero el proceso
			{
				numero4 = numero2 + numero3;
				cout <<"[" <<numero4 <<"] ";
				numero2 = numero3;
				numero3 = numero4;
				contador++;	
					fflush(stdin); //que borre 
			}
			
			while (contador != valor1);	    //y luego la cocndicion con el contador
			cout <<"¿Quieres continuar? [Y]]"<<endl;    //para regresar o salir
			cin >>salida;

			if (salida == Y || salida == y)
				{
					main ();	
				}	
			system("pause"); 
		    main();	
				
			break; //FIN DEL DOWHILE	 
		default:
			cout<<"esa no es una opcion joven"<<endl;
			system("pause"); //para que se detenga
			cin.clear();
			main();
			
			break;	
			
	} //fin del switch
	} //fin del while para repetir
} //fin del SWICH VOID
