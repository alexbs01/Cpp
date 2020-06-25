// Entrada y salida de datos

#include <iostream>
using namespace std;

int main () {
	
	// Declaración de variables
	char nombre[30];  	// Capacidad para 30 carateres, si hay más da error
	int edad;			// Un número entero
	float altura;		// Un número con coma flotante
	
	// Comienzo del programa
	cout<<"Escribe tu nombre: "; cin>>nombre;  	// Salida de datos con "cout" y entrada con "cin"
	cout<<"Escribe tu edad: "; cin>>edad;		// Se puede poner en la misma línea porque el ; indica fin de instrucción
	cout<<"Escribe tu altura en metros: "; cin>>altura;
	
	// Da salida a todos los datos recogidos del usuario
	cout<<"\nHola, te llamas "<<nombre<<", con "<<edad<<" años de edad y una altura de "<<altura<<" metros.";
	// Para hacer un salto de línea se puede hacer "\n" entre las comilla o "<<endl" fuera de las comillas (end line)
	return 0;
}
