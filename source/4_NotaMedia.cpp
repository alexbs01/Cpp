#include <iostream>
using namespace std;

int main() {
	char name1[30], name2[30], name3[30], name4[30];  // Notas alumnos 1, 2, 3 y 4
	double firstExam = 30, secondExam = 70;  // Porcentaje de los examenes
	double firstNote1, secondNote1, finalNote1, firstNote2, secondNote2, finalNote2;  // Notas alumnos 1 y 2
	double firstNote3, secondNote3, finalNote3, firstNote4, secondNote4, finalNote4;  // Notas alumnos 3 y 4
	
	
	// Recogida de datos
	cout<<"El primer examen vale un "<<firstExam<<"% y el segundo un "<<secondExam<<"%."<<endl;
	
	cout<<"\nNombre del primer alumno: "; cin>>name1;
	cout<<"Nota del primer examen de "<<name1<<": "; cin>>firstNote1;
	cout<<"Nota del segundo examen de "<<name1<<": "; cin>>secondNote1;
	
	cout<<"\nNombre del segundo alumno: "; cin>>name2;
	cout<<"Nota del primer examen de "<<name2<<": "; cin>>firstNote2;
	cout<<"Nota del segundo examen de "<<name2<<": "; cin>>secondNote2;
	
	cout<<"\nNombre del tercer alumno: "; cin>>name3;
	cout<<"Nota del primer examen de "<<name3<<": "; cin>>firstNote3;
	cout<<"Nota del segundo examen de "<<name3<<": "; cin>>secondNote3;
	
	cout<<"\nNombre del cuarto alumno: "; cin>>name4;
	cout<<"Nota del primer examen de "<<name4<<": "; cin>>firstNote4;
	cout<<"Nota del segundo examen de "<<name4<<": "; cin>>secondNote4;
	
	
	firstExam *= 0.01;	// (a *= 3) == (a = a * 3), puede ser cualquier operador
	secondExam *= 0.01; // Pone los porcentajes en forma decimal para las operaciones de las notas
	
	// Cálculo de las notas finales
	finalNote1 = firstNote1 * firstExam + secondNote1 * secondExam;
	finalNote2 = firstNote2 * firstExam + secondNote2 * secondExam;
	finalNote3 = firstNote3 * firstExam + secondNote3 * secondExam;
	finalNote4 = firstNote4 * firstExam + secondNote4 * secondExam;
	
	// Redondeo de las notas a un decimal
	cout.precision(2);
	
	// Salida de datos
	cout<<"\nLa nota final de "<<name1<<" es un: "<<finalNote1<<endl;
	cout<<"La nota final de "<<name2<<" es un: "<<finalNote2<<endl;
	cout<<"La nota final de "<<name3<<" es un: "<<finalNote3<<endl;
	cout<<"La nota final de "<<name4<<" es un: "<<finalNote4<<endl;

	return 0;
} 
