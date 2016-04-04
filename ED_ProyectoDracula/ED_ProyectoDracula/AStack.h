#pragma once

#define defaultSize 2048
#include <stdexcept>
#include "Carta.h"

generic<class E>

ref class AStack
{
private:
	int^ maxSize;
	int top;
	array< Carta^ >^ ListArray; //puntero a arreglo
	E prueba;


public:
	AStack();
	AStack(E item) : prueba(item) {}
	AStack(int size) {
		maxSize = size;
		top = 0;
		ListArray = gcnew array< Carta^ >(size);
	}

	~AStack() { delete[] ListArray; }

	void clear() { top = 0; }

	void push(Carta^ pElement) {
		if (top == maxSize) {
			Console::WriteLine("Stack is full");
		}
		ListArray[top++] = pElement;
	}

	Carta^ pop() {
		if (top == 0) {
			Console::WriteLine("Stack empty");
		}
		return ListArray[--top]; //retorna top y despues lo decrementa
	}

	Carta^ topValue() {
		if (top == 0) {
			Console::WriteLine("Stack empty");
		}
		return ListArray[top - 1];
	}

	int length() {
		return top; //larog de pila
	}
};

