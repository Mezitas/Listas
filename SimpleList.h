#define SimpleList_H
#ifdef SimpleList_H
#include "Nodo.h"
class SList {
	Nodo* cabeza;
public:
	SList() :cabeza(nullptr) {}
	void agregarNuevo(int nuevo);
	int imprimir(int valor);
	void borrar();
};


#endif // SimpleList_H

