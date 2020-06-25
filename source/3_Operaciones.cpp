#include <iostream>
using namespace std;

int main() {
	char name[30]="";  // Almacena el nombre
	double num1, num2; // Almacena los valores de entrada
	double suma = 0, resta = 0, multiplicacion = 0, division = 0;  
	/* Son las variables que posteriormente almacenarán un valor
	 * relacionado con la variables num1 y num2 */
	
	cout<<"Como te llamas: "; cin>>name;

	cout<<"Hola "<<name<<", espero que te encuentres bien.\n";
	
	// Entrada de datos
	cout<<"Pon el primer número de la operación: "; cin>>num1;
	cout<<"Pon el segundo número de la operación: "; cin>>num2;
	
	// Redondea el tercer decimal
	cout.precision(3);
	
	// Operaciones
	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;
	
	// Salida de datos
	cout<<"El resultado de tu suma es: "<<suma<<endl;
	cout<<"El resultado de tu resta es: "<<resta<<endl;
	cout<<"El resultado de tu multiplicacion es: "<<multiplicacion<<endl;
	cout<<"El resultado de tu division es: "<<division;
	return 0;
}
