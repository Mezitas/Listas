//libraries
#include <iostream>
//_H documents
#include "Nodo.h"

Nodo::Nodo(int valor) {
	this->valor = valor;
	proximo = NULL;
	anterior = NULL;
};