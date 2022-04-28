#include <iostream>//Axel Jhuan Solis Zamata
using namespace std;
int main()
{
	int cont=0,i=3;
	bool primo=true;
	cout << "Los primeros 50 numeros primos son 2 ";
	while(cont!=49){
		for(int j=2;j<i;j++){
			if(i%j==0){
				primo = false;
			}
		}if(primo==true){
			cout << i << " ";
			cont++;
		}i++;
		primo=true;
	}
	cout << endl;
	cout << endl << endl;
	system("pause");
}
