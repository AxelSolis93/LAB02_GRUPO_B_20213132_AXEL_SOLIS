#include <iostream>
using namespace std;
int main()
{
	int x=0,y=0,cont=0,tempx=0,tempy=0;//contador de cuantos primos hay
	cout << "ingrese un numero: " << endl;
	cin>>x;
	cout << "Ingrese un numero mayor al anterior: " << endl;
	cin>>y;
	bool primo=true;
	tempx=x+1;
	while(tempx!=y){
		for(int j=2;j<tempx;j++){
			if(tempx%j==0){
				primo = false;
			}	
		}if(primo==true){
			cont++;
			if(cont==1){
				cout << "Los numeros primos entre "<<x << " y " << y << " son ";
			}
			cout << tempx << " ";
			
		}tempx++;
		primo=true;	
	}
	cout << endl;
	cout << endl << endl;
	system("pause");
}//Axel Jhuan Solis Zamata
