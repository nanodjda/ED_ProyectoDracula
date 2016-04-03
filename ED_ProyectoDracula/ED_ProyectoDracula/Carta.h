#pragma once
ref class Carta
{
public:
	Carta();
};


#include <string>
#include <iostream>

using namespace std;

class Carta {

private:
	string cara; //valor
	string palo; //simbolo

public:
	//constructor
	Carta(string pCara, string pPalo) {
		cara = pCara;
		palo = pPalo;
	}

	Carta() {
	}


	//print
	string print() {
		return (cara + " de " + palo);
	}

};
