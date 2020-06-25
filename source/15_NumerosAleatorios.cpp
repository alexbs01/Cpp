#include <iostream>
#include <stdlib.h> // Contiene una funcion para numeros aleatorios
#include <time.h>   // Contiene la funcion que cambia la seed de los numeros aleatorios
#include <string.h> // Contiene funciones relacionadas con los string

using namespace std;

int main() {
	int min = 0, max = 0, random = 0, yourAnswer = 0, attempts = 0;
	char player[4] = ""; 
	
	cout<<"Quien quieres que adivine [tu/yo]: "; cin>>player;
	
	// En el caso de querer acertar el numero que genera la maquina	
	if(strcmp(player, "yo") == 0) { // strcmp, compara "player" con la cadena de texto, y si es verdadero es identico a 0
		cout<<"\nQue valor minimo quieres: "; cin>>min; // Establece un rango minimo
		cout<<"Y el maximo: "; cin>>max; // Establece un rango maximo
		
		srand(time(NULL)); // Inicia los la semila de los numeros aleatorios en funcion del reloj del ordenador
		random = min + rand() % (max + 1 - min); // Obtiene un numero aleatorio en el intervalo [min, max]
		
		do {
			cout<<"\n***************"<<endl;
			cout<<"*Pon un numero*"<<endl;
			cout<<"***************"<<endl;
			
			cout<<"\n\t\t\t******"<<endl;
			cout<<"\t\t\t*El "; cin>>yourAnswer;
			cout<<"\t\t\t******"<<endl;
			
			if(yourAnswer < random) {
				cout<<"\n******************************"<<endl;
				cout<<"*El numero aleatorio es MAYOR*"<<endl;
				cout<<"******************************";
			} else if(yourAnswer > random) {
				cout<<"\n******************************"<<endl;
				cout<<"*El numero aleatorio es MENOR*"<<endl;
				cout<<"******************************";
			}
			attempts++;
		} while(yourAnswer != random);
		
		cout<<"ENHORABUENA, hacertaste el numero en "<<attempts<<" intentos!!!"<<endl;
		
	// En caso de querer que la maquina acierte tu numero
	} else if(strcmp(player, "tu") == 0) {
		cout<<"Piensa en un numero"<<endl;
		
		cout<<"\nQue valor minimo es: "; cin>>min;
		cout<<"Y el maximo: "; cin>>max;
		cout<<"Muy bien, pues comencemos"<<endl;
		
		do {
			attempts++;
			srand(time(NULL)); // Genera otro numero aleatorio de la misma forma que arriba
			random = min + rand() % (max + 1 - min);
			
			cout<<"\n*******"<<endl;
			cout<<"*El "<<random<<"*"<<endl;
			cout<<"*******"<<endl;
			
			cout<<"\n\t\t***********************"<<endl;
			cout<<"\t\t*1. Mi numero es mayor*\n\t\t*2. Mi numero es menor*\n\t\t*3. Es ese numero     *"<<endl; 
			cout<<"\t\t***********************"<<endl;
			cin>>yourAnswer;
			
			switch(yourAnswer) {
				case 1:
					cout<<"\t\t*******************************"<<endl; //El \t crea una tabulacion en la salida de datos
					cout<<"\t\t*El numero que pienso es MAYOR*"<<endl;
					cout<<"\t\t*******************************"<<endl;
					min = random + 1; // Mueve el minimo una unidad hacia delante para evitar que se pueda repetir el extremo inferior del rango de numeros
					break;
					
				case 2:
					cout<<"\t\t*******************************"<<endl;
					cout<<"\t\t*El numero que pienso es MENOR*"<<endl;
					cout<<"\t\t*******************************"<<endl;
					max = random - 1; // Mueve el maximo una unidad hacia atras para evitar que se pueda repetir el extremo superior del rango de numeros
					break;
					
				case 3:
					cout<<"********************************************"<<endl;
					cout<<"*Bieeen, acerte el numero en "<<attempts<<" intentos!!!*"<<endl;
					cout<<"********************************************"<<endl;
					break;
			}
		} while(yourAnswer != 3);
	}
	
	system("pause > null");
	return 0;
}
