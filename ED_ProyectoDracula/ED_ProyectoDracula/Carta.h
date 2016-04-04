#pragma once

using namespace System;

ref class Carta
{

private:
	String^ cara;
	String^ palo;
	String^ direccion;

public:
	Carta();
	Carta(String^ pCara, String^ pPalo) {
		cara = pCara;
		palo = pPalo;
		direccion = pCara + pPalo;
	}

	String^ print() {
		return (cara + " de " + palo);
	}

	String^ getDireccion() {
		return direccion;
	}
};