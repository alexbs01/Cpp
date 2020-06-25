#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int quantity, i = 0, enter = 0;
	char pattern[2] = "*";
	cout<<"\nInserta una cantidad para crear el patron: "; cin>>quantity;
	
	do {
		cout<<pattern;	// Imprime el patron
		
		i++;			// Suma uno al contador
		
		if(i > enter){	// Cuando el contador "i" supera a "enter" da un salto de linea y suma 1 a "enter"
			cout<<"\n";
			enter++;
			
			if (i < quantity) { // Si "i" sigue siendo menor al numero maximo restablece el valor de "i" a 0
				i = 0;			// Si es identico o superior se temina el ciclo
			}
			
		}
		
	}
	while(i<quantity);
	
	getch();
	return 0;
}
