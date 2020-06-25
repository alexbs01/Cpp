#include <iostream>
using namespace std;

int main() {
	int number, result = 0;
	
	cout<<"\nPon un número: "; cin>>number;
	
	result = number % 2;
	
	switch(result) {  // Según el parámetro ejecuta un caso u otro
		case 0: cout<<"El número "<< number <<" es par";
			break;  // Interrumpe el caso
			
		case 1: cout<<"El número "<< number <<" es impar";
			break;
			
		default: cout<<"El número "<< number <<" es impar";  // Porque con los números negativos impares no aparece ningún mensaje
			break;
	}
	
	return 0;
}
