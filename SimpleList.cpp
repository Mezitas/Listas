//Libraries
#include <iostream>
#include <stdexcept>
//_H Documents
#include "SimpleList.h"
#include "ErrorOverList.h"

void SList::agregarNuevo(int valor) {
	Nodo* nuevo = new Nodo(valor);
	if (cabeza == nullptr) {
		cabeza = nuevo;
	}
	else {
		Nodo* temporal = cabeza;
		while (temporal->proximo != nullptr) {
			temporal = temporal->proximo;
		}
		temporal->proximo = nuevo;
	}
}
int SList::imprimir(int valor) {
	Nodo* temporal = cabeza;
	try {
		for (int i = 0; i <= valor;i++) {
			if (temporal->proximo == nullptr){
				if (i < valor) {
					throw("Valor puntero invalido");
				}
				else {
					return temporal->valor;
				}
			}
			else {
				temporal = temporal->proximo;
			}
		}
	}
	catch (OverList_Exception& e) {
		std::cerr << e.what();
	}
	
}
void SList::borrar() {
	delete cabeza;
}