#include <iostream>//Axel Jhuan Solis Zamata
using namespace std;
int main()
{
	int est;
	cout << "Ingrese el numero de estudiantes: " << endl;
	cin>>est;
	int cont=0,nota1=0,nota2=0,nota3=0;
	for(int i=0;i<est;i++){
		cont++;
		cout << "Ingrese la primera nota del estudiante " << cont << ": " << endl;
		cin>>nota1;
		cout << "Ingrese la segunda nota del estudiante " << cont << ": " << endl;
		cin>>nota2;
		cout << "Ingrese la tercera nota del estudiante " << cont << ": " << endl;
		cin>>nota3;
		cout<<"El promedio es " << (nota1+nota2+nota3)/3 << endl;
	}
	cout << endl << endl;
	system("pause");
}
