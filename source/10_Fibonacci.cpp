#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	long double quantity = 0, a = 0, b = 1, sum = 0;	// long double es el tipo de dato que acepta el mayor rango de números
	int i = 0;
	
	cout<<"\nCuantos números de la sucesión de Fibonacci quieres?: "; cin>>quantity;
	quantity--;	// Resta uno al nÃºmero de nÃºmeros de la secuencia para que realmente sea la cantidad que ponemos
	
	while(i < quantity) { 	// Bucle while: Estructura repetitiva 
		cout.precision(5000);	// Al ser long double en un momento lo pone con notación científica, esto lo aproxima hasta las primeras 5000 cifras, suficiente para calcular los primero 23000 números
		cout<<a<<", ";		// Imprime "a", en la siguientes vueltas el resultado de "a + b"
		
		sum = a + b;	
		a = b;
		b = sum;
		
		i++;	// Suma uno a la variable "i"
		
		if(i == quantity) {		// Para imprimir el último número sin coma después de el
			cout<<a;
		}
	}
	getch();
	return 0;	// El mayor número que calcula está entre la posición 23000 y 24000		
}
