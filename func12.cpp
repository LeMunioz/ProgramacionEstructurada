void contar();
void convertir();
void palindromo();
void concatenar();

void contar(){
	int contadorv=0;//contador de vocales
	int contadorc=0;//contador de consonantes
	int contadore=0;//contador de espacios
	
	for (int i=0; i <palabra.length(); i++){
		if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] =='U'){
			++contadorv;
		}else if(frase[i]>= 'a' && frase[i]<= 'z' or frase[i]>= 'A' && frase[i]<='Z'){
			++contadorc;	
		}else if(int(frase[i])== 32){
			++contadore;
		}
	}//fin de for contar	
	cout<<"-------------------------------------"<<endl;
	cout<<"Tu palabra tiene "<<contadorv<<" vocales"<<endl;
	cout<<"Tu palabra tiene "<<contadorc<<" consonantes"<<endl;
	cout<<"Tu palabra tiene "<<contadore<<" espacios"<<endl;
	system("pause");
	menu();
}//FIN DE F CONTAR


void convertir(){
	int opc;
	cout<<"A que quieres convertir tu frase?"<<endl;
	cout<<"[1] MAYUSCULAS      [2] minusculas"<<endl;
	cout<<"__________________________________"<<endl;
	while (true){ //validacion
			if (cin >> opc){ //si lee la opcion
				switch (opc){
					case 1://para convertir mayusculas
						for(int i=0; i<palabra.length(); i++)
						frase[i]=toupper(frase[i]);
						menu();	
					break;
				case 2://para convertir minusculas
						for(int i=0; i<palabra.length(); i++)
						frase[i]=tolower(frase[i]);
						menu();
					break;
					default:
						cout <<"esa no es una opcio querido"<<endl;
						system ("pause");
					menu();
					break;					
				}//fin de switch opcion 		
				}else { //si no lee la opcion
					cout <<"Ponga un numero mi rey porfas"<<endl;
					cin.clear();
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
					system("pause");
					menu();	
				}//fin del if para validar
			}//fin del while para validar
}//FIN DE F CONVERTIR


void palindromo(){
	int contadorp=0; //contador de los que son palindromos
	int contadornp=0;//contador de los que no son palindromos
	int n;
	n=sizeof(frase);//tamaño de la palabra
	
	//convertimos la frase a minusculas para comparar bien
	for(int x=0; x <n; x++){
	fraseaux[x]=tolower(frase[x]); 
	}//fin del for minuscula
	
	//con un ciclo checamos si la posicion i es igual al tamaño total menos i
	for(int i=0; i <n; i++){		
		if (fraseaux[i] == fraseaux[n-i]){
			++contadorp;
		}else{
			++contadornp;
		}
	}//fin de for palindromo
	
	//si las conincidencias son iguales al tamaño de la frase, es palindromo
	if (contadorp >= n/2){
		cout<<"SU FRASE ES UN PALINDROMO"<<endl;		
	}else{
		cout<<"su frase no es palindromo por "<<contadornp/2<<" terminos"<<endl;
	}
	system("pause");
	menu();
}//FIN DE F PALINDROMO


void concatenar(){
	string otrafrase;
	
	fflush(stdin);
	getline (cin, otrafrase);//leemo nueva frase	
	palabra = palabra + otrafrase; //la añadimos a string original sumandola
	for (int i=0; i<palabra.length(); i++){ //or para rescribirla en el vector de caracter
		frase[i]=palabra[i];
	}
	menu();	
}//FIN DE F CONCATENAR
