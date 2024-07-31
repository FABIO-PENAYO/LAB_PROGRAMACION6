#include <iostream>
#include <stdlib.h>
#include <conio>
#include <time.h>
using namespace std;
/*1. Escribir una funci�n que retorne el resultado de 
elevar un n�mero entero a cualquier potencia entera. El resultado }
devuelto debe ser del tipo long.
*/
//prototipo
int potencia(int, int);

int main(){
	int base,exponente;
	cout << "ingrese numero base" << endl;
	cin >> base;
	cout << "ingrese el exponente" << endl;
	cin >> exponente;
	cout << potencia(base, exponente);
	
	system("pause");
	getch();
	return 0;

}
//definicion
int potencia(int base, int p){
	int pot=1;
						
	for(int c =1; c <=p ;c++){
		pot= pot*base;
	}

	return pot;
}


