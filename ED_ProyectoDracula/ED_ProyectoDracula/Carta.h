#pragma once

using namespace System;

ref class Carta
{

private:
	String^ cara;
	String^ palo;
	String^ color;
	String^ direccion;

public:
	Carta(String^ pCara, String^ pPalo) {
		cara = pCara;
		palo = pPalo;
		direccion = pCara + pPalo;
	}

	String^ print() {
		return (cara + " de " + palo);
	}

	String^ getColor() {
		return color;
	}

	void setColor(String^ pColor) {
		color = pColor;
	}

	String^ getPalo() {
		return palo;
	}

	String^ getDireccion() {
		return direccion;
	}

	int getValor() {
		if (cara == "Jack" || cara == "") {
			return 0;
		}
		else if (cara == "As") {
			return 1;
		}
		else if (cara == "Dos") {
			return 2;
		}
		else if (cara == "Tres") {
			return 3;
		}
		else if (cara == "Cuatro") {
			return 4;
		}
		else if (cara == "Cinco") {
			return 5;
		}
		else if (cara == "Seis") {
			return 6;
		}
		else if (cara == "Siete") {
			return 7;
		}
		else if (cara == "Ocho") {
			return 8;
		}
		else if (cara == "Nueve") {
			return 9;
		}
		else if (cara == "Dama" || cara == "Rey") {
			return 10;
		}
		else {
			return -1;
		}
	}
};