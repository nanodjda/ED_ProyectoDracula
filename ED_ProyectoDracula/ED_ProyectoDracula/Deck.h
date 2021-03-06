#ifndef DECK_H
#define DECK_H

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "Carta.h"
#include "AStack.h"

#define ARRAY_SIZE 54

using namespace System;
ref class Deck
{
private:
	array< Carta^ >^ deck = gcnew array< Carta^ >(ARRAY_SIZE);
	int posicion;
	int contador;
	bool ya;
	static Deck^ m_instance = gcnew Deck();

public:
	Deck() {
		contador = 0;
		ya = false;
		array<String^>^ caras = { "As","Dos","Tres","Cuatro","Cinco","Seis","Siete","Ocho","Nueve","Diez",
			"Jack","Dama","Rey" };

		array<String^>^ palos = { "Corazon","Diamante","Espada","Trebol" };
		for (int i = 0; i < ARRAY_SIZE - 2; i++) {
			deck[i] = gcnew Carta(caras[i % 13], palos[i / 13]);
			if (deck[i]->getPalo() == "Diamante" || deck[i]->getPalo() == "Corazon") {
				deck[i]->setColor("Rojo");
			}
			else {
				deck[i]->setColor("Negro");
			}
		}
		deck[52] = gcnew Carta("Joker", "Negro");
		deck[53] = gcnew Carta("Joker", "Rojo");
	}

	~Deck() {
		delete[]deck;
	}

	void mostrar() {
		for (int i = 0; i<54; i++) {
			Console::WriteLine(deck[i]->print());			
		}
	}

	void mezclar() {
		for (int primero = 0; primero < 54; primero++) {
			int segundo = (rand() + time(0)) % 54;
			Carta^ temp = deck[primero];
			deck[primero] = deck[segundo];
			deck[segundo] = temp;
		}
		contador = 0;
	}

	Carta^ topCarta() {
		return deck[contador++];
	}

	void cortar(int pos) {
		if (pos != 0 && pos != 53) {
			AStack^ pila;

			for (int i = pos; i < 54; i++) {
				pila->push(deck[i]);
			}

			for (int j = 0; j < pos; j++) {
				pila->push(deck[j]);
			}

			for (int k = 0; k < 54; k++) {
				deck[k] = pila->pop();
			}
		}
	}

	Carta^ seleccionar(int pos) {
		if (pos > 53 || pos < 0) {
			Console::WriteLine("Indice invalido");
		} else if (ya == true && pos == posicion) {
			Console::WriteLine("Carta ya seleccionada");
		}
		ya = true;
		posicion = pos;
		return deck[pos];
	}

	static property Deck^ Instance { Deck^ get() { return m_instance; } }

};

#endif