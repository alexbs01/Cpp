#include <iostream>
using namespace std;

int main() {
	double num1, num2, num3;
	
	cout<<"Pon el primer número: "; cin>>num1;
	cout<<"Pon el segundo número: "; cin>>num2;
	cout<<"Pon el tercer número: "; cin>>num3;
	
	if (num1 == num2 && num1 == num3) {
		cout<<"Los tres números son iguales";
	} else if (num1 > num2 && num1 > num3) {
		cout<<"El número "<< num1 << " es el mayor";
	} else if (num2 > num1 && num2 > num3) {
		cout<<"El número "<< num2 << " es el mayor";
	} else if (num3 > num1 && num3 < num2) {
		cout<<"El número "<< num3 << " es el mayor";
	} else {
		cout<<"Hay dos números iguales"<<endl;
	}
	
	if (num1 == num2 && num1 != num3) {
		cout<<"Lo son el primero y el segundo, ese número es "<< num1;
	} else if (num2 == num3 && num2 != num1) {
		cout<<"Lo son el segundo y el tercero, ese número es "<< num2;
	} else if (num1 == num3 && num1 != num2) {
		cout<<"Lo son el primero y el tercer, ese número es "<< num1;
	}
	
	return 0;
}
