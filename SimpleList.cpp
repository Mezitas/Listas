//Libraries
#include <iostream>
//_H Documents
#include "SimpleList.h"

void SList::agregarNuevo(int valor) {
	Nodo* nuevo = new Nodo(valor);
	if (cabeza == NULL) {
		cabeza = nuevo;
	}
	else {
		Nodo* temporal = cabeza;
		while (temporal->proximo != NULL) {
			temporal = temporal->proximo;
		}
		temporal->proximo = nuevo;
	}
}
int SList::imprimir() {
		return cabeza->valor;
}
void SList::borrar() {
	delete cabeza;
}