
#include <iostream>
using namespace std;

//VARIABLES
int tamano;
int numero;

int main(){
	cin>>tamano;
	int arreglo[tamano];
	for (int i= 0; i <tamano; i++){
		cin>>arreglo[i];
	}
	cin>>numero;	
	//multiplos
	for (int i= 0; i <tamano; i++){
		if (arreglo[i]%numero != 0){
		cout<<"X ";
		}else{
		cout<<arreglo[i]<<" ";	
		}
	}//fin del for
	cout<<endl;
}
