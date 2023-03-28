

void dibujagato(char gato[3][3]);
bool checa3linea(char gato[3][3]);


void dibujagato(char gato[3][3]){

	cout <<gato[1][1]; color(8); cout<<"\t |"; color(15); cout<<gato[2][1]; color(8); cout<<"\t |"; color (15); cout<<gato[3][1]<<endl;
	color(8); cout<<"________________________"<<endl; color(15);
	cout <<gato[1][2]; color(8); cout<<"\t |"; color(15); cout<<gato[2][2]; color(8); cout<<"\t |"; color (15); cout<<gato[3][2]<<endl;
	color(8); cout<<"________________________"<<endl; color(15);
	cout <<gato[1][3]; color(8); cout<<"\t |"; color(15); cout<<gato[2][2]; color(8); cout<<"\t |"; color (15); cout<<gato[3][2]<<endl;
	
}//FIN DE LA FNCION DIBUJA GATOS


bool checa3linea(char gato[3][3], char o, char x){
	
//para checar las filas	
	for(int c=1; c<4; c++){
		if (gato[c][1] == 'O' or 'X' && gato [c][2] == 'O' or 'X' and gato[c][3] == 'O' or 'X'){
			return true;
		}//fin del if	
	}//fin del primer for
//para checar las columnas
	for(int f=1; f<4; f++){
		if (gato[1][f] == 'O' or 'X' && gato [2][f] == 'O' or 'X' and gato[3][f] == 'O' or 'X'){
			return true;
		}//fin del if	
	}//fin del primer for
//para checar las diagonales
	if (gato[1][1] == 'O' or 'X' && gato[2][2] == 'O' or 'X' && gato[3][3] == 'O' or 'X'){
		return true;       
	}
	if (gato[1][3] == 'O' or 'X' && gato[2][2] == 'O' or 'X' && gato[3][1] == 'O' or 'X'){
		return true;
	}else{
		return false;
	}

}//FIN DE LA FUNCION PARA CHECAR SI ALGUIEN HA GANADO/////////////////
