//FUNCIONES DE MI ACTIVIDAD 10
//ANGEL EDUARDO MUÑOZ PEREZ_ING COMPUTACION_ CUALTOS_ 2023
void arreglo()
{
	A[tamano]=0;
	for(int i=0; i<tamano; i++){
		cout<<"["<<A[i]<<"]\t";
	}
	cout<<"\n";
}//FIN DE F ARREGLO


void escribir()
{
	system("cls");//borra la consola para cuando llegues al principio
		for (int i=1; i <=tamano; i++) //iteracion que empieze de 0 hasta 9
			{//inicio de for
			//validar dato
			while (true)
				{
				cout <<"ingrese el dato del "<<i<<"° pocision"<<endl;
				if (cin >> A [i])
					{
						break;
					}else {
						cout <<"Eso no es un numero joven"<<endl;
						cin.clear();
						cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
					}//fin del if para validar
				}//fin del while para validar
			}//fin del for 
	system("cls");//borra la consola para cuando llegues al principio	
}//FIN DE F ESCRIBIR


void ordenar()
{
	int x;
	int y;
	int aux;
	int lugar;
	lugar=0;
	//hacemos METODO BURBUJA
	for (int x=0; x <tamano -1; x++){
		for(int y=1; y <tamano; y++){
			if (A[y]<A[y-1]){
				aux =A[y];
				A[y] =A[y-1];
				A[y-1] =aux;
				lugar++;
			}//fin de IF operacion burbuja	
		}//fin del segundo for
	}//fin del primer for
	system("pause");
}//FIN DE F ORDENAR


int sumar()
{
	int suma= 0;//resultado de la suma
	int x= 0;//donde guardar numeros
	for(int i=0; i<tamano; i++){
		x+=A[i]+A[i];
		suma=x/2;
	}
	cout<<"la suma es: ["<<suma<<"]"<<endl;
	return 0;
}//FIN DE F SUMAr


void vaciar()
{
	for(int i=0; i<tamano; i++){
		A[i]=0;
	}
}//FIN DE F VACIAR


void buscar()
{
	int numero;
	int inicio=0;//izquierda
	int final=tamano;//derecha
	int x=0;
	int centro= (final + inicio)/2;


	cout<<"Que numero quieres buscar?:";
	cin>>numero;
	//buscamos desde iquierda
	for(int inicio=1; inicio<=centro; inicio++){
		if(A[inicio]==numero){
			cout<<"su numero esta en la pocision "<<"["<<inicio+1<<"]";
		}else{
			cout<<". ";
		}//fin del IF 
	}//fin del primer for
	//buscamos desde derecha
	for (int final=tamano; final>=centro; final--){
		if(A[final]==numero){
			cout<<"su numero esta en la pocision "<<"["<<inicio+1<<"]"<<endl;
		}else{
			cout<<". ";
		}//fin del IF
	}//fin del segubndo for
	system("pause");
}//FIN DE F buscar
