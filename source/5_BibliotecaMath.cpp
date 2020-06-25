#include<iostream>
#include<math.h>  // Biblioteca para operaciones matemáticas como raíces, potencias...
using namespace std;

int main(){
	double a, b, c, x1 = 0, x2 = 0;
	
	cout<<"\nPon el valor de \"a\": "; cin>>a;
	cout<<"Pon el valor de \"b\": "; cin>>b;
	cout<<"Pon el valor de \"c\": "; cin>>c;
	
	x1 = (-(b) + sqrt(pow(b,2) - (4 * a * c) ) )/ (2 * a);  // sqrt(x) == raíz de x 
	x2 = (-(b) - sqrt(pow(b,2) - (4 * a * c) ) )/ (2 * a);  // pow(x,n) == x elevado a n
	
	cout<<"\nPara la función ("<<a<<")*x²+("<<b<<")*x+("<<c<<")=0, x puede tomar los valores de: "<<x1<<" y "<<x2;
	return 0;
}
