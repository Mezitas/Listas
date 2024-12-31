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
	int valorXd=404;
	Nodo* temporal = cabeza;
	try {
		for (int i = 0; i <= valor;i++) {
			if (i < valor){
				if  (temporal->proximo == nullptr){
					throw(OverList_Exception("Valor puntero invalido"));
				}
				else {
					temporal = temporal->proximo;
				}
			}
			else {
				valorXd = temporal->valor;
			}
		}
	}
	catch (OverList_Exception& e) {
		std::cerr << e.what()<<"\n";
	}
	delete temporal;
	return valorXd;
}
void SList::borrarElemento(int posicion) {
	Nodo* temporal_1 = cabeza;
	try {
		for (int i = 0; i <= posicion; i++) {
			if ( i<posicion) {
				if (temporal_1->proximo == nullptr) {
					throw(OverList_Exception("Cantidad Invalida"));
				}
				else {
					temporal_1 = temporal_1->proximo;
				}
			}
			
		}
		Nodo* temporal_2 = cabeza;
		for (int i = 0; i < posicion; i++) {
			temporal_2 = temporal_2->proximo;
		}
		if (temporal_1->proximo == nullptr) {
			delete temporal_1;
		}
		else {
			temporal_2->proximo = temporal_1->proximo;
		}
	}
	catch(OverList_Exception& e){
		std::cerr << e.what() << "\n";
	}
}