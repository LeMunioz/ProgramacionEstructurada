#include <iostream>
using namespace std;


main ()
{
	bool ciclo = true;
	int option;
	char pre;
	
	while (ciclo) //while (ciclo == true) 
	{//otra forma de iniciar el ciclo
		cout <<"|---------------|"<<endl;
		cout <<"|   MENU        |"<<endl;
		cout <<"| [1]  [2]  [3] |"<<endl;
		cout <<"|_______________|"<<endl;
		cin >>option;
	switch (option)
	{
		case 1:
			cout <<"Chimichangas"<<endl;
			break;
		case 2:
			cout <<"Enchiladas"<<endl;
			break;
		case 3:
			cout <<"Molletes"<<endl;
			break;
			default:
			cout <<"esa no es una opcion joven"<<endl;
				break;
	}		//fin del switch
	cout <<"COntinuamos? [S][N]]"<<endl;
	cin >>pre;
	
	if (pre == 'n' or 'N')
		{
			ciclo = false;
		}	
	if (pre == 'y' or 'Y')
		{
			ciclo = true;	
		}		
	}//fin del ciclo
	
}
