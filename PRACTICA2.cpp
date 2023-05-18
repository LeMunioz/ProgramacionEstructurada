#include <iostream>
using namespace std;

void juego(int pocisionc, int pocisionf, int contadorlava, int contadorsegundos);

int tamano;
	
int main(){
	cin>>tamano;
	int zona[tamano][tamano];
	
	for(int f=0; f<tamano; f++){
		for(int c=0; c<tamano; c++){
			cin>>zona[c][f];
		}cout<<endl;
	}
	
	int pocisionc=0;
	int pocisionf=0;
	
	int contadorlava=0;
	int contadorsegundos=0;
	
	juego(pocisionc, pocisionf, contadorlava, contadorsegundos);
	
}//fin del main

void juego(int pocisionc, int pocisionf, int contadorlava, int contadorsegundos, int zona[tamano][tamano]){
	while(pocisionc and pocisionf < tamano){
	if (zona[pocisionc+1][pocisionf] >= contadorlava){
		pocisionc = pocisionc+1;
		contadorlava++;
		contadorsegundos++;
		juego(pocisionc, pocisionf, contadorlava, contadorsegundos);
	}else if(zona[pocisionc][pocisionf+1] >= contadorlava){
		pocisionf = pocisionf+1;
		contadorlava++;
		contadorsegundos++;
		juego(pocisionc, pocisionf, contadorlava, contadorsegundos);
	}else if(zona[pocisionc+1][pocisionf] < contadorlava){
		contadorlava++;
		contadorsegundos++;
		juego(pocisionc, pocisionf, contadorlava, contadorsegundos);
	}else if (zona[pocisionc][pocisionf+1] < contadorlava){
		contadorlava++;
		contadorsegundos++;
		juego(pocisionc, pocisionf, contadorlava, contadorsegundos);
	}else if (zona[pocisionc][pocisionf] <= contadorlava){
		cout<<endl;<<"-1";
	}
	}//fin del while
	cout<<endl<<contadorsegundos;
}//fin del juego
