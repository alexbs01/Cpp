#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main() {
	char text[1000] = "", invertedText[1000] = "";
	int code = 29, invertPosition = 0;

	
	cout<<"\nPon un texto para cifrar: \n"; 
	cin.getline(text,1000,'\n');  // Guarda una cadena de texto aunque tenga espacios, (<variable, <longitud>, <ultimo caracter que guarda>)
	
	invertPosition = strlen(text) - 1;  // Se le resta uno para despues operar mejor con el array, ya que estos comienzan en el 0
	
	cout<<"\nEl texto cifrado es:"<<endl;
	
	// Cifra el mensaje cambiando los caracteres sumando el valor de "code"
	for(int i = 0; i <= strlen(text) - 1; i++) {
		text[i] += code;
	}
	
	// Invierte la cadena de texto para que sea mas dificil de descifrar
	for(int i = 0; i <= strlen(text) - 1; i++) {
		invertedText[i] = text[invertPosition];
		invertPosition--;
	}
	cout<<invertedText<<endl;
	
	cout<<"\nComprobacion del cifrado: \n";  // Hace las mismas operaciones a la inversa para comprobar que se cifro correctamente
	for(int i = 0; i <= strlen(text) - 1; i++) {
		invertedText[i] = text[invertPosition];
		invertPosition--;
	}
	
	for(int i = 0; i <= strlen(text) - 1; i++) {
		text[i] -= code;
	}
	
	cout<<text<<endl;
	
	system("pause > null");
	return 0;
}
