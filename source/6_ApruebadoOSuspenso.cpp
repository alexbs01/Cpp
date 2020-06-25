#include <iostream>
using namespace std;

int main() {
	char name[30];  // Almacena el nombre
	double firstExam = 30, secondExam = 70;  // Porcentajes examenes
	double firstNote, secondNote, finalNote = 0;  // Almacena las notas
	
	cout<<"El primer examen vale un "<<firstExam<<"% y el segundo un "<<secondExam<<"%."<<endl;
	
	cout<<"\nNombre del alumno: "; cin>>name;  // Pregunta el nombre
	cout<<"En el primer examen sacó un: "; cin>>firstNote;  // Pregunta la primera nota
	cout<<"En el segundo examen sacó un: "; cin>>secondNote;  // Pregunta la segunda nota
	
	if((firstNote <= 10 && secondNote <= 10) && (firstNote >= 0 && secondNote >= 0)){  // Filtra si alguna nota está mal puesta
		firstExam *= 0.01;  // Trasnfora los porcentajes en forma decimal
		secondExam *= 0.01;
		
		finalNote = firstNote * firstExam + secondNote * secondExam;  // Calcula la nota final
		cout.precision(2);  // Aproxima el segundo decimal
		
		if (finalNote < 5) {  // Según la nota final dice si aprobaste o suspendiste
			cout<<"\n"<< name <<" suspendió con un "<<finalNote;
			
		} else {
			cout<<"\n"<< name <<"aprobó con un "<<finalNote;
		}
		
	} else {
		cout<<"\n"<<"Una o dos notas fueron mal escritas";  // Si las notas están mal te advierte
	}
	return 0;
}
