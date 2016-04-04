#pragma once

using namespace System;

ref class Carta
{

private:
	String^ cara;
	String^ palo;

public:
	Carta();
	Carta(String^ pCara, String^ pPalo) {
		cara = pCara;
		palo = pPalo;
	}

	String^ print() {
		return (cara + " de " + palo);
	}
};