//Libraries
#include <iostream>
//_H Documents
#include "SimpleList.h"

void SList::agregarNuevo(int valor) {
	if (cabeza->proximo == NULL) {
		Nodo* nuevo = new Nodo(valor);
		cabeza->proximo = nuevo;
	}
	else {
		Nodo* otro = new Nodo(0);
		cabeza->proximo = otro;
		while (otro->proximo != NULL) {
			otro->proximo = otro;
			if (otro->proximo == NULL) {
				Nodo* nuevo = new Nodo(valor);
				otro->proximo = nuevo;
			}
		}
	}
}
int SList::imprimir() {
		return cabeza->valor;
}
void SList::borrar() {
	delete cabeza;
}