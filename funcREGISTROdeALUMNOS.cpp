


void notas();


void notas(){
	int contrasena;
	
	cout<<"pon tu codigo de profesor: "<<endl;
	cin>>contrasena;
	
	//VALIDAMOS SI EL DATO COINSIDE CON ESTA CONTRASEÑA
	if(contrase != 3312){
		color(12);
		cout<<"contraseña incorrecta, cosnulte con el admin"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		system("pause");
	}else{
		//RELLENAMOS NOTAS
		cout<<"======= CALIFICACIONES ========"<<endl;
		cout<<"nota 1 :"; cin>>alumno1.prom.calificacion1;
		cout<<"nota 2 :"; cin>>alumno1.prom.calificacion2;
		cout<<"nota 3 :"; cin>>alumno1.prom.calificacion3;
		cout<<"nota 4 :"; cin>>alumno1.prom.calificacion4;
		cout<<"nota 5 :"; cin>>alumno1.prom.calificacion5;
		
	}//fin del if validacion de contraseña
}



