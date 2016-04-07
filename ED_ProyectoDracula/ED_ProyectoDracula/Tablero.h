#pragma once
#include "Carta.h"
#include "Deck.h"

ref class Tablero
{
private:

	//Manejo de jugadores
	int JActual = 1;
	array< Carta^ >^ player1 = gcnew array< Carta^ >(4);
	array< Carta^ >^ player2 = gcnew array< Carta^ >(4);
	static Tablero^ m_instance = gcnew Tablero();
	int pdir1 = 0;
	int pdir2 = 0;

	//Manejo de board de cartas
	array< array< Carta^ >^ >^ board = gcnew array< array< Carta^ >^ >(3);
	Carta^ cartaSeleccionada = gcnew Carta();

public:
	Tablero() {
		for (int j = 0; j < 3; j++) {
			board[j] = gcnew array<Carta^>(3);
		}
	}

	void reset() {
		for (int fila = 0; fila < 3; fila++) {
			for (int columna = 0; columna < 3; columna++) {
				board[fila][columna] = gcnew Carta();
			}
		}
	}

	bool isFull() {
		bool lleno = true;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (board[i][j]->getCara() == "") {
					lleno = false;
				}
			}
		}
		return lleno;
	}

	bool validar(int fila, int columna) {
		switch (fila)
		{
		case 0:
			if (columna == 0) {
				return ((board[0][0]->getCara() == "") && (board[0][1]->getCara() != "" || board[1][0]->getCara() != ""));
				break;

			}
			else if (columna == 1) {
				return (board[0][1]->getCara() == "");
				break;

			}
			else if (columna == 2) {
				return ((board[0][2]->getCara() == "") && (board[0][1]->getCara() != "" || board[1][2]->getCara() != ""));
			}

		case 1:
			if (columna == 0) {
				return (board[1][0]->getCara() == "");

			}
			else if (columna == 2) {
				return (board[1][2]->getCara() == "");
			}

		case 2:
			if (columna == 0) {
				return ((board[2][0]->getCara() == "") && (board[1][0]->getCara() != "" || board[2][1]->getCara() != ""));

			}
			else if (columna == 1) {
				return (board[2][1]->getCara() == "");

			}
			else if (columna == 2) {
				return ((board[2][2]->getCara() == "") && (board[1][2]->getCara() != "" || board[2][1]->getCara() != ""));
			}
		default:
			return false;
		}
		return false;
	}

	void setJugada(Carta^ carta, int numcasilla) {
		bool  valido = false;
		switch (numcasilla)
		{
		case 1:
			valido = validar(0, 0);
			if (valido == true) {
				board[0][0] = carta;
				//Undo.push(carta);
				//undoPosiciones.push(0);//fila
				//undoPosiciones.push(0);//columna
				break;
			}

		case 2:
			valido = validar(0, 1);
			if (valido == true) {
				board[0][1] = carta;
				//Undo.push(carta);
				//undoPosiciones.push(0);//fila
				//undoPosiciones.push(1);//columna
				break;
			}

		case 3:
			valido = validar(0, 2);
			if (valido == true) {
				board[0][2] = carta;
				//Undo.push(carta);
				//undoPosiciones.push(0);//fila
				//undoPosiciones.push(2);//columna
				break;
			}

		case 4:
			valido = validar(1, 0);
			if (valido == true) {
				board[1][0] = carta;
				//Undo.push(carta);
				//undoPosiciones.push(1);//fila
				//undoPosiciones.push(0);//columna
				break;
			}

		case 5:
			valido = (board[1][1]->getCara() == "");
			if (valido) {
				board[1][1] = carta;
			}
			break;

		case 6:
			valido = validar(1, 2);
			if (valido == true) {
				board[1][2] = carta;
				//Undo.push(carta);
				//undoPosiciones.push(1);//fila
				//undoPosiciones.push(2);//columna
				break;
			}

		case 7:
			valido = validar(2, 0);
			if (valido == true) {
				board[2][0] = carta;
				//Undo.push(carta);
				//undoPosiciones.push(2);//fila
				//undoPosiciones.push(0);//columna
				break;
			}

		case 8:
			valido = validar(2, 1);
			if (valido == true) {
				board[2][1] = carta;
				//Undo.push(carta);
				//undoPosiciones.push(2);//fila
				//undoPosiciones.push(1);//columna
				break;
			}

		case 9:
			valido = validar(2, 2);
			if (valido == true) {
				board[2][2] = carta;
				//Undo.push(carta);
				//undoPosiciones.push(2);//fila
				//undoPosiciones.push(2);//columna
				break;
			}
		}
	}

	String^ ganador() {
		if (!isFull()) {
			return "Not full";
		}
		else {
			int medioFila = puntajeFila(0);
			int medioColumna = puntajeColumna(0);
			int menorFila = puntajeFila(1);
			int menorColumna = puntajeColumna(1);
			int mayorFila = puntajeFila(2);
			int mayorColumna = puntajeColumna(2);

			int puntajes1[3] = { medioFila,menorFila,mayorFila };
			int puntajes2[3] = { medioColumna,menorColumna,mayorColumna };

			int j, temp;
			for (int i = 0; i < 3; i++) {
				j = i;
				while (j > 0 && puntajes1[j] < puntajes1[j - 1]) {
					temp = puntajes1[j];
					puntajes1[j] = puntajes1[j - 1];
					puntajes1[j - 1] = temp;
					j--;
				}
			}

			for (int i = 0; i < 3; i++) {
				j = i;
				while (j > 0 && puntajes2[j] < puntajes2[j - 1]) {
					temp = puntajes2[j];
					puntajes2[j] = puntajes2[j - 1];
					puntajes2[j - 1] = temp;
					j--;
				}
			}

			if (puntajes1[0] > puntajes2[0]) {
				return "Horizontal";
			}
			else if (puntajes1[0] < puntajes2[0]) {
				return "Vertical";
			}
			else if (puntajes1[1] > puntajes2[1]) {
				return "Horizontal";
			}
			else if (puntajes1[1] < puntajes2[1]) {
				return "Vertical";
			}
			else if (puntajes1[2] > puntajes2[2]) {
				return "Horizontal";
			}
			else if (puntajes1[2] < puntajes2[2]) {
				return "Vertical";
			}
			else {
				return "Empate";
			}
		}
	}

	int puntajeFila(int fila) {
		//veo si alguno de la fila es vampiro
		if ((board[fila][0]->getValor() == -1) || (board[fila][1]->getValor() == -1) || (board[fila][2]->getValor() == -1)) {
			return 0;
		}
		else {
			int suma = 0;
			int multiplicar = 1;


			//agarro las cartas de la fila
			Carta^ c1 = board[fila][0];
			Carta^ c2 = board[fila][1];
			Carta^ c3 = board[fila][2];

			//veo si hay 2 del mismo palo
			if ((c1->getPalo() == c2->getPalo()) || (c2->getPalo() == c3->getPalo()) || (c1->getPalo() == c3->getPalo())) {
				multiplicar = multiplicar * 2;
			}

			//si tiene 3 cartas del mismo color
			if (c1->getColor() == c2->getColor() && c2->getColor() == c3->getColor()) {
				multiplicar = multiplicar * 3;
			}

			//veo si son de mismo palo
			if (c1->getPalo() == c2->getPalo() && c2->getPalo() == c3->getPalo()) {
				multiplicar = multiplicar * 5;
			}

			switch (fila) {
			case 0:
				for (int i = 0; i < 3; i++) {
					if (board[1][i]->getValor() != -1 && board[2][i]->getValor() != -1) {
						if (board[0][i]->getCara() != "Rey") {
							suma = suma + board[0][i]->getValor();
						}
					}
				}
				suma = suma * multiplicar;
				return suma;

			case 1:
				for (int i = 0; i < 3; i++) {
					if (board[0][i]->getValor() != -1 && board[2][1]->getValor() != -1) {
						if (board[1][i]->getCara() != "Rey") {
							suma = suma + board[1][i]->getValor();
						}
					}
				}
				suma = suma * multiplicar;
				return suma;

			case 2:
				for (int i = 0; i < 3; i++) {
					if (board[0][i]->getValor() != -1 && board[1][i]->getValor() != -1) {
						if (board[2][i]->getCara() != "Rey") {
							suma = suma + board[2][i]->getValor();
						}
					}
				}
				suma = suma * multiplicar;
				return suma;

			}
		}
	}


	int puntajeColumna(int columna) {
		if ((board[0][columna]->getValor() == -1) || (board[1][columna]->getValor() == -1) || (board[2][columna]->getValor() == -1)) {
			return 0;
		}
		else {
			int suma = 0;
			int multiplicar = 1;


			//agarro las cartas de la columna
			Carta^ c1 = board[0][columna];
			Carta^ c2 = board[1][columna];
			Carta^ c3 = board[2][columna];

			//veo si hay 2 del mismo palo
			if ((c1->getPalo() == c2->getPalo()) || (c2->getPalo() == c3->getPalo()) || (c1->getPalo() == c3->getPalo())) {
				multiplicar = multiplicar * 2;
			}

			//si tiene 3 cartas del mismo color
			if (c1->getColor() == c2->getColor() && c2->getColor() == c3->getColor()) {
				multiplicar = multiplicar * 3;
			}

			//veo si son de mismo palo
			if (c1->getPalo() == c2->getPalo() && c2->getPalo() == c3->getPalo()) {
				multiplicar = multiplicar * 5;
			}

			switch (columna) {
			case 0:
				for (int i = 0; i < 3; i++) {
					if (board[i][1]->getValor() != -1 && board[i][2]->getValor() != -1) {
						if (board[i][0]->getCara() != "Dama") {
							suma = suma + board[i][0]->getValor();
						}
					}
				}
				suma = suma * multiplicar;
				return suma;

			case 1:
				for (int i = 0; i < 3; i++) {
					if (board[i][0]->getValor() != -1 && board[i][2]->getValor() != -1) {
						if (board[i][1]->getCara() != "Dama") {
							suma = suma + board[i][1]->getValor();
						}
					}
				}
				suma = suma * multiplicar;
				return suma;

			case 2:
				for (int i = 0; i < 3; i++) {
					if (board[i][0]->getValor() != -1 && board[i][1]->getValor() != -1) {
						if (board[i][2]->getCara() != "Dama") {
							suma = suma + board[i][2]->getValor();
						}
					}
				}
				suma = suma * multiplicar;
				return suma;

			}
		}
	}

	void repartir() {
		Deck^ mazo = Deck::Instance;
		for (int i = 0; i < 4; i++) {
			player1[i] = mazo->topCarta();
		}
		for (int i = 0; i < 4; i++) {
			player2[i] = mazo->topCarta();
		}
	}

	array< Carta^ >^ getCartasJ1() {
		return player1;
	}

	array< Carta^ >^ getCartasJ2() {
		return player2;
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

	void setCartaSeleccionada(Carta^ pCarta) {
		cartaSeleccionada = pCarta;
	}

	Carta^ getCartaSeleccionada() {
		return cartaSeleccionada;
	}

	static property Tablero^ Instance { Tablero^ get() { return m_instance; } }
};

