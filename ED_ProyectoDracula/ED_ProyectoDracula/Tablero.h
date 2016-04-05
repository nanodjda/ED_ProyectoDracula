#pragma once
#include "Carta.h"

ref class Tablero
{
private:

	int JActual = 1;
	array< Carta^ >^ player1 = gcnew array< Carta^ >(4);
	int pdir1 = 0;
	array< Carta^ >^ player2 = gcnew array< Carta^ >(4);
	int pdir2 = 0;
	static Tablero^ m_instance = gcnew Tablero();

public:
	Tablero() {
	}

	void setpDir1(int pP) {
		pdir1 = pP;
	}

	void setpDir2(int pP) {
		pdir2 = pP;
	}

	int getpDir1() {
		return pdir1;
	}

	int getpDir2() {
		return pdir2;
	}

	void setJActual(int pJugador) {
		JActual = pJugador;
	}

	int getJActual() {
		return JActual;
	}

	static property Tablero^ Instance { Tablero^ get() { return m_instance; } }
};

