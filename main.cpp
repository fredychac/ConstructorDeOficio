/**********************************************************************************************************************
 // FileName:        main.c
 // Program version: Dev-C++ 5.11
 // Company:         TECNM - ITCH
 // Description:     CONSTRUCTORES DE OFICIO EN C++  -1.0-
 // Authors:         ALFREDO CHACON
 // Updated:         04/2021
 //Nota:  				EL SIGUIENTE CODIGO MUESTRA EL USO DE CONSTRUCTORES POR OFICIO O DEFAULT  O DEFECTO
************************************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;

class Mascota{
	private:						//Encapsulamiento (como caja negra)
		string _name;				//DAtos o caracteristicas Abstraidas
		string _especie ;
		string _sexo ;
		int _edad ;
	public:
		Mascota(){		//Constructor de oficio o por default (si no se declara un constructor de forma explicita, el Compilador asigna un constructor por defecto igual a este)											
			_name = "";
			_especie = "";
			_sexo = "";
			_edad = 0;
		}
		void muestraDatos();
};
		
/************************************************
*    METODOS
************************************************/

void Mascota::muestraDatos(){
	cout<<"Nombre: "<<_name<<endl;
	cout<<"Especie: "<<_especie<<endl;
	cout<<"Sexo: "<<_sexo<<endl;
	cout<<"Edad: "<<_edad<<endl;
}


/************************************************
*   MAIN
************************************************/
int main(int argc, char** argv) {
	
	Mascota m1;
	m1.muestraDatos();

	system("pause");
	return 0;
}