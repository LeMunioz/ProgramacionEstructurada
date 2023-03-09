
void ver();
void sum();
void rest();
void mul();
void div();

void ver()
{
	srand((unsigned)time(NULL));
	//HACER MATRIZ*
	cout<<"Matriz 1"<<endl;
	for(c=0;c<tamano;++c)
	{
		for(f=0;f<tamano;++f)
		{
			a[f][c] = -200 + rand() % 601;
            printf("[%d]\t",a[f][c]);	
		}
		printf("\n");
	}//fin de for para matriz 1

	c =0;
	f =0;
	cout<<"Matriz 2"<<endl;
		for(c=0;c<tamano;c++)
	{
		for(f=0;f<tamano;f++)
		{
			b[f][c] = -200 + rand() % 601;
            printf("[%d]\t",b[f][c]);	
		}
		printf("\n");
	}//fin de for para matriz 2

}//FIN DE UNCION MATRIZ

void sum()
{
	//hacer suma
	for (int c=0; c <tamano; c++){
		for (int f=0; f <tamano; f++){
			res[f][c]=a[f][c]+b[f][c];
		}//fin del segundo for
	}//fin del primer for
}//FIN DE FUNCION SUMA

void rest()
{
	//hacer resta
	for (int c=0; c <tamano; c++){
		for (int f=0; f <tamano; f++){
			res[f][c]=a[f][c]-b[f][c];
		}//fin del segundo for
	}//fin del primer for
}//FIN DE FUNCION RESTA

void mul()
{
	//hacer multiplicacion
	for (f=0;f<tamano;f++){
	for (c=0;c<tamano;c++){
	res[f][c]=0;
         for (int k=0;k<tamano;k++){
		 res[f][c]=res[f][c]+a[f][k]*b[k][c];
        	}//fin del tercer for
        }//fin del segundo for
    }//fin del primer for
}//FIN DE FUNCION MULTIPLICACION

void div()
{
	//hacer division
	for (f=0;f<tamano;f++){
	for (c=0;c<tamano;c++){
	res[f][c]=0;
         for (int k=0;k<tamano;k++){
		 aux[f][c]=aux[f][c]+a[f][k]*b[k][c];
		 res[c][f]=aux[f][c];
        	}//fin del tercer for
        }//fin del segundo for
    }//fin del primer for
}//FIN DE FUNCION DIVISION


