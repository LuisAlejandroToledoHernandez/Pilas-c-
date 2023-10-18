#include<iostream>
#include<vector>
#include<string>
//#include "pilaleneal.h"

using namespace std;

int main() {

	const int capacidad = 10;
	vector<int>elementos(capacidad);
	int cima = -1;
	cout << "Tecla elemento de la pila (termino de pila) :" << "\n";
	int x = 0;
	const int CLAVE = -1;
	while (x != CLAVE)
	{

		string entrada;
		cin >> entrada;

		try {
			x = stoi(entrada);
			if (cima < capacidad - 1) {
				cima++;
				elementos[cima] = x;

			}
			else {
				cout << "Pila Llena\n";
				break;
			}
		}

		catch (const invalid_argument&) {
			cout << "Entrada no valida\n";

		}

	}
	if (cima >= 0)
	{
		//cout<<cima<<" ";
		cout << "Elementos de la pila\n";
		while (cima >= 0) {
			x = elementos[cima];
			cima--;
			cout << x << " ";

		}
	}
	else {
		cout << "Pila vacia\n";
	}

	system("pause");

	return 0;
}