#include <iostream>
#include <stdlib.h> // Libreria con la funcion system()
using namespace std;

int main() {
	int quantity, space = 0, i = 0, j = 0, stone = 0;
	char pattern[2] = "*";
	
	cout<<"Insterta un valor para crear el patron de piramide: "; cin>>quantity;
	space = quantity;	// La cantidad de niveles es igual al numero de espacios que habra que dar
	
	do {
		cout<<" ";	// Imprime espacios hasta que "i" sea igual a "space"
		i++;
		
		if(i==space) {
			stone = 2*(quantity - i);	// Calcula el numero de veces que habra que imprimir el patron, el numero de piedras por piso de la piramide
			
			do {
				cout<<pattern;	// Imprime el patron
				
				j++;
			} while(j<=stone);
			
			cout<<"\n";	// Da el salto de linea
			
			j = 0;		// Resetea los valores de las conta
			i = 0;		
			stone = 0;	
			space--;	// Cuando el programa llega hasta aqui reduce en uno el numero de espacios para crear la escalera de la piramide
		}				// Al reducir "space", tambien reduce en 1 el contador "i" que se utiliza para calcular el numero de veces que hay que imprimir el patron
	} while(i<=space);
	
	system("pause > null");	// La funcion system ejecuta el comando que pongamos en su interior como si lo estuvieramos poniendo en el CMD
	return 0;
}

/*
Explicacion de la variable "stone": quantity = 5, i = 0 && aumenta de uno en uno hasta que "space" se reduce e "i" se reinicia
La "i" por cada iteracion se reduce en uno porque el valor de "space" disminuye
stone = 2 * (quantity - i);

1- stone = 2 * (5 - 5); -> 0 -> Como es un bucle do-while imprime uno antes de comprobar la cantidad
2- stone = 2 * (5 - 4); -> 2
3- stone = 2 * (5 - 3); -> 4
4- stone = 2 * (5 - 2); -> 6
5- stone = 2 * (5 - 1); -> 8 -> Como es un bucle do-while siempre se imprime uno antes de comprobar cuantos hay que imprimir, 
							    el numero resultante es siempre impar, ya que una multiplicacion por 2 da como resultado un
							    numero par y el que se imprime por defecto lo vuelve impar.
*/

