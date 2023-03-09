#include <iostream>

using namespace std;

double potenciador(int x, int y);

int main(){
int o;
int resultado;
cout<<"con cual?";
cin>>o;
switch(o){
case 1:
	int fact=1;
	int n;
	cout<<"DE QUE?";
	cin>>n;

	for (int i=1; i<=n; i++)
		fact =i*fact;
		
	cout <<fact<<endl;	
	break;
case 2:
	cout<<potenciador(2,2);
	break;
	default:
		cout<<"p"<<endl;
		break;
}//fin de swicht
}//fin de MAIN

double potenciador(int x,int y)
{
	if(y==0){
		return 1;
	}else{
		return x*(potenciador(x,y-1));
	}
	main();
}





int numero;
cin>>numero;

cout<<numero<<" por "<<numero-1<<"!"<<end;
