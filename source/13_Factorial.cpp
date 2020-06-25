#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	long double num, factorial = 1;	// "factorial" es la variable que almacena el resultado
	
	cout<<"Pon un valor para calcular el factorial de ese numero: ";  cin>>num;
	
	for(long double i = 1; i <= num; i++) {
		factorial *= i;	// El maximo numero del que es capaz de calcular el factorial el 1754
	}
	
	cout.precision(num * 1000);
	cout<<"El factorial de "<<num<<" es: "<<factorial;
	
	system("pause > null");
	return 0;
}
