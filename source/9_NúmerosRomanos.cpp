#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int num, numDec = 0, millares = 0, centenas = 0, decenas = 0, unidades = 0;
	
	cout<<"Escribe un numero entre [1,3999] para pasarlo a numeros romanos: "; cin>>num;
	numDec = num;
	
	unidades = num % 10;  num /= 10;	// 9 = 1689 % 10; 1689 /= 10; => num = 168
	decenas = num % 10;  num /= 10;		// 8 = 168 % 10; 168 /= 10; => num = 16
	centenas = num % 10;  num /= 10;	// 6 = 16 % 10; 16 /= 10; => num = 1
	millares = num % 10;				// 1 = 1 % 10	
										// El resultado de los modulos se pasa por los switch para sacar el numero romano
										
	cout<<"El numero "<<numDec<<" en numeros romanos es: ";
									
	switch(millares) {
		case 1: cout<<"M";  break;
			
		case 2: cout<<"MM";  break;
		
		case 3: cout<<"MMM";  break;
	}
	
	switch(centenas) {
		case 1: cout<<"C";  break;
			
		case 2: cout<<"CC";  break;
			
		case 3: cout<<"CCC";  break;
			
		case 4: cout<<"CD";  break;
			
		case 5: cout<<"D";  break;
			
		case 6: cout<<"DC";  break;
			
		case 7: cout<<"DCC";  break; 
			
		case 8: cout<<"DCCC";  break;
			
		case 9: cout<<"CM";  break;
	}
	
	switch(decenas) {
		case 1: cout<<"X";  break;
		
		case 2: cout<<"XX";  break;
		
		case 3: cout<<"XXX";  break;
		
		case 4: cout<<"XL";  break;
		
		case 5: cout<<"L";  break;
		
		case 6: cout<<"LX";  break;
		
		case 7: cout<<"LXX";  break;
		
		case 8: cout<<"LXXX";  break;
		
		case 9: cout<<"XC";  break;
	}
	
	switch(unidades) {
		case 1: cout<<"I"; break;
		
		case 2: cout<<"II"; break;
		
		case 3: cout<<"III"; break;
		
		case 4: cout<<"IV"; break;
		
		case 5: cout<<"V"; break;
		
		case 6: cout<<"VI"; break;
		
		case 7: cout<<"VII"; break;
		
		case 8: cout<<"VIII"; break;
		
		case 9: cout<<"IX"; break;
	}
	getch();
	return 0;
}
