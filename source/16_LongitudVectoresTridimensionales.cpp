#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
	double p0[2], pF[2], v[2], squareLength = 0, realLength = 0;
	
	// Las coordenadas de los puntos se almacenan en arrays con tres espacios de almacenamiento cada uno
	cout<<"Pon el valor de la coordenada x del origen vector: "; cin>>p0[0];
	cout<<"Pon el valor de la coordenada y del origen vector: "; cin>>p0[1];
	cout<<"Pon el valor de la coordenada z del origen vector: "; cin>>p0[2];
	
	cout<<"\nPon el valor de la coordenada x del destino vector: "; cin>>pF[0];
	cout<<"Pon el valor de la coordenada y del destino vector: "; cin>>pF[1];
	cout<<"Pon el valor de la coordenada z del destino vector: "; cin>>pF[2];
	
	for(int i = 0; i <= 2; i++) {
		v[i] = pF[i] - p0[i]; // Calcula el vector director restando el puntoFinal - puntoInicial
		squareLength += pow(v[i], 2); // Calcula la suma de los cuadrados de los tres ejes de coordenadas
		
	}
	
	realLength = sqrt(squareLength);  // Hace la raiz cuadrada y muestra el resltado
	cout<<"El largo del vector es: "<<realLength;
	
	system("pause > null");
	return 0;
}
