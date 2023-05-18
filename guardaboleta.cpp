#include <fstream>
using namespace std;

void guardar(struct <promedio>, struct <alumno>);

void guardar(struct <promedio>, struct <alumno>){
	//crea el archivo
	ofstream archivo("Boleta.txt");
	
	if (archivo.is_open()){
		
	}else{
		color(12);
		cout<<"UPS! hubo un porblemita con suu archivo :C"<<endl;
	}	
	
	//metemos la imformacion
	archivo <<alumno1.nombre<<", "<<alumno1.apellido<<", "<<alumno1.carrera<<". "<<alumno1.edad<<", NOTAS: "<<promedio.calificacion1<<", "<<promedio.calificacion2<<", "<<promedio.calificacion3<<", "promedio.calificacion4<<", "promedio.calificacion5;
}
